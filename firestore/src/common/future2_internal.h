/*
 * Copyright 2021 Google LLC
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef FIREBASE_FIRESTORE_SRC_COMMON_FUTURE2_INTERNAL_H_
#define FIREBASE_FIRESTORE_SRC_COMMON_FUTURE2_INTERNAL_H_

#include "app/meta/move.h"
#include "firestore/src/common/future2.h"

namespace firebase {

class Future2CompleterBase {
 public:
  explicit Future2CompleterBase(Future2Base& future);
  virtual ~Future2CompleterBase();

  Future2CompleterBase(const Future2CompleterBase&) = delete;
  Future2CompleterBase& operator=(const Future2CompleterBase&) = delete;

  Future2CompleterBase(Future2CompleterBase&&) noexcept = delete;
  Future2CompleterBase& operator=(Future2CompleterBase&&) noexcept = delete;

  void CompleteSuccessfully(void* result, std::function<void(void*)> result_deleter, int error = 0);
  void CompleteUnsuccessfully(int error, const std::string& error_message);

 private:
  Future2Base::Impl* impl_ = nullptr;
};

template <typename T>
class Future2Completer : public Future2CompleterBase {
 public:
  using Future2CompleterBase::Future2CompleterBase;

  void CompleteSuccessfully(T* result, std::function<void(T*)> result_deleter, int error = 0) {
    Future2CompleterBase::CompleteSuccessfully(result, [result_deleter](void* result) {
      result_deleter(static_cast<T*>(result));
    }, error);
  }

  void CompleteSuccessfully(T* result, int error = 0) {
    CompleteSuccessfully(result, [](T* result) {
      delete result;
    }, error);
  }

  void CompleteSuccessfully(const T& result, int error = 0) {
    CompleteSuccessfully(new T(result), error);
  }

  void CompleteSuccessfully(T&& result, int error = 0) {
    CompleteSuccessfully(new T(firebase::Move(result)), error);
  }

};

}  // namespace firebase

#endif  // FIREBASE_FIRESTORE_SRC_COMMON_FUTURE2_INTERNAL_H_
