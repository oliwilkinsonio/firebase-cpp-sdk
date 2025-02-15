// Copyright 2022 Google LLC

// Copied from Firebase Analytics iOS SDK 8.12.1.

/// @file FIRParameterNames.h
///
/// Predefined event parameter names.
///
/// Params supply information that contextualize Events. You can associate up to 25 unique Params
/// with each Event type. Some Params are suggested below for certain common Events, but you are
/// not limited to these. You may supply extra Params for suggested Events or custom Params for
/// Custom events. Param names can be up to 40 characters long, may only contain alphanumeric
/// characters and underscores ("_"), and must start with an alphabetic character. Param values can
/// be up to 100 characters long. The "firebase_", "google_", and "ga_" prefixes are reserved and
/// should not be used.

#import <Foundation/Foundation.h>

/// Game achievement ID (NSString).
/// <pre>
///     NSDictionary *params = @{
///       kFIRParameterAchievementID : @"10_matches_won",
///       // ...
///     };
/// </pre>
static NSString *const kFIRParameterAchievementID NS_SWIFT_NAME(AnalyticsParameterAchievementID) =
    @"achievement_id";

/// The ad format (e.g. Banner, Interstitial, Rewarded, Native, Rewarded Interstitial, Instream).
/// (NSString).
/// <pre>
///     NSDictionary *params = @{
///       kFIRParameterAdFormat : @"Banner",
///       // ...
///     };
/// </pre>
static NSString *const kFIRParameterAdFormat NS_SWIFT_NAME(AnalyticsParameterAdFormat) =
    @"ad_format";

/// Ad Network Click ID (NSString). Used for network-specific click IDs which vary in format.
/// <pre>
///     NSDictionary *params = @{
///       kFIRParameterAdNetworkClickID : @"1234567",
///       // ...
///     };
/// </pre>
static NSString *const kFIRParameterAdNetworkClickID
    NS_SWIFT_NAME(AnalyticsParameterAdNetworkClickID) = @"aclid";

/// The ad platform (e.g. MoPub, IronSource) (NSString).
/// <pre>
///     NSDictionary *params = @{
///       kFIRParameterAdPlatform : @"MoPub",
///       // ...
///     };
/// </pre>
static NSString *const kFIRParameterAdPlatform NS_SWIFT_NAME(AnalyticsParameterAdPlatform) =
    @"ad_platform";

/// The ad source (e.g. AdColony) (NSString).
/// <pre>
///     NSDictionary *params = @{
///       kFIRParameterAdSource : @"AdColony",
///       // ...
///     };
/// </pre>
static NSString *const kFIRParameterAdSource NS_SWIFT_NAME(AnalyticsParameterAdSource) =
    @"ad_source";

/// The ad unit name (e.g. Banner_03) (NSString).
/// <pre>
///     NSDictionary *params = @{
///       kFIRParameterAdUnitName : @"Banner_03",
///       // ...
///     };
/// </pre>
static NSString *const kFIRParameterAdUnitName NS_SWIFT_NAME(AnalyticsParameterAdUnitName) =
    @"ad_unit_name";

/// A product affiliation to designate a supplying company or brick and mortar store location
/// (NSString). <pre>
///     NSDictionary *params = @{
///       kFIRParameterAffiliation : @"Google Store",
///       // ...
///     };
/// </pre>
static NSString *const kFIRParameterAffiliation NS_SWIFT_NAME(AnalyticsParameterAffiliation) =
    @"affiliation";

/// Campaign custom parameter (NSString). Used as a method of capturing custom data in a campaign.
/// Use varies by network.
/// <pre>
///     NSDictionary *params = @{
///       kFIRParameterCP1 : @"custom_data",
///       // ...
///     };
/// </pre>
static NSString *const kFIRParameterCP1 NS_SWIFT_NAME(AnalyticsParameterCP1) = @"cp1";

/// The individual campaign name, slogan, promo code, etc. Some networks have pre-defined macro to
/// capture campaign information, otherwise can be populated by developer. Highly Recommended
/// (NSString).
/// <pre>
///     NSDictionary *params = @{
///       kFIRParameterCampaign : @"winter_promotion",
///       // ...
///     };
/// </pre>
static NSString *const kFIRParameterCampaign NS_SWIFT_NAME(AnalyticsParameterCampaign) =
    @"campaign";

/// Campaign ID (NSString). Used for keyword analysis to identify a specific product promotion or
/// strategic campaign. This is a required key for GA4 data import.
/// <pre>
///     NSDictionary *params = @{
///       kFIRParameterCampaignID : @"7877652710",
///       // ...
///     };
/// </pre>
static NSString *const kFIRParameterCampaignID NS_SWIFT_NAME(AnalyticsParameterCampaignID) =
    @"campaign_id";

/// Character used in game (NSString).
/// <pre>
///     NSDictionary *params = @{
///       kFIRParameterCharacter : @"beat_boss",
///       // ...
///     };
/// </pre>
static NSString *const kFIRParameterCharacter NS_SWIFT_NAME(AnalyticsParameterCharacter) =
    @"character";

/// Some option on a step in an ecommerce flow (NSString).
/// <pre>
///     NSDictionary *params = @{
///       kFIRParameterCheckoutOption : @"Visa",
///       // ...
///     };
/// </pre>
/// <b>This constant has been deprecated.</b>
static NSString *const kFIRParameterCheckoutOption
    NS_SWIFT_NAME(AnalyticsParameterCheckoutOption) = @"checkout_option";

/// The checkout step (1..N) (unsigned 64-bit integer as NSNumber).
/// <pre>
///     NSDictionary *params = @{
///       kFIRParameterCheckoutStep : @"1",
///       // ...
///     };
/// </pre>
/// <b>This constant has been deprecated.</b>
static NSString *const kFIRParameterCheckoutStep NS_SWIFT_NAME(AnalyticsParameterCheckoutStep) =
    @"checkout_step";

/// Campaign content (NSString).
static NSString *const kFIRParameterContent NS_SWIFT_NAME(AnalyticsParameterContent) = @"content";

/// Type of content selected (NSString).
/// <pre>
///     NSDictionary *params = @{
///       kFIRParameterContentType : @"news article",
///       // ...
///     };
/// </pre>
static NSString *const kFIRParameterContentType NS_SWIFT_NAME(AnalyticsParameterContentType) =
    @"content_type";

/// Coupon code used for a purchase (NSString).
/// <pre>
///     NSDictionary *params = @{
///       kFIRParameterCoupon : @"SUMMER_FUN",
///       // ...
///     };
/// </pre>
static NSString *const kFIRParameterCoupon NS_SWIFT_NAME(AnalyticsParameterCoupon) = @"coupon";

/// Creative Format (NSString). Used to identify the high-level classification of the type of ad
/// served by a specific campaign.
/// <pre>
///     NSDictionary *params = @{
///       kFIRParameterCreativeFormat : @"display",
///       // ...
///     };
/// </pre>
static NSString *const kFIRParameterCreativeFormat NS_SWIFT_NAME(AnalyticsParameterCreativeFormat) =
    @"creative_format";

/// The name of a creative used in a promotional spot (NSString).
/// <pre>
///     NSDictionary *params = @{
///       kFIRParameterCreativeName : @"Summer Sale",
///       // ...
///     };
/// </pre>
static NSString *const kFIRParameterCreativeName NS_SWIFT_NAME(AnalyticsParameterCreativeName) =
    @"creative_name";

/// The name of a creative slot (NSString).
/// <pre>
///     NSDictionary *params = @{
///       kFIRParameterCreativeSlot : @"summer_banner2",
///       // ...
///     };
/// </pre>
static NSString *const kFIRParameterCreativeSlot NS_SWIFT_NAME(AnalyticsParameterCreativeSlot) =
    @"creative_slot";

/// Currency of the purchase or items associated with the event, in 3-letter
/// <a href="http://en.wikipedia.org/wiki/ISO_4217#Active_codes"> ISO_4217</a> format (NSString).
/// <pre>
///     NSDictionary *params = @{
///       kFIRParameterCurrency : @"USD",
///       // ...
///     };
/// </pre>
static NSString *const kFIRParameterCurrency NS_SWIFT_NAME(AnalyticsParameterCurrency) =
    @"currency";

/// Flight or Travel destination (NSString).
/// <pre>
///     NSDictionary *params = @{
///       kFIRParameterDestination : @"Mountain View, CA",
///       // ...
///     };
/// </pre>
static NSString *const kFIRParameterDestination NS_SWIFT_NAME(AnalyticsParameterDestination) =
    @"destination";

/// Monetary value of discount associated with a purchase (double as NSNumber).
/// <pre>
///     NSDictionary *params = @{
///       kFIRParameterDiscount : @(2.0),
///       kFIRParameterCurrency : @"USD",  // e.g. $2.00 USD
///       // ...
///     };
/// </pre>
static NSString *const kFIRParameterDiscount NS_SWIFT_NAME(AnalyticsParameterDiscount) =
    @"discount";

/// The arrival date, check-out date or rental end date for the item. This should be in
/// YYYY-MM-DD format (NSString).
/// <pre>
///     NSDictionary *params = @{
///       kFIRParameterEndDate : @"2015-09-14",
///       // ...
///     };
/// </pre>
static NSString *const kFIRParameterEndDate NS_SWIFT_NAME(AnalyticsParameterEndDate) = @"end_date";

/// Indicates that the associated event should either extend the current session
/// or start a new session if no session was active when the event was logged.
/// Specify YES to extend the current session or to start a new session; any
/// other value will not extend or start a session.
/// <pre>
///     NSDictionary *params = @{
///       kFIRParameterExtendSession : @YES,
///       // ...
///     };
/// </pre>
static NSString *const kFIRParameterExtendSession NS_SWIFT_NAME(AnalyticsParameterExtendSession) =
    @"extend_session";

/// Flight number for travel events (NSString).
/// <pre>
///     NSDictionary *params = @{
///       kFIRParameterFlightNumber : @"ZZ800",
///       // ...
///     };
/// </pre>
static NSString *const kFIRParameterFlightNumber NS_SWIFT_NAME(AnalyticsParameterFlightNumber) =
    @"flight_number";

/// Group/clan/guild ID (NSString).
/// <pre>
///     NSDictionary *params = @{
///       kFIRParameterGroupID : @"g1",
///       // ...
///     };
/// </pre>
static NSString *const kFIRParameterGroupID NS_SWIFT_NAME(AnalyticsParameterGroupID) = @"group_id";

/// The index of the item in a list (signed 64-bit integer as NSNumber).
/// <pre>
///     NSDictionary *params = @{
///       kFIRParameterIndex : @(5),
///       // ...
///     };
/// </pre>
static NSString *const kFIRParameterIndex NS_SWIFT_NAME(AnalyticsParameterIndex) = @"index";

/// Item brand (NSString).
/// <pre>
///     NSDictionary *params = @{
///       kFIRParameterItemBrand : @"Google",
///       // ...
///     };
/// </pre>
static NSString *const kFIRParameterItemBrand NS_SWIFT_NAME(AnalyticsParameterItemBrand) =
    @"item_brand";

/// Item category (context-specific) (NSString).
/// <pre>
///     NSDictionary *params = @{
///       kFIRParameterItemCategory : @"pants",
///       // ...
///     };
/// </pre>
static NSString *const kFIRParameterItemCategory NS_SWIFT_NAME(AnalyticsParameterItemCategory) =
    @"item_category";

/// Item Category (context-specific) (NSString).
/// <pre>
///     NSDictionary *params = @{
///       kFIRParameterItemCategory2 : @"pants",
///       // ...
///     };
/// </pre>
static NSString *const kFIRParameterItemCategory2 NS_SWIFT_NAME(AnalyticsParameterItemCategory2) =
    @"item_category2";

/// Item Category (context-specific) (NSString).
/// <pre>
///     NSDictionary *params = @{
///       kFIRParameterItemCategory3 : @"pants",
///       // ...
///     };
/// </pre>
static NSString *const kFIRParameterItemCategory3 NS_SWIFT_NAME(AnalyticsParameterItemCategory3) =
    @"item_category3";

/// Item Category (context-specific) (NSString).
/// <pre>
///     NSDictionary *params = @{
///       kFIRParameterItemCategory4 : @"pants",
///       // ...
///     };
/// </pre>
static NSString *const kFIRParameterItemCategory4 NS_SWIFT_NAME(AnalyticsParameterItemCategory4) =
    @"item_category4";

/// Item Category (context-specific) (NSString).
/// <pre>
///     NSDictionary *params = @{
///       kFIRParameterItemCategory5 : @"pants",
///       // ...
///     };
/// </pre>
static NSString *const kFIRParameterItemCategory5 NS_SWIFT_NAME(AnalyticsParameterItemCategory5) =
    @"item_category5";

/// Item ID (context-specific) (NSString).
/// <pre>
///     NSDictionary *params = @{
///       kFIRParameterItemID : @"SKU_12345",
///       // ...
///     };
/// </pre>
static NSString *const kFIRParameterItemID NS_SWIFT_NAME(AnalyticsParameterItemID) = @"item_id";

/// The list in which the item was presented to the user (NSString).
/// <pre>
///     NSDictionary *params = @{
///       kFIRParameterItemList : @"Search Results",
///       // ...
///     };
/// </pre>
/// <b>This constant has been deprecated. Use @c kFIRParameterItemListName constant instead.</b>
static NSString *const kFIRParameterItemList NS_SWIFT_NAME(AnalyticsParameterItemList) =
    @"item_list";

/// The ID of the list in which the item was presented to the user (NSString).
/// <pre>
///     NSDictionary *params = @{
///       kFIRParameterItemListID : @"ABC123",
///       // ...
///     };
/// </pre>
static NSString *const kFIRParameterItemListID NS_SWIFT_NAME(AnalyticsParameterItemListID) =
    @"item_list_id";

/// The name of the list in which the item was presented to the user (NSString).
/// <pre>
///     NSDictionary *params = @{
///       kFIRParameterItemListName : @"Related products",
///       // ...
///     };
/// </pre>
static NSString *const kFIRParameterItemListName NS_SWIFT_NAME(AnalyticsParameterItemListName) =
    @"item_list_name";

/// The Google <a href="https://developers.google.com/places/place-id">Place ID</a> (NSString) that
/// corresponds to the associated item. Alternatively, you can supply your own custom Location ID.
/// <pre>
///     NSDictionary *params = @{
///       kFIRParameterItemLocationID : @"ChIJiyj437sx3YAR9kUWC8QkLzQ",
///       // ...
///     };
/// </pre>
/// <b>This constant has been deprecated. Use @c kFIRParameterLocationID constant instead.</b>
static NSString *const kFIRParameterItemLocationID
    NS_SWIFT_NAME(AnalyticsParameterItemLocationID) = @"item_location_id";

/// Item Name (context-specific) (NSString).
/// <pre>
///     NSDictionary *params = @{
///       kFIRParameterItemName : @"jeggings",
///       // ...
///     };
/// </pre>
static NSString *const kFIRParameterItemName NS_SWIFT_NAME(AnalyticsParameterItemName) =
    @"item_name";

/// Item variant (NSString).
/// <pre>
///     NSDictionary *params = @{
///       kFIRParameterItemVariant : @"Black",
///       // ...
///     };
/// </pre>
static NSString *const kFIRParameterItemVariant NS_SWIFT_NAME(AnalyticsParameterItemVariant) =
    @"item_variant";

/// The list of items involved in the transaction. (NSArray).
/// <pre>
///     NSDictionary *params = @{
///       kFIRParameterItems : @[
///         @{kFIRParameterItemName : @"jeggings", kFIRParameterItemCategory : @"pants"},
///         @{kFIRParameterItemName : @"boots", kFIRParameterItemCategory : @"shoes"},
///       ],
///     };
/// </pre>
static NSString *const kFIRParameterItems NS_SWIFT_NAME(AnalyticsParameterItems) = @"items";

/// Level in game (signed 64-bit integer as NSNumber).
/// <pre>
///     NSDictionary *params = @{
///       kFIRParameterLevel : @(42),
///       // ...
///     };
/// </pre>
static NSString *const kFIRParameterLevel NS_SWIFT_NAME(AnalyticsParameterLevel) = @"level";

/// The name of a level in a game (NSString).
/// <pre>
///     NSDictionary *params = @{
///       kFIRParameterLevelName : @"room_1",
///       // ...
///     };
/// </pre>
static NSString *const kFIRParameterLevelName NS_SWIFT_NAME(AnalyticsParameterLevelName) =
    @"level_name";

/// Location (NSString). The Google <a href="https://developers.google.com/places/place-id">Place ID
/// </a> that corresponds to the associated event. Alternatively, you can supply your own custom
/// Location ID.
/// <pre>
///     NSDictionary *params = @{
///       kFIRParameterLocation : @"ChIJiyj437sx3YAR9kUWC8QkLzQ",
///       // ...
///     };
/// </pre>
static NSString *const kFIRParameterLocation NS_SWIFT_NAME(AnalyticsParameterLocation) =
    @"location";

/// The location associated with the event. Preferred to be the Google
/// <a href="https://developers.google.com/places/place-id">Place ID</a> that corresponds to the
/// associated item but could be overridden to a custom location ID string.(NSString). <pre>
///     NSDictionary *params = @{
///       kFIRParameterLocationID : @"ChIJiyj437sx3YAR9kUWC8QkLzQ",
///       // ...
///     };
/// </pre>
static NSString *const kFIRParameterLocationID NS_SWIFT_NAME(AnalyticsParameterLocationID) =
    @"location_id";

/// Marketing Tactic (NSString). Used to identify the targeting criteria applied to a specific
/// campaign.
/// <pre>
///     NSDictionary *params = @{
///       kFIRParameterMarketingTactic : @"Remarketing",
///       // ...
///     };
/// </pre>
static NSString *const kFIRParameterMarketingTactic
    NS_SWIFT_NAME(AnalyticsParameterMarketingTactic) = @"marketing_tactic";

/// The advertising or marketing medium, for example: cpc, banner, email, push. Highly recommended
/// (NSString).
/// <pre>
///     NSDictionary *params = @{
///       kFIRParameterMedium : @"email",
///       // ...
///     };
/// </pre>
static NSString *const kFIRParameterMedium NS_SWIFT_NAME(AnalyticsParameterMedium) = @"medium";

/// A particular approach used in an operation; for example, "facebook" or "email" in the context
/// of a sign_up or login event.  (NSString).
/// <pre>
///     NSDictionary *params = @{
///       kFIRParameterMethod : @"google",
///       // ...
///     };
/// </pre>
static NSString *const kFIRParameterMethod NS_SWIFT_NAME(AnalyticsParameterMethod) = @"method";

/// Number of nights staying at hotel (signed 64-bit integer as NSNumber).
/// <pre>
///     NSDictionary *params = @{
///       kFIRParameterNumberOfNights : @(3),
///       // ...
///     };
/// </pre>
static NSString *const kFIRParameterNumberOfNights
    NS_SWIFT_NAME(AnalyticsParameterNumberOfNights) = @"number_of_nights";

/// Number of passengers traveling (signed 64-bit integer as NSNumber).
/// <pre>
///     NSDictionary *params = @{
///       kFIRParameterNumberOfPassengers : @(11),
///       // ...
///     };
/// </pre>
static NSString *const kFIRParameterNumberOfPassengers
    NS_SWIFT_NAME(AnalyticsParameterNumberOfPassengers) = @"number_of_passengers";

/// Number of rooms for travel events (signed 64-bit integer as NSNumber).
/// <pre>
///     NSDictionary *params = @{
///       kFIRParameterNumberOfRooms : @(2),
///       // ...
///     };
/// </pre>
static NSString *const kFIRParameterNumberOfRooms NS_SWIFT_NAME(AnalyticsParameterNumberOfRooms) =
    @"number_of_rooms";

/// Flight or Travel origin (NSString).
/// <pre>
///     NSDictionary *params = @{
///       kFIRParameterOrigin : @"Mountain View, CA",
///       // ...
///     };
/// </pre>
static NSString *const kFIRParameterOrigin NS_SWIFT_NAME(AnalyticsParameterOrigin) = @"origin";

/// The chosen method of payment (NSString).
/// <pre>
///     NSDictionary *params = @{
///       kFIRParameterPaymentType : @"Visa",
///       // ...
///     };
/// </pre>
static NSString *const kFIRParameterPaymentType NS_SWIFT_NAME(AnalyticsParameterPaymentType) =
    @"payment_type";

/// Purchase price (double as NSNumber).
/// <pre>
///     NSDictionary *params = @{
///       kFIRParameterPrice : @(1.0),
///       kFIRParameterCurrency : @"USD",  // e.g. $1.00 USD
///       // ...
///     };
/// </pre>
static NSString *const kFIRParameterPrice NS_SWIFT_NAME(AnalyticsParameterPrice) = @"price";

/// The ID of a product promotion (NSString).
/// <pre>
///     NSDictionary *params = @{
///       kFIRParameterPromotionID : @"ABC123",
///       // ...
///     };
/// </pre>
static NSString *const kFIRParameterPromotionID NS_SWIFT_NAME(AnalyticsParameterPromotionID) =
    @"promotion_id";

/// The name of a product promotion (NSString).
/// <pre>
///     NSDictionary *params = @{
///       kFIRParameterPromotionName : @"Summer Sale",
///       // ...
///     };
/// </pre>
static NSString *const kFIRParameterPromotionName NS_SWIFT_NAME(AnalyticsParameterPromotionName) =
    @"promotion_name";

/// Purchase quantity (signed 64-bit integer as NSNumber).
/// <pre>
///     NSDictionary *params = @{
///       kFIRParameterQuantity : @(1),
///       // ...
///     };
/// </pre>
static NSString *const kFIRParameterQuantity NS_SWIFT_NAME(AnalyticsParameterQuantity) =
    @"quantity";

/// Score in game (signed 64-bit integer as NSNumber).
/// <pre>
///     NSDictionary *params = @{
///       kFIRParameterScore : @(4200),
///       // ...
///     };
/// </pre>
static NSString *const kFIRParameterScore NS_SWIFT_NAME(AnalyticsParameterScore) = @"score";

/// Current screen class, such as the class name of the UIViewController, logged with screen_view
/// event and added to every event (NSString). <pre>
///     NSDictionary *params = @{
///       kFIRParameterScreenClass : @"LoginViewController",
///       // ...
///     };
/// </pre>
static NSString *const kFIRParameterScreenClass NS_SWIFT_NAME(AnalyticsParameterScreenClass) =
    @"screen_class";

/// Current screen name, such as the name of the UIViewController, logged with screen_view event and
/// added to every event (NSString). <pre>
///     NSDictionary *params = @{
///       kFIRParameterScreenName : @"LoginView",
///       // ...
///     };
/// </pre>
static NSString *const kFIRParameterScreenName NS_SWIFT_NAME(AnalyticsParameterScreenName) =
    @"screen_name";

/// The search string/keywords used (NSString).
/// <pre>
///     NSDictionary *params = @{
///       kFIRParameterSearchTerm : @"periodic table",
///       // ...
///     };
/// </pre>
static NSString *const kFIRParameterSearchTerm NS_SWIFT_NAME(AnalyticsParameterSearchTerm) =
    @"search_term";

/// Shipping cost associated with a transaction (double as NSNumber).
/// <pre>
///     NSDictionary *params = @{
///       kFIRParameterShipping : @(5.99),
///       kFIRParameterCurrency : @"USD",  // e.g. $5.99 USD
///       // ...
///     };
/// </pre>
static NSString *const kFIRParameterShipping NS_SWIFT_NAME(AnalyticsParameterShipping) =
    @"shipping";

/// The shipping tier (e.g. Ground, Air, Next-day) selected for delivery of the purchased item
/// (NSString).
/// <pre>
///     NSDictionary *params = @{
///       kFIRParameterShippingTier : @"Ground",
///       // ...
///     };
/// </pre>
static NSString *const kFIRParameterShippingTier NS_SWIFT_NAME(AnalyticsParameterShippingTier) =
    @"shipping_tier";

/// Sign up method (NSString).
/// <pre>
///     NSDictionary *params = @{
///       kFIRParameterSignUpMethod : @"google",
///       // ...
///     };
/// </pre>
///
/// <b>This constant has been deprecated. Use Method constant instead.</b>
static NSString *const kFIRParameterSignUpMethod NS_SWIFT_NAME(AnalyticsParameterSignUpMethod) =
    @"sign_up_method";

/// The origin of your traffic, such as an Ad network (for example, google) or partner (urban
/// airship). Identify the advertiser, site, publication, etc. that is sending traffic to your
/// property. Highly recommended (NSString).
/// <pre>
///     NSDictionary *params = @{
///       kFIRParameterSource : @"InMobi",
///       // ...
///     };
/// </pre>
static NSString *const kFIRParameterSource NS_SWIFT_NAME(AnalyticsParameterSource) = @"source";

/// Source Platform (NSString). Used to identify the platform responsible for directing traffic to a
/// given Analytics property (e.g., a buying platform where budgets, targeting criteria, etc. are
/// set, a platform for managing organic traffic data, etc.).
/// <pre>
///     NSDictionary *params = @{
///       kFIRParameterSourcePlatform : @"sa360",
///       // ...
///     };
/// </pre>
static NSString *const kFIRParameterSourcePlatform NS_SWIFT_NAME(AnalyticsParameterSourcePlatform) =
    @"source_platform";

/// The departure date, check-in date or rental start date for the item. This should be in
/// YYYY-MM-DD format (NSString).
/// <pre>
///     NSDictionary *params = @{
///       kFIRParameterStartDate : @"2015-09-14",
///       // ...
///     };
/// </pre>
static NSString *const kFIRParameterStartDate NS_SWIFT_NAME(AnalyticsParameterStartDate) =
    @"start_date";

/// The result of an operation. Specify 1 to indicate success and 0 to indicate failure (unsigned
/// integer as NSNumber).
/// <pre>
///     NSDictionary *params = @{
///       kFIRParameterSuccess : @(1),
///       // ...
///     };
/// </pre>
static NSString *const kFIRParameterSuccess NS_SWIFT_NAME(AnalyticsParameterSuccess) = @"success";

/// Tax cost associated with a transaction (double as NSNumber).
/// <pre>
///     NSDictionary *params = @{
///       kFIRParameterTax : @(2.43),
///       kFIRParameterCurrency : @"USD",  // e.g. $2.43 USD
///       // ...
///     };
/// </pre>
static NSString *const kFIRParameterTax NS_SWIFT_NAME(AnalyticsParameterTax) = @"tax";

/// If you're manually tagging keyword campaigns, you should use utm_term to specify the keyword
/// (NSString).
/// <pre>
///     NSDictionary *params = @{
///       kFIRParameterTerm : @"game",
///       // ...
///     };
/// </pre>
static NSString *const kFIRParameterTerm NS_SWIFT_NAME(AnalyticsParameterTerm) = @"term";

/// The unique identifier of a transaction (NSString).
/// <pre>
///     NSDictionary *params = @{
///       kFIRParameterTransactionID : @"T12345",
///       // ...
///     };
/// </pre>
static NSString *const kFIRParameterTransactionID NS_SWIFT_NAME(AnalyticsParameterTransactionID) =
    @"transaction_id";

/// Travel class (NSString).
/// <pre>
///     NSDictionary *params = @{
///       kFIRParameterTravelClass : @"business",
///       // ...
///     };
/// </pre>
static NSString *const kFIRParameterTravelClass NS_SWIFT_NAME(AnalyticsParameterTravelClass) =
    @"travel_class";

/// A context-specific numeric value which is accumulated automatically for each event type. This is
/// a general purpose parameter that is useful for accumulating a key metric that pertains to an
/// event. Examples include revenue, distance, time and points. Value should be specified as signed
/// 64-bit integer or double as NSNumber. Notes: Values for pre-defined currency-related events
/// (such as @c kFIREventAddToCart) should be supplied using double as NSNumber and must be
/// accompanied by a @c kFIRParameterCurrency parameter. The valid range of accumulated values is
/// [-9,223,372,036,854.77, 9,223,372,036,854.77]. Supplying a non-numeric value, omitting the
/// corresponding @c kFIRParameterCurrency parameter, or supplying an invalid
/// <a href="https://goo.gl/qqX3J2">currency code</a> for conversion events will cause that
/// conversion to be omitted from reporting.
/// <pre>
///     NSDictionary *params = @{
///       kFIRParameterValue : @(3.99),
///       kFIRParameterCurrency : @"USD",  // e.g. $3.99 USD
///       // ...
///     };
/// </pre>
static NSString *const kFIRParameterValue NS_SWIFT_NAME(AnalyticsParameterValue) = @"value";

/// Name of virtual currency type (NSString).
/// <pre>
///     NSDictionary *params = @{
///       kFIRParameterVirtualCurrencyName : @"virtual_currency_name",
///       // ...
///     };
/// </pre>
static NSString *const kFIRParameterVirtualCurrencyName
    NS_SWIFT_NAME(AnalyticsParameterVirtualCurrencyName) = @"virtual_currency_name";
