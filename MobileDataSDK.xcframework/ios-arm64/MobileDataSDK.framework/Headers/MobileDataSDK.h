#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class MDSDKSupportedPlatform, MDSDKKotlinEnumCompanion, MDSDKKotlinEnum<E>, MDSDKKotlinArray<T>, MDSDKVehAvailRSCore, MDSDKRootAvailResponseCompanion, MDSDKRootAvailResponse, MDSDKVehRentalCore, MDSDKVehVendorAvailWrapper, MDSDKVehAvailRSCoreCompanion, MDSDKVehVendorAvail, MDSDKRentalLocationCompanion, MDSDKRentalLocation, MDSDKVehRentalCoreCompanion, MDSDKVendor, MDSDKVehAvail, MDSDKInfo, MDSDKVehVendorAvailCompanion, MDSDKVehVendorAvailWrapperArray, MDSDKVehVendorAvailWrapperSingle, MDSDKAdditionalInfoCounterLocationCompanion, MDSDKAdditionalInfoDistanceCompanion, MDSDKAdditionalInfoDistance, MDSDKAdditionalInfoExtensionsCompanion, MDSDKAdditionalInfoExtensions, MDSDKBookEngineCompanion, MDSDKBookEngine, MDSDKCancellationPolicyCompanion, MDSDKCancellationPolicy, MDSDKCustomerReviewsCompanion, MDSDKCustomerReviews, MDSDKInfoLocationDetail, MDSDKInfoTpaExtensions, MDSDKInfoCompanion, MDSDKAdditionalInfoCounterLocation, MDSDKInfoAdditionalInfoCompanion, MDSDKInfoAdditionalInfo, MDSDKInfoCountryNameCompanion, MDSDKInfoCountryName, MDSDKInfoLocationAddressCompanion, MDSDKInfoLocationAddress, MDSDKInfoTelephone, MDSDKInfoLocationDetailCompanion, MDSDKInfoTelephoneCompanion, MDSDKVendorPictureURL, MDSDKOtaPaymentTypes, MDSDKInfoTpaExtensionsCompanion, MDSDKOtaPaymentTypesCompanion, MDSDKVendorPictureURLCompanion, MDSDKVehAvailCore, MDSDKVehAvailInfo, MDSDKVehAvailCompanion, MDSDKChargeEquipmentCompanion, MDSDKChargeEquipment, MDSDKConfigCompanion, MDSDKConfig, MDSDKDebitCardCompanion, MDSDKDebitCard, MDSDKDepositCompanion, MDSDKDeposit, MDSDKEquipmentCompanion, MDSDKEquipment, MDSDKFuelPolicyCompanion, MDSDKFuelPolicy, MDSDKPayLaterCompanion, MDSDKPayLater, MDSDKPricedEquipCompanion, MDSDKPricedEquip, MDSDKPricedEquipsWrapper, MDSDKPricedEquipsWrapperArray, MDSDKPricedEquipsWrapperSingle, MDSDKRateDistanceCompanion, MDSDKRateDistance, MDSDKRateQualifierCompanion, MDSDKRateQualifier, MDSDKSpecialOfferCompanion, MDSDKSpecialOffer, MDSDKUpsellCompanion, MDSDKUpsell, MDSDKVehAvailCoreVehicle, MDSDKVehAvailCoreRentalRate, MDSDKVehAvailCoreTotalCharge, MDSDKVehAvailCorePricedEquip, MDSDKVehAvailCoreFee, MDSDKVehAvailCoreReference, MDSDKVehAvailCoreExtensions, MDSDKVehAvailCoreCompanion, MDSDKVehMakeModelExtension, MDSDKVehAvailCoreExtensionsCompanion, MDSDKVehAvailCoreFeeCompanion, MDSDKVehAvailCorePricedEquipCompanion, MDSDKVehAvailCoreReferenceCompanion, MDSDKVehicleCharges, MDSDKVehAvailCoreRentalRateCompanion, MDSDKVehAvailCoreTotalChargeCompanion, MDSDKVehType, MDSDKVehClass, MDSDKVehMakeModel, MDSDKVehAvailCoreVehicleCompanion, MDSDKVehClassCompanion, MDSDKVehMakeModelCompanion, MDSDKVehMakeModelExtensionCompanion, MDSDKVehTypeCompanion, MDSDKVehicleChargesCompanion, MDSDKAvailInfoChargeCompanion, MDSDKAvailInfoCharge, MDSDKAvailInfoCoverageCompanion, MDSDKAvailInfoCoverage, MDSDKAvailInfoDeductibleCompanion, MDSDKAvailInfoDeductible, MDSDKVehAvailInfoPricedCoverage, MDSDKVehAvailInfoCompanion, MDSDKVehAvailInfoPricedCoverageCompanion, MDSDKVendorCompanion, MDSDKCTSdkEnvironment, MDSDKSearchIATA, MDSDKKotlinThrowable, MDSDKLoggerFactory, MDSDKPricedEquipsDisplaySerializer, MDSDKVehVendorAvailSerializer, MDSDKKotlinx_serialization_coreSerializersModule, MDSDKKotlinx_serialization_coreSerialKind, MDSDKKotlinNothing;

@protocol MDSDKPlatform, MDSDKKotlinComparable, MDSDKKotlinx_serialization_coreKSerializer, MDSDKCTLogger, MDSDKKotlinx_serialization_coreEncoder, MDSDKKotlinx_serialization_coreSerialDescriptor, MDSDKKotlinx_serialization_coreSerializationStrategy, MDSDKKotlinx_serialization_coreDecoder, MDSDKKotlinx_serialization_coreDeserializationStrategy, MDSDKKotlinIterator, MDSDKKotlinx_serialization_coreCompositeEncoder, MDSDKKotlinAnnotation, MDSDKKotlinx_serialization_coreCompositeDecoder, MDSDKKotlinx_serialization_coreSerializersModuleCollector, MDSDKKotlinKClass, MDSDKKotlinKDeclarationContainer, MDSDKKotlinKAnnotatedElement, MDSDKKotlinKClassifier;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface MDSDKBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface MDSDKBase (MDSDKBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface MDSDKMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface MDSDKMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorMDSDKKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface MDSDKNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end

__attribute__((swift_name("KotlinByte")))
@interface MDSDKByte : MDSDKNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface MDSDKUByte : MDSDKNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface MDSDKShort : MDSDKNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface MDSDKUShort : MDSDKNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface MDSDKInt : MDSDKNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface MDSDKUInt : MDSDKNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface MDSDKLong : MDSDKNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface MDSDKULong : MDSDKNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface MDSDKFloat : MDSDKNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface MDSDKDouble : MDSDKNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface MDSDKBoolean : MDSDKNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Greeting")))
@interface MDSDKGreeting : MDSDKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)greet __attribute__((swift_name("greet()")));
@end

__attribute__((swift_name("Platform")))
@protocol MDSDKPlatform
@required
@property (readonly) NSString *engine __attribute__((swift_name("engine")));
@property (readonly) MDSDKSupportedPlatform *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IOSPlatform")))
@interface MDSDKIOSPlatform : MDSDKBase <MDSDKPlatform>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (readonly) NSString *engine __attribute__((swift_name("engine")));
@property (readonly) MDSDKSupportedPlatform *name __attribute__((swift_name("name")));
@end

__attribute__((swift_name("KotlinComparable")))
@protocol MDSDKKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end

__attribute__((swift_name("KotlinEnum")))
@interface MDSDKKotlinEnum<E> : MDSDKBase <MDSDKKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSDKKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SupportedPlatform")))
@interface MDSDKSupportedPlatform : MDSDKKotlinEnum<MDSDKSupportedPlatform *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MDSDKSupportedPlatform *android __attribute__((swift_name("android")));
@property (class, readonly) MDSDKSupportedPlatform *ios __attribute__((swift_name("ios")));
+ (MDSDKKotlinArray<MDSDKSupportedPlatform *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<MDSDKSupportedPlatform *> *entries __attribute__((swift_name("entries")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RootAvailResponse")))
@interface MDSDKRootAvailResponse : MDSDKBase
- (instancetype)initWithData:(MDSDKVehAvailRSCore *)data __attribute__((swift_name("init(data:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSDKRootAvailResponseCompanion *companion __attribute__((swift_name("companion")));
- (MDSDKRootAvailResponse *)doCopyData:(MDSDKVehAvailRSCore *)data __attribute__((swift_name("doCopy(data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MDSDKVehAvailRSCore *data __attribute__((swift_name("data")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RootAvailResponse.Companion")))
@interface MDSDKRootAvailResponseCompanion : MDSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSDKRootAvailResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VehAvailRSCore")))
@interface MDSDKVehAvailRSCore : MDSDKBase
- (instancetype)initWithVehRentalCore:(MDSDKVehRentalCore *)vehRentalCore vehVendorAvailsWrapper:(MDSDKVehVendorAvailWrapper * _Nullable)vehVendorAvailsWrapper __attribute__((swift_name("init(vehRentalCore:vehVendorAvailsWrapper:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSDKVehAvailRSCoreCompanion *companion __attribute__((swift_name("companion")));
- (MDSDKVehAvailRSCore *)doCopyVehRentalCore:(MDSDKVehRentalCore *)vehRentalCore vehVendorAvailsWrapper:(MDSDKVehVendorAvailWrapper * _Nullable)vehVendorAvailsWrapper __attribute__((swift_name("doCopy(vehRentalCore:vehVendorAvailsWrapper:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MDSDKVehRentalCore *vehRentalCore __attribute__((swift_name("vehRentalCore")));
@property (readonly) NSArray<MDSDKVehVendorAvail *> *vehVendorAvails __attribute__((swift_name("vehVendorAvails")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VehAvailRSCore.Companion")))
@interface MDSDKVehAvailRSCoreCompanion : MDSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSDKVehAvailRSCoreCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RentalLocation")))
@interface MDSDKRentalLocation : MDSDKBase
- (instancetype)initWithCode:(NSString *)code name:(NSString *)name __attribute__((swift_name("init(code:name:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSDKRentalLocationCompanion *companion __attribute__((swift_name("companion")));
- (MDSDKRentalLocation *)doCopyCode:(NSString *)code name:(NSString *)name __attribute__((swift_name("doCopy(code:name:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *code __attribute__((swift_name("code")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RentalLocation.Companion")))
@interface MDSDKRentalLocationCompanion : MDSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSDKRentalLocationCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VehRentalCore")))
@interface MDSDKVehRentalCore : MDSDKBase
- (instancetype)initWithPickUpDateTime:(NSString *)pickUpDateTime dropOffDateTime:(NSString *)dropOffDateTime pickUpLocation:(MDSDKRentalLocation *)pickUpLocation returnLocation:(MDSDKRentalLocation *)returnLocation __attribute__((swift_name("init(pickUpDateTime:dropOffDateTime:pickUpLocation:returnLocation:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSDKVehRentalCoreCompanion *companion __attribute__((swift_name("companion")));
- (MDSDKVehRentalCore *)doCopyPickUpDateTime:(NSString *)pickUpDateTime dropOffDateTime:(NSString *)dropOffDateTime pickUpLocation:(MDSDKRentalLocation *)pickUpLocation returnLocation:(MDSDKRentalLocation *)returnLocation __attribute__((swift_name("doCopy(pickUpDateTime:dropOffDateTime:pickUpLocation:returnLocation:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *dropOffDateTime __attribute__((swift_name("dropOffDateTime")));
@property (readonly) NSString *pickUpDateTime __attribute__((swift_name("pickUpDateTime")));
@property (readonly) MDSDKRentalLocation *pickUpLocation __attribute__((swift_name("pickUpLocation")));
@property (readonly) MDSDKRentalLocation *returnLocation __attribute__((swift_name("returnLocation")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VehRentalCore.Companion")))
@interface MDSDKVehRentalCoreCompanion : MDSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSDKVehRentalCoreCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VehVendorAvail")))
@interface MDSDKVehVendorAvail : MDSDKBase
- (instancetype)initWithVendor:(MDSDKVendor *)vendor vehAvail:(NSArray<MDSDKVehAvail *> *)vehAvail info:(MDSDKInfo *)info __attribute__((swift_name("init(vendor:vehAvail:info:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSDKVehVendorAvailCompanion *companion __attribute__((swift_name("companion")));
- (MDSDKVehVendorAvail *)doCopyVendor:(MDSDKVendor *)vendor vehAvail:(NSArray<MDSDKVehAvail *> *)vehAvail info:(MDSDKInfo *)info __attribute__((swift_name("doCopy(vendor:vehAvail:info:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MDSDKInfo *info __attribute__((swift_name("info")));
@property (readonly) NSArray<MDSDKVehAvail *> *vehAvail __attribute__((swift_name("vehAvail")));
@property (readonly) MDSDKVendor *vendor __attribute__((swift_name("vendor")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VehVendorAvail.Companion")))
@interface MDSDKVehVendorAvailCompanion : MDSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSDKVehVendorAvailCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("VehVendorAvailWrapper")))
@interface MDSDKVehVendorAvailWrapper : MDSDKBase
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VehVendorAvailWrapper.Array")))
@interface MDSDKVehVendorAvailWrapperArray : MDSDKVehVendorAvailWrapper
- (instancetype)initWithData:(NSArray<MDSDKVehVendorAvail *> *)data __attribute__((swift_name("init(data:)"))) __attribute__((objc_designated_initializer));
- (MDSDKVehVendorAvailWrapperArray *)doCopyData:(NSArray<MDSDKVehVendorAvail *> *)data __attribute__((swift_name("doCopy(data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<MDSDKVehVendorAvail *> *data __attribute__((swift_name("data")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VehVendorAvailWrapper.Single")))
@interface MDSDKVehVendorAvailWrapperSingle : MDSDKVehVendorAvailWrapper
- (instancetype)initWithData:(MDSDKVehVendorAvail *)data __attribute__((swift_name("init(data:)"))) __attribute__((objc_designated_initializer));
- (MDSDKVehVendorAvailWrapperSingle *)doCopyData:(MDSDKVehVendorAvail *)data __attribute__((swift_name("doCopy(data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MDSDKVehVendorAvail *data __attribute__((swift_name("data")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AdditionalInfoCounterLocation")))
@interface MDSDKAdditionalInfoCounterLocation : MDSDKBase
- (instancetype)initWithCounterCode:(NSString *)counterCode __attribute__((swift_name("init(counterCode:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSDKAdditionalInfoCounterLocationCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString *counterCode __attribute__((swift_name("counterCode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AdditionalInfoCounterLocation.Companion")))
@interface MDSDKAdditionalInfoCounterLocationCompanion : MDSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSDKAdditionalInfoCounterLocationCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AdditionalInfoDistance")))
@interface MDSDKAdditionalInfoDistance : MDSDKBase
- (instancetype)initWithMeasure:(NSString *)measure unit:(NSString *)unit __attribute__((swift_name("init(measure:unit:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSDKAdditionalInfoDistanceCompanion *companion __attribute__((swift_name("companion")));
- (MDSDKAdditionalInfoDistance *)doCopyMeasure:(NSString *)measure unit:(NSString *)unit __attribute__((swift_name("doCopy(measure:unit:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *measure __attribute__((swift_name("measure")));
@property (readonly) NSString *unit __attribute__((swift_name("unit")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AdditionalInfoDistance.Companion")))
@interface MDSDKAdditionalInfoDistanceCompanion : MDSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSDKAdditionalInfoDistanceCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AdditionalInfoExtensions")))
@interface MDSDKAdditionalInfoExtensions : MDSDKBase
- (instancetype)initWithDistance:(MDSDKAdditionalInfoDistance *)distance __attribute__((swift_name("init(distance:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSDKAdditionalInfoExtensionsCompanion *companion __attribute__((swift_name("companion")));
- (MDSDKAdditionalInfoExtensions *)doCopyDistance:(MDSDKAdditionalInfoDistance *)distance __attribute__((swift_name("doCopy(distance:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MDSDKAdditionalInfoDistance *distance __attribute__((swift_name("distance")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AdditionalInfoExtensions.Companion")))
@interface MDSDKAdditionalInfoExtensionsCompanion : MDSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSDKAdditionalInfoExtensionsCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BookEngine")))
@interface MDSDKBookEngine : MDSDKBase
- (instancetype)initWithUniqueID:(NSString *)uniqueID engineLoadID:(NSString *)engineLoadID queryID:(NSString *)queryID displayStrikethrough:(NSString *)displayStrikethrough layout:(NSString * _Nullable)layout __attribute__((swift_name("init(uniqueID:engineLoadID:queryID:displayStrikethrough:layout:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSDKBookEngineCompanion *companion __attribute__((swift_name("companion")));
- (MDSDKBookEngine *)doCopyUniqueID:(NSString *)uniqueID engineLoadID:(NSString *)engineLoadID queryID:(NSString *)queryID displayStrikethrough:(NSString *)displayStrikethrough layout:(NSString * _Nullable)layout __attribute__((swift_name("doCopy(uniqueID:engineLoadID:queryID:displayStrikethrough:layout:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *displayStrikethrough __attribute__((swift_name("displayStrikethrough")));
@property (readonly) NSString *engineLoadID __attribute__((swift_name("engineLoadID")));
@property (readonly) NSString * _Nullable layout __attribute__((swift_name("layout")));
@property (readonly) NSString *queryID __attribute__((swift_name("queryID")));
@property (readonly) NSString *uniqueID __attribute__((swift_name("uniqueID")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BookEngine.Companion")))
@interface MDSDKBookEngineCompanion : MDSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSDKBookEngineCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CancellationPolicy")))
@interface MDSDKCancellationPolicy : MDSDKBase
- (instancetype)initWithApplicability:(NSString *)applicability unitType:(NSString *)unitType quantity:(NSString *)quantity limitTimestamp:(NSString *)limitTimestamp __attribute__((swift_name("init(applicability:unitType:quantity:limitTimestamp:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSDKCancellationPolicyCompanion *companion __attribute__((swift_name("companion")));
- (MDSDKCancellationPolicy *)doCopyApplicability:(NSString *)applicability unitType:(NSString *)unitType quantity:(NSString *)quantity limitTimestamp:(NSString *)limitTimestamp __attribute__((swift_name("doCopy(applicability:unitType:quantity:limitTimestamp:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *applicability __attribute__((swift_name("applicability")));
@property (readonly) NSString *limitTimestamp __attribute__((swift_name("limitTimestamp")));
@property (readonly) NSString *quantity __attribute__((swift_name("quantity")));
@property (readonly) NSString *unitType __attribute__((swift_name("unitType")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CancellationPolicy.Companion")))
@interface MDSDKCancellationPolicyCompanion : MDSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSDKCancellationPolicyCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CustomerReviews")))
@interface MDSDKCustomerReviews : MDSDKBase
- (instancetype)initWithName:(NSString *)name overall:(NSString *)overall overAllReview:(NSString *)overAllReview carReview:(NSString *)carReview deskReview:(NSString *)deskReview dropOffReview:(NSString *)dropOffReview priceReview:(NSString *)priceReview pickupReview:(NSString *)pickupReview averageWaitMinutes:(NSString *)averageWaitMinutes totalAgent:(NSString *)totalAgent __attribute__((swift_name("init(name:overall:overAllReview:carReview:deskReview:dropOffReview:priceReview:pickupReview:averageWaitMinutes:totalAgent:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSDKCustomerReviewsCompanion *companion __attribute__((swift_name("companion")));
- (MDSDKCustomerReviews *)doCopyName:(NSString *)name overall:(NSString *)overall overAllReview:(NSString *)overAllReview carReview:(NSString *)carReview deskReview:(NSString *)deskReview dropOffReview:(NSString *)dropOffReview priceReview:(NSString *)priceReview pickupReview:(NSString *)pickupReview averageWaitMinutes:(NSString *)averageWaitMinutes totalAgent:(NSString *)totalAgent __attribute__((swift_name("doCopy(name:overall:overAllReview:carReview:deskReview:dropOffReview:priceReview:pickupReview:averageWaitMinutes:totalAgent:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *averageWaitMinutes __attribute__((swift_name("averageWaitMinutes")));
@property (readonly) NSString *carReview __attribute__((swift_name("carReview")));
@property (readonly) NSString *deskReview __attribute__((swift_name("deskReview")));
@property (readonly) NSString *dropOffReview __attribute__((swift_name("dropOffReview")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *overAllReview __attribute__((swift_name("overAllReview")));
@property (readonly) NSString *overall __attribute__((swift_name("overall")));
@property (readonly) NSString *pickupReview __attribute__((swift_name("pickupReview")));
@property (readonly) NSString *priceReview __attribute__((swift_name("priceReview")));
@property (readonly) NSString *totalAgent __attribute__((swift_name("totalAgent")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CustomerReviews.Companion")))
@interface MDSDKCustomerReviewsCompanion : MDSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSDKCustomerReviewsCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Info")))
@interface MDSDKInfo : MDSDKBase
- (instancetype)initWithLocationDetail:(NSArray<MDSDKInfoLocationDetail *> *)locationDetail infoExtensions:(MDSDKInfoTpaExtensions *)infoExtensions __attribute__((swift_name("init(locationDetail:infoExtensions:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSDKInfoCompanion *companion __attribute__((swift_name("companion")));
- (MDSDKInfo *)doCopyLocationDetail:(NSArray<MDSDKInfoLocationDetail *> *)locationDetail infoExtensions:(MDSDKInfoTpaExtensions *)infoExtensions __attribute__((swift_name("doCopy(locationDetail:infoExtensions:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MDSDKInfoTpaExtensions *infoExtensions __attribute__((swift_name("infoExtensions")));

/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=com/cartrawler/mobiledatasdk/utils/serializers/ForceListSerializer))
*/
@property (readonly) NSArray<MDSDKInfoLocationDetail *> *locationDetail __attribute__((swift_name("locationDetail")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Info.Companion")))
@interface MDSDKInfoCompanion : MDSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSDKInfoCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InfoAdditionalInfo")))
@interface MDSDKInfoAdditionalInfo : MDSDKBase
- (instancetype)initWithCounterLocation:(MDSDKAdditionalInfoCounterLocation *)counterLocation extensions:(MDSDKAdditionalInfoExtensions *)extensions __attribute__((swift_name("init(counterLocation:extensions:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSDKInfoAdditionalInfoCompanion *companion __attribute__((swift_name("companion")));
- (MDSDKInfoAdditionalInfo *)doCopyCounterLocation:(MDSDKAdditionalInfoCounterLocation *)counterLocation extensions:(MDSDKAdditionalInfoExtensions *)extensions __attribute__((swift_name("doCopy(counterLocation:extensions:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MDSDKAdditionalInfoCounterLocation *counterLocation __attribute__((swift_name("counterLocation")));
@property (readonly) MDSDKAdditionalInfoExtensions *extensions __attribute__((swift_name("extensions")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InfoAdditionalInfo.Companion")))
@interface MDSDKInfoAdditionalInfoCompanion : MDSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSDKInfoAdditionalInfoCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InfoCountryName")))
@interface MDSDKInfoCountryName : MDSDKBase
- (instancetype)initWithCode:(NSString *)code __attribute__((swift_name("init(code:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSDKInfoCountryNameCompanion *companion __attribute__((swift_name("companion")));
- (MDSDKInfoCountryName *)doCopyCode:(NSString *)code __attribute__((swift_name("doCopy(code:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *code __attribute__((swift_name("code")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InfoCountryName.Companion")))
@interface MDSDKInfoCountryNameCompanion : MDSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSDKInfoCountryNameCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InfoLocationAddress")))
@interface MDSDKInfoLocationAddress : MDSDKBase
- (instancetype)initWithAddressLine:(NSString *)addressLine coordinates:(NSString *)coordinates countryName:(MDSDKInfoCountryName *)countryName __attribute__((swift_name("init(addressLine:coordinates:countryName:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSDKInfoLocationAddressCompanion *companion __attribute__((swift_name("companion")));
- (MDSDKInfoLocationAddress *)doCopyAddressLine:(NSString *)addressLine coordinates:(NSString *)coordinates countryName:(MDSDKInfoCountryName *)countryName __attribute__((swift_name("doCopy(addressLine:coordinates:countryName:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *addressLine __attribute__((swift_name("addressLine")));
@property (readonly) NSString *coordinates __attribute__((swift_name("coordinates")));
@property (readonly) MDSDKInfoCountryName *countryName __attribute__((swift_name("countryName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InfoLocationAddress.Companion")))
@interface MDSDKInfoLocationAddressCompanion : MDSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSDKInfoLocationAddressCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InfoLocationDetail")))
@interface MDSDKInfoLocationDetail : MDSDKBase
- (instancetype)initWithCode:(NSString *)code name:(NSString *)name atAirport:(NSString *)atAirport extendedLocationCode:(NSString *)extendedLocationCode infoLocationAddress:(MDSDKInfoLocationAddress *)infoLocationAddress infoTelephone:(MDSDKInfoTelephone *)infoTelephone infoAdditionalInfo:(MDSDKInfoAdditionalInfo *)infoAdditionalInfo __attribute__((swift_name("init(code:name:atAirport:extendedLocationCode:infoLocationAddress:infoTelephone:infoAdditionalInfo:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSDKInfoLocationDetailCompanion *companion __attribute__((swift_name("companion")));
- (MDSDKInfoLocationDetail *)doCopyCode:(NSString *)code name:(NSString *)name atAirport:(NSString *)atAirport extendedLocationCode:(NSString *)extendedLocationCode infoLocationAddress:(MDSDKInfoLocationAddress *)infoLocationAddress infoTelephone:(MDSDKInfoTelephone *)infoTelephone infoAdditionalInfo:(MDSDKInfoAdditionalInfo *)infoAdditionalInfo __attribute__((swift_name("doCopy(code:name:atAirport:extendedLocationCode:infoLocationAddress:infoTelephone:infoAdditionalInfo:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *atAirport __attribute__((swift_name("atAirport")));
@property (readonly) NSString *code __attribute__((swift_name("code")));
@property (readonly) NSString *extendedLocationCode __attribute__((swift_name("extendedLocationCode")));
@property (readonly) MDSDKInfoAdditionalInfo *infoAdditionalInfo __attribute__((swift_name("infoAdditionalInfo")));
@property (readonly) MDSDKInfoLocationAddress *infoLocationAddress __attribute__((swift_name("infoLocationAddress")));
@property (readonly) MDSDKInfoTelephone *infoTelephone __attribute__((swift_name("infoTelephone")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InfoLocationDetail.Companion")))
@interface MDSDKInfoLocationDetailCompanion : MDSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSDKInfoLocationDetailCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InfoTelephone")))
@interface MDSDKInfoTelephone : MDSDKBase
- (instancetype)initWithPhoneNumber:(NSString *)phoneNumber __attribute__((swift_name("init(phoneNumber:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSDKInfoTelephoneCompanion *companion __attribute__((swift_name("companion")));
- (MDSDKInfoTelephone *)doCopyPhoneNumber:(NSString *)phoneNumber __attribute__((swift_name("doCopy(phoneNumber:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *phoneNumber __attribute__((swift_name("phoneNumber")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InfoTelephone.Companion")))
@interface MDSDKInfoTelephoneCompanion : MDSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSDKInfoTelephoneCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InfoTpaExtensions")))
@interface MDSDKInfoTpaExtensions : MDSDKBase
- (instancetype)initWithVendorPictureURL:(MDSDKVendorPictureURL *)vendorPictureURL customerReviews:(MDSDKCustomerReviews *)customerReviews bookEngine:(MDSDKBookEngine *)bookEngine cancellationPolicy:(MDSDKCancellationPolicy * _Nullable)cancellationPolicy paymentTypes:(NSArray<MDSDKOtaPaymentTypes *> * _Nullable)paymentTypes totalVendorOffers:(NSString *)totalVendorOffers __attribute__((swift_name("init(vendorPictureURL:customerReviews:bookEngine:cancellationPolicy:paymentTypes:totalVendorOffers:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSDKInfoTpaExtensionsCompanion *companion __attribute__((swift_name("companion")));
- (MDSDKInfoTpaExtensions *)doCopyVendorPictureURL:(MDSDKVendorPictureURL *)vendorPictureURL customerReviews:(MDSDKCustomerReviews *)customerReviews bookEngine:(MDSDKBookEngine *)bookEngine cancellationPolicy:(MDSDKCancellationPolicy * _Nullable)cancellationPolicy paymentTypes:(NSArray<MDSDKOtaPaymentTypes *> * _Nullable)paymentTypes totalVendorOffers:(NSString *)totalVendorOffers __attribute__((swift_name("doCopy(vendorPictureURL:customerReviews:bookEngine:cancellationPolicy:paymentTypes:totalVendorOffers:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MDSDKBookEngine *bookEngine __attribute__((swift_name("bookEngine")));
@property (readonly) MDSDKCancellationPolicy * _Nullable cancellationPolicy __attribute__((swift_name("cancellationPolicy")));
@property (readonly) MDSDKCustomerReviews *customerReviews __attribute__((swift_name("customerReviews")));
@property (readonly) NSArray<MDSDKOtaPaymentTypes *> * _Nullable paymentTypes __attribute__((swift_name("paymentTypes")));
@property (readonly) NSString *totalVendorOffers __attribute__((swift_name("totalVendorOffers")));
@property (readonly) MDSDKVendorPictureURL *vendorPictureURL __attribute__((swift_name("vendorPictureURL")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InfoTpaExtensions.Companion")))
@interface MDSDKInfoTpaExtensionsCompanion : MDSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSDKInfoTpaExtensionsCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OtaPaymentTypes")))
@interface MDSDKOtaPaymentTypes : MDSDKBase
- (instancetype)initWithType:(NSString *)type code:(NSString *)code name:(NSString *)name merchantId:(NSString * _Nullable)merchantId currency:(NSString * _Nullable)currency descriptor:(NSString * _Nullable)descriptor __attribute__((swift_name("init(type:code:name:merchantId:currency:descriptor:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSDKOtaPaymentTypesCompanion *companion __attribute__((swift_name("companion")));
- (MDSDKOtaPaymentTypes *)doCopyType:(NSString *)type code:(NSString *)code name:(NSString *)name merchantId:(NSString * _Nullable)merchantId currency:(NSString * _Nullable)currency descriptor:(NSString * _Nullable)descriptor __attribute__((swift_name("doCopy(type:code:name:merchantId:currency:descriptor:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *code __attribute__((swift_name("code")));
@property (readonly) NSString * _Nullable currency __attribute__((swift_name("currency")));
@property (readonly) NSString * _Nullable descriptor __attribute__((swift_name("descriptor")));
@property (readonly) NSString * _Nullable merchantId __attribute__((swift_name("merchantId")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OtaPaymentTypes.Companion")))
@interface MDSDKOtaPaymentTypesCompanion : MDSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSDKOtaPaymentTypesCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VendorPictureURL")))
@interface MDSDKVendorPictureURL : MDSDKBase
- (instancetype)initWithUrl:(NSString *)url __attribute__((swift_name("init(url:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSDKVendorPictureURLCompanion *companion __attribute__((swift_name("companion")));
- (MDSDKVendorPictureURL *)doCopyUrl:(NSString *)url __attribute__((swift_name("doCopy(url:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VendorPictureURL.Companion")))
@interface MDSDKVendorPictureURLCompanion : MDSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSDKVendorPictureURLCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VehAvail")))
@interface MDSDKVehAvail : MDSDKBase
- (instancetype)initWithVehAvailCore:(MDSDKVehAvailCore *)vehAvailCore vehAvailInfo:(MDSDKVehAvailInfo *)vehAvailInfo __attribute__((swift_name("init(vehAvailCore:vehAvailInfo:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSDKVehAvailCompanion *companion __attribute__((swift_name("companion")));
- (MDSDKVehAvail *)doCopyVehAvailCore:(MDSDKVehAvailCore *)vehAvailCore vehAvailInfo:(MDSDKVehAvailInfo *)vehAvailInfo __attribute__((swift_name("doCopy(vehAvailCore:vehAvailInfo:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MDSDKVehAvailCore *vehAvailCore __attribute__((swift_name("vehAvailCore")));
@property (readonly) MDSDKVehAvailInfo *vehAvailInfo __attribute__((swift_name("vehAvailInfo")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VehAvail.Companion")))
@interface MDSDKVehAvailCompanion : MDSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSDKVehAvailCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChargeEquipment")))
@interface MDSDKChargeEquipment : MDSDKBase
- (instancetype)initWithAmount:(NSString *)amount currencyCode:(NSString *)currencyCode taxInclusive:(BOOL)taxInclusive includedInRate:(BOOL)includedInRate __attribute__((swift_name("init(amount:currencyCode:taxInclusive:includedInRate:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSDKChargeEquipmentCompanion *companion __attribute__((swift_name("companion")));
- (MDSDKChargeEquipment *)doCopyAmount:(NSString *)amount currencyCode:(NSString *)currencyCode taxInclusive:(BOOL)taxInclusive includedInRate:(BOOL)includedInRate __attribute__((swift_name("doCopy(amount:currencyCode:taxInclusive:includedInRate:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *amount __attribute__((swift_name("amount")));
@property (readonly) NSString *currencyCode __attribute__((swift_name("currencyCode")));
@property (readonly) BOOL includedInRate __attribute__((swift_name("includedInRate")));
@property (readonly) BOOL taxInclusive __attribute__((swift_name("taxInclusive")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChargeEquipment.Companion")))
@interface MDSDKChargeEquipmentCompanion : MDSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSDKChargeEquipmentCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Config")))
@interface MDSDKConfig : MDSDKBase
- (instancetype)initWithOrderBy:(int32_t)orderBy relevance:(int32_t)relevance preferred:(NSString *)preferred payLaterPaymentDays:(NSString * _Nullable)payLaterPaymentDays __attribute__((swift_name("init(orderBy:relevance:preferred:payLaterPaymentDays:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSDKConfigCompanion *companion __attribute__((swift_name("companion")));
- (MDSDKConfig *)doCopyOrderBy:(int32_t)orderBy relevance:(int32_t)relevance preferred:(NSString *)preferred payLaterPaymentDays:(NSString * _Nullable)payLaterPaymentDays __attribute__((swift_name("doCopy(orderBy:relevance:preferred:payLaterPaymentDays:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t orderBy __attribute__((swift_name("orderBy")));
@property (readonly) NSString * _Nullable payLaterPaymentDays __attribute__((swift_name("payLaterPaymentDays")));
@property (readonly) NSString *preferred __attribute__((swift_name("preferred")));
@property (readonly) int32_t relevance __attribute__((swift_name("relevance")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Config.Companion")))
@interface MDSDKConfigCompanion : MDSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSDKConfigCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DebitCard")))
@interface MDSDKDebitCard : MDSDKBase
- (instancetype)initWithOnArrival:(BOOL)onArrival __attribute__((swift_name("init(onArrival:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSDKDebitCardCompanion *companion __attribute__((swift_name("companion")));
- (MDSDKDebitCard *)doCopyOnArrival:(BOOL)onArrival __attribute__((swift_name("doCopy(onArrival:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL onArrival __attribute__((swift_name("onArrival")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DebitCard.Companion")))
@interface MDSDKDebitCardCompanion : MDSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSDKDebitCardCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Deposit")))
@interface MDSDKDeposit : MDSDKBase
- (instancetype)initWithCurrencyCode:(NSString *)currencyCode amount:(double)amount minAmount:(double)minAmount maxAmount:(double)maxAmount __attribute__((swift_name("init(currencyCode:amount:minAmount:maxAmount:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSDKDepositCompanion *companion __attribute__((swift_name("companion")));
- (MDSDKDeposit *)doCopyCurrencyCode:(NSString *)currencyCode amount:(double)amount minAmount:(double)minAmount maxAmount:(double)maxAmount __attribute__((swift_name("doCopy(currencyCode:amount:minAmount:maxAmount:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) double amount __attribute__((swift_name("amount")));
@property (readonly) NSString *currencyCode __attribute__((swift_name("currencyCode")));
@property (readonly) double maxAmount __attribute__((swift_name("maxAmount")));
@property (readonly) double minAmount __attribute__((swift_name("minAmount")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Deposit.Companion")))
@interface MDSDKDepositCompanion : MDSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSDKDepositCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Equipment")))
@interface MDSDKEquipment : MDSDKBase
- (instancetype)initWithEquipType:(NSString *)equipType description:(NSString *)description __attribute__((swift_name("init(equipType:description:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSDKEquipmentCompanion *companion __attribute__((swift_name("companion")));
- (MDSDKEquipment *)doCopyEquipType:(NSString *)equipType description:(NSString *)description __attribute__((swift_name("doCopy(equipType:description:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) NSString *equipType __attribute__((swift_name("equipType")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Equipment.Companion")))
@interface MDSDKEquipmentCompanion : MDSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSDKEquipmentCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FuelPolicy")))
@interface MDSDKFuelPolicy : MDSDKBase
- (instancetype)initWithType:(NSString *)type description:(NSString *)description __attribute__((swift_name("init(type:description:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSDKFuelPolicyCompanion *companion __attribute__((swift_name("companion")));
- (MDSDKFuelPolicy *)doCopyType:(NSString *)type description:(NSString *)description __attribute__((swift_name("doCopy(type:description:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) NSString *type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FuelPolicy.Companion")))
@interface MDSDKFuelPolicyCompanion : MDSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSDKFuelPolicyCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PayLater")))
@interface MDSDKPayLater : MDSDKBase
- (instancetype)initWithAvailable:(BOOL)available __attribute__((swift_name("init(available:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSDKPayLaterCompanion *companion __attribute__((swift_name("companion")));
- (MDSDKPayLater *)doCopyAvailable:(BOOL)available __attribute__((swift_name("doCopy(available:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL available __attribute__((swift_name("available")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PayLater.Companion")))
@interface MDSDKPayLaterCompanion : MDSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSDKPayLaterCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PricedEquip")))
@interface MDSDKPricedEquip : MDSDKBase
- (instancetype)initWithEquipType:(NSString *)equipType amount:(NSString *)amount currencyCode:(NSString *)currencyCode rateType:(NSString *)rateType __attribute__((swift_name("init(equipType:amount:currencyCode:rateType:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSDKPricedEquipCompanion *companion __attribute__((swift_name("companion")));
- (MDSDKPricedEquip *)doCopyEquipType:(NSString *)equipType amount:(NSString *)amount currencyCode:(NSString *)currencyCode rateType:(NSString *)rateType __attribute__((swift_name("doCopy(equipType:amount:currencyCode:rateType:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *amount __attribute__((swift_name("amount")));
@property (readonly) NSString *currencyCode __attribute__((swift_name("currencyCode")));
@property (readonly) NSString *equipType __attribute__((swift_name("equipType")));
@property (readonly) NSString *rateType __attribute__((swift_name("rateType")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PricedEquip.Companion")))
@interface MDSDKPricedEquipCompanion : MDSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSDKPricedEquipCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("PricedEquipsWrapper")))
@interface MDSDKPricedEquipsWrapper : MDSDKBase
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PricedEquipsWrapper.Array")))
@interface MDSDKPricedEquipsWrapperArray : MDSDKPricedEquipsWrapper
- (instancetype)initWithPricedEquips:(NSArray<MDSDKPricedEquip *> *)pricedEquips __attribute__((swift_name("init(pricedEquips:)"))) __attribute__((objc_designated_initializer));
- (MDSDKPricedEquipsWrapperArray *)doCopyPricedEquips:(NSArray<MDSDKPricedEquip *> *)pricedEquips __attribute__((swift_name("doCopy(pricedEquips:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<MDSDKPricedEquip *> *pricedEquips __attribute__((swift_name("pricedEquips")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PricedEquipsWrapper.Single")))
@interface MDSDKPricedEquipsWrapperSingle : MDSDKPricedEquipsWrapper
- (instancetype)initWithPricedEquip:(MDSDKPricedEquip *)pricedEquip __attribute__((swift_name("init(pricedEquip:)"))) __attribute__((objc_designated_initializer));
- (MDSDKPricedEquipsWrapperSingle *)doCopyPricedEquip:(MDSDKPricedEquip *)pricedEquip __attribute__((swift_name("doCopy(pricedEquip:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MDSDKPricedEquip *pricedEquip __attribute__((swift_name("pricedEquip")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RateDistance")))
@interface MDSDKRateDistance : MDSDKBase
- (instancetype)initWithUnlimited:(BOOL)unlimited quantity:(NSString * _Nullable)quantity distanceUnit:(NSString * _Nullable)distanceUnit periodUnitName:(NSString * _Nullable)periodUnitName __attribute__((swift_name("init(unlimited:quantity:distanceUnit:periodUnitName:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSDKRateDistanceCompanion *companion __attribute__((swift_name("companion")));
- (MDSDKRateDistance *)doCopyUnlimited:(BOOL)unlimited quantity:(NSString * _Nullable)quantity distanceUnit:(NSString * _Nullable)distanceUnit periodUnitName:(NSString * _Nullable)periodUnitName __attribute__((swift_name("doCopy(unlimited:quantity:distanceUnit:periodUnitName:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable distanceUnit __attribute__((swift_name("distanceUnit")));
@property (readonly) NSString * _Nullable periodUnitName __attribute__((swift_name("periodUnitName")));
@property (readonly) NSString * _Nullable quantity __attribute__((swift_name("quantity")));
@property (readonly) BOOL unlimited __attribute__((swift_name("unlimited")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RateDistance.Companion")))
@interface MDSDKRateDistanceCompanion : MDSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSDKRateDistanceCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RateQualifier")))
@interface MDSDKRateQualifier : MDSDKBase
- (instancetype)initWithRateQualifier:(NSString *)rateQualifier __attribute__((swift_name("init(rateQualifier:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSDKRateQualifierCompanion *companion __attribute__((swift_name("companion")));
- (MDSDKRateQualifier *)doCopyRateQualifier:(NSString *)rateQualifier __attribute__((swift_name("doCopy(rateQualifier:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *rateQualifier __attribute__((swift_name("rateQualifier")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RateQualifier.Companion")))
@interface MDSDKRateQualifierCompanion : MDSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSDKRateQualifierCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SpecialOffer")))
@interface MDSDKSpecialOffer : MDSDKBase
- (instancetype)initWithType:(NSString *)type shortText:(NSString *)shortText text:(NSString *)text discount:(double)discount amount:(double)amount currencyCode:(NSString * _Nullable)currencyCode value:(double)value discountInPercent:(double)discountInPercent marketingType:(NSString * _Nullable)marketingType __attribute__((swift_name("init(type:shortText:text:discount:amount:currencyCode:value:discountInPercent:marketingType:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSDKSpecialOfferCompanion *companion __attribute__((swift_name("companion")));
- (MDSDKSpecialOffer *)doCopyType:(NSString *)type shortText:(NSString *)shortText text:(NSString *)text discount:(double)discount amount:(double)amount currencyCode:(NSString * _Nullable)currencyCode value:(double)value discountInPercent:(double)discountInPercent marketingType:(NSString * _Nullable)marketingType __attribute__((swift_name("doCopy(type:shortText:text:discount:amount:currencyCode:value:discountInPercent:marketingType:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) double amount __attribute__((swift_name("amount")));
@property (readonly) NSString * _Nullable currencyCode __attribute__((swift_name("currencyCode")));
@property (readonly) double discount __attribute__((swift_name("discount")));
@property (readonly) double discountInPercent __attribute__((swift_name("discountInPercent")));
@property (readonly) NSString * _Nullable marketingType __attribute__((swift_name("marketingType")));
@property (readonly) NSString *shortText __attribute__((swift_name("shortText")));
@property (readonly) NSString *text __attribute__((swift_name("text")));
@property (readonly) NSString *type __attribute__((swift_name("type")));
@property (readonly) double value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SpecialOffer.Companion")))
@interface MDSDKSpecialOfferCompanion : MDSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSDKSpecialOfferCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Upsell")))
@interface MDSDKUpsell : MDSDKBase
- (instancetype)initWithInsurance:(NSString *)insurance reason:(NSString * _Nullable)reason __attribute__((swift_name("init(insurance:reason:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSDKUpsellCompanion *companion __attribute__((swift_name("companion")));
- (MDSDKUpsell *)doCopyInsurance:(NSString *)insurance reason:(NSString * _Nullable)reason __attribute__((swift_name("doCopy(insurance:reason:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *insurance __attribute__((swift_name("insurance")));
@property (readonly) NSString * _Nullable reason __attribute__((swift_name("reason")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Upsell.Companion")))
@interface MDSDKUpsellCompanion : MDSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSDKUpsellCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VehAvailCore")))
@interface MDSDKVehAvailCore : MDSDKBase
- (instancetype)initWithVehicle:(MDSDKVehAvailCoreVehicle *)vehicle rentalRate:(MDSDKVehAvailCoreRentalRate *)rentalRate totalCharge:(MDSDKVehAvailCoreTotalCharge *)totalCharge pricedEquips:(NSArray<MDSDKVehAvailCorePricedEquip *> *)pricedEquips fees:(NSArray<MDSDKVehAvailCoreFee *> *)fees reference:(MDSDKVehAvailCoreReference *)reference extension:(MDSDKVehAvailCoreExtensions *)extension __attribute__((swift_name("init(vehicle:rentalRate:totalCharge:pricedEquips:fees:reference:extension:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSDKVehAvailCoreCompanion *companion __attribute__((swift_name("companion")));
- (MDSDKVehAvailCore *)doCopyVehicle:(MDSDKVehAvailCoreVehicle *)vehicle rentalRate:(MDSDKVehAvailCoreRentalRate *)rentalRate totalCharge:(MDSDKVehAvailCoreTotalCharge *)totalCharge pricedEquips:(NSArray<MDSDKVehAvailCorePricedEquip *> *)pricedEquips fees:(NSArray<MDSDKVehAvailCoreFee *> *)fees reference:(MDSDKVehAvailCoreReference *)reference extension:(MDSDKVehAvailCoreExtensions *)extension __attribute__((swift_name("doCopy(vehicle:rentalRate:totalCharge:pricedEquips:fees:reference:extension:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MDSDKVehAvailCoreExtensions *extension __attribute__((swift_name("extension")));
@property (readonly) NSArray<MDSDKVehAvailCoreFee *> *fees __attribute__((swift_name("fees")));
@property (readonly) NSArray<MDSDKVehAvailCorePricedEquip *> *pricedEquips __attribute__((swift_name("pricedEquips")));
@property (readonly) MDSDKVehAvailCoreReference *reference __attribute__((swift_name("reference")));
@property (readonly) MDSDKVehAvailCoreRentalRate *rentalRate __attribute__((swift_name("rentalRate")));
@property (readonly) MDSDKVehAvailCoreTotalCharge *totalCharge __attribute__((swift_name("totalCharge")));
@property (readonly) MDSDKVehAvailCoreVehicle *vehicle __attribute__((swift_name("vehicle")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VehAvailCore.Companion")))
@interface MDSDKVehAvailCoreCompanion : MDSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSDKVehAvailCoreCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VehAvailCoreExtensions")))
@interface MDSDKVehAvailCoreExtensions : MDSDKBase
- (instancetype)initWithUpSell:(MDSDKUpsell *)upSell vehicleMakeModelExtension:(MDSDKVehMakeModelExtension *)vehicleMakeModelExtension debitCard:(MDSDKDebitCard *)debitCard payLater:(MDSDKPayLater *)payLater fuelPolicy:(MDSDKFuelPolicy *)fuelPolicy config:(MDSDKConfig *)config specialOffers:(NSArray<MDSDKSpecialOffer *> *)specialOffers deposit:(MDSDKDeposit *)deposit pricedEquipWrapper:(MDSDKPricedEquipsWrapper * _Nullable)pricedEquipWrapper __attribute__((swift_name("init(upSell:vehicleMakeModelExtension:debitCard:payLater:fuelPolicy:config:specialOffers:deposit:pricedEquipWrapper:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSDKVehAvailCoreExtensionsCompanion *companion __attribute__((swift_name("companion")));
- (MDSDKVehAvailCoreExtensions *)doCopyUpSell:(MDSDKUpsell *)upSell vehicleMakeModelExtension:(MDSDKVehMakeModelExtension *)vehicleMakeModelExtension debitCard:(MDSDKDebitCard *)debitCard payLater:(MDSDKPayLater *)payLater fuelPolicy:(MDSDKFuelPolicy *)fuelPolicy config:(MDSDKConfig *)config specialOffers:(NSArray<MDSDKSpecialOffer *> *)specialOffers deposit:(MDSDKDeposit *)deposit pricedEquipWrapper:(MDSDKPricedEquipsWrapper * _Nullable)pricedEquipWrapper __attribute__((swift_name("doCopy(upSell:vehicleMakeModelExtension:debitCard:payLater:fuelPolicy:config:specialOffers:deposit:pricedEquipWrapper:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MDSDKConfig *config __attribute__((swift_name("config")));
@property (readonly) MDSDKDebitCard *debitCard __attribute__((swift_name("debitCard")));
@property (readonly) MDSDKDeposit *deposit __attribute__((swift_name("deposit")));
@property (readonly) MDSDKFuelPolicy *fuelPolicy __attribute__((swift_name("fuelPolicy")));
@property (readonly) MDSDKPayLater *payLater __attribute__((swift_name("payLater")));
@property (readonly) NSArray<MDSDKPricedEquip *> *pricedEquipsDisplay __attribute__((swift_name("pricedEquipsDisplay")));
@property (readonly) NSArray<MDSDKSpecialOffer *> *specialOffers __attribute__((swift_name("specialOffers")));
@property (readonly) MDSDKUpsell *upSell __attribute__((swift_name("upSell")));
@property (readonly) MDSDKVehMakeModelExtension *vehicleMakeModelExtension __attribute__((swift_name("vehicleMakeModelExtension")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VehAvailCoreExtensions.Companion")))
@interface MDSDKVehAvailCoreExtensionsCompanion : MDSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSDKVehAvailCoreExtensionsCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VehAvailCoreFee")))
@interface MDSDKVehAvailCoreFee : MDSDKBase
- (instancetype)initWithPurposeCode:(NSString *)purposeCode currencyCode:(NSString *)currencyCode amount:(NSString *)amount __attribute__((swift_name("init(purposeCode:currencyCode:amount:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSDKVehAvailCoreFeeCompanion *companion __attribute__((swift_name("companion")));
- (MDSDKVehAvailCoreFee *)doCopyPurposeCode:(NSString *)purposeCode currencyCode:(NSString *)currencyCode amount:(NSString *)amount __attribute__((swift_name("doCopy(purposeCode:currencyCode:amount:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *amount __attribute__((swift_name("amount")));
@property (readonly) NSString *currencyCode __attribute__((swift_name("currencyCode")));
@property (readonly) NSString *purposeCode __attribute__((swift_name("purposeCode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VehAvailCoreFee.Companion")))
@interface MDSDKVehAvailCoreFeeCompanion : MDSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSDKVehAvailCoreFeeCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VehAvailCorePricedEquip")))
@interface MDSDKVehAvailCorePricedEquip : MDSDKBase
- (instancetype)initWithEquipment:(MDSDKEquipment *)equipment charge:(MDSDKChargeEquipment *)charge __attribute__((swift_name("init(equipment:charge:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSDKVehAvailCorePricedEquipCompanion *companion __attribute__((swift_name("companion")));
- (MDSDKVehAvailCorePricedEquip *)doCopyEquipment:(MDSDKEquipment *)equipment charge:(MDSDKChargeEquipment *)charge __attribute__((swift_name("doCopy(equipment:charge:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MDSDKChargeEquipment *charge __attribute__((swift_name("charge")));
@property (readonly) MDSDKEquipment *equipment __attribute__((swift_name("equipment")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VehAvailCorePricedEquip.Companion")))
@interface MDSDKVehAvailCorePricedEquipCompanion : MDSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSDKVehAvailCorePricedEquipCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VehAvailCoreReference")))
@interface MDSDKVehAvailCoreReference : MDSDKBase
- (instancetype)initWithId:(NSString *)id __attribute__((swift_name("init(id:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSDKVehAvailCoreReferenceCompanion *companion __attribute__((swift_name("companion")));
- (MDSDKVehAvailCoreReference *)doCopyId:(NSString *)id __attribute__((swift_name("doCopy(id:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VehAvailCoreReference.Companion")))
@interface MDSDKVehAvailCoreReferenceCompanion : MDSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSDKVehAvailCoreReferenceCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VehAvailCoreRentalRate")))
@interface MDSDKVehAvailCoreRentalRate : MDSDKBase
- (instancetype)initWithVehicleCharges:(NSArray<MDSDKVehicleCharges *> *)vehicleCharges rateQualifier:(MDSDKRateQualifier *)rateQualifier rateDistance:(MDSDKRateDistance * _Nullable)rateDistance __attribute__((swift_name("init(vehicleCharges:rateQualifier:rateDistance:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSDKVehAvailCoreRentalRateCompanion *companion __attribute__((swift_name("companion")));
- (MDSDKVehAvailCoreRentalRate *)doCopyVehicleCharges:(NSArray<MDSDKVehicleCharges *> *)vehicleCharges rateQualifier:(MDSDKRateQualifier *)rateQualifier rateDistance:(MDSDKRateDistance * _Nullable)rateDistance __attribute__((swift_name("doCopy(vehicleCharges:rateQualifier:rateDistance:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MDSDKRateDistance * _Nullable rateDistance __attribute__((swift_name("rateDistance")));
@property (readonly) MDSDKRateQualifier *rateQualifier __attribute__((swift_name("rateQualifier")));
@property (readonly) NSArray<MDSDKVehicleCharges *> *vehicleCharges __attribute__((swift_name("vehicleCharges")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VehAvailCoreRentalRate.Companion")))
@interface MDSDKVehAvailCoreRentalRateCompanion : MDSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSDKVehAvailCoreRentalRateCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VehAvailCoreTotalCharge")))
@interface MDSDKVehAvailCoreTotalCharge : MDSDKBase
- (instancetype)initWithRateTotalAmount:(NSString *)rateTotalAmount estimatedTotalAmount:(NSString *)estimatedTotalAmount currencyCode:(NSString *)currencyCode __attribute__((swift_name("init(rateTotalAmount:estimatedTotalAmount:currencyCode:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSDKVehAvailCoreTotalChargeCompanion *companion __attribute__((swift_name("companion")));
- (MDSDKVehAvailCoreTotalCharge *)doCopyRateTotalAmount:(NSString *)rateTotalAmount estimatedTotalAmount:(NSString *)estimatedTotalAmount currencyCode:(NSString *)currencyCode __attribute__((swift_name("doCopy(rateTotalAmount:estimatedTotalAmount:currencyCode:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *currencyCode __attribute__((swift_name("currencyCode")));
@property (readonly) NSString *estimatedTotalAmount __attribute__((swift_name("estimatedTotalAmount")));
@property (readonly) NSString *rateTotalAmount __attribute__((swift_name("rateTotalAmount")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VehAvailCoreTotalCharge.Companion")))
@interface MDSDKVehAvailCoreTotalChargeCompanion : MDSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSDKVehAvailCoreTotalChargeCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VehAvailCoreVehicle")))
@interface MDSDKVehAvailCoreVehicle : MDSDKBase
- (instancetype)initWithTransmissionType:(NSString *)transmissionType fuelType:(NSString *)fuelType driveType:(NSString *)driveType passengerQuantity:(NSString *)passengerQuantity baggageQuantity:(NSString *)baggageQuantity vehType:(MDSDKVehType *)vehType vehClass:(MDSDKVehClass *)vehClass vehMakeModel:(MDSDKVehMakeModel *)vehMakeModel pictureURL:(NSString *)pictureURL airConditionInd:(BOOL)airConditionInd isBluetooth:(BOOL)isBluetooth isUsbConnection:(BOOL)isUsbConnection isGPS:(BOOL)isGPS __attribute__((swift_name("init(transmissionType:fuelType:driveType:passengerQuantity:baggageQuantity:vehType:vehClass:vehMakeModel:pictureURL:airConditionInd:isBluetooth:isUsbConnection:isGPS:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSDKVehAvailCoreVehicleCompanion *companion __attribute__((swift_name("companion")));
- (MDSDKVehAvailCoreVehicle *)doCopyTransmissionType:(NSString *)transmissionType fuelType:(NSString *)fuelType driveType:(NSString *)driveType passengerQuantity:(NSString *)passengerQuantity baggageQuantity:(NSString *)baggageQuantity vehType:(MDSDKVehType *)vehType vehClass:(MDSDKVehClass *)vehClass vehMakeModel:(MDSDKVehMakeModel *)vehMakeModel pictureURL:(NSString *)pictureURL airConditionInd:(BOOL)airConditionInd isBluetooth:(BOOL)isBluetooth isUsbConnection:(BOOL)isUsbConnection isGPS:(BOOL)isGPS __attribute__((swift_name("doCopy(transmissionType:fuelType:driveType:passengerQuantity:baggageQuantity:vehType:vehClass:vehMakeModel:pictureURL:airConditionInd:isBluetooth:isUsbConnection:isGPS:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL airConditionInd __attribute__((swift_name("airConditionInd")));
@property (readonly) NSString *baggageQuantity __attribute__((swift_name("baggageQuantity")));
@property (readonly) NSString *driveType __attribute__((swift_name("driveType")));
@property (readonly) NSString *fuelType __attribute__((swift_name("fuelType")));
@property (readonly) BOOL isBluetooth __attribute__((swift_name("isBluetooth")));
@property (readonly) BOOL isGPS __attribute__((swift_name("isGPS")));
@property (readonly) BOOL isUsbConnection __attribute__((swift_name("isUsbConnection")));
@property (readonly) NSString *passengerQuantity __attribute__((swift_name("passengerQuantity")));
@property (readonly) NSString *pictureURL __attribute__((swift_name("pictureURL")));
@property (readonly) NSString *transmissionType __attribute__((swift_name("transmissionType")));
@property (readonly) MDSDKVehClass *vehClass __attribute__((swift_name("vehClass")));
@property (readonly) MDSDKVehMakeModel *vehMakeModel __attribute__((swift_name("vehMakeModel")));
@property (readonly) MDSDKVehType *vehType __attribute__((swift_name("vehType")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VehAvailCoreVehicle.Companion")))
@interface MDSDKVehAvailCoreVehicleCompanion : MDSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSDKVehAvailCoreVehicleCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VehClass")))
@interface MDSDKVehClass : MDSDKBase
- (instancetype)initWithSize:(NSString *)size __attribute__((swift_name("init(size:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSDKVehClassCompanion *companion __attribute__((swift_name("companion")));
- (MDSDKVehClass *)doCopySize:(NSString *)size __attribute__((swift_name("doCopy(size:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *size __attribute__((swift_name("size")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VehClass.Companion")))
@interface MDSDKVehClassCompanion : MDSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSDKVehClassCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VehMakeModel")))
@interface MDSDKVehMakeModel : MDSDKBase
- (instancetype)initWithName:(NSString *)name code:(NSString *)code __attribute__((swift_name("init(name:code:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSDKVehMakeModelCompanion *companion __attribute__((swift_name("companion")));
- (MDSDKVehMakeModel *)doCopyName:(NSString *)name code:(NSString *)code __attribute__((swift_name("doCopy(name:code:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *code __attribute__((swift_name("code")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VehMakeModel.Companion")))
@interface MDSDKVehMakeModelCompanion : MDSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSDKVehMakeModelCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VehMakeModelExtension")))
@interface MDSDKVehMakeModelExtension : MDSDKBase
- (instancetype)initWithOrSimilarText:(NSString * _Nullable)orSimilarText __attribute__((swift_name("init(orSimilarText:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSDKVehMakeModelExtensionCompanion *companion __attribute__((swift_name("companion")));
- (MDSDKVehMakeModelExtension *)doCopyOrSimilarText:(NSString * _Nullable)orSimilarText __attribute__((swift_name("doCopy(orSimilarText:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable orSimilarText __attribute__((swift_name("orSimilarText")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VehMakeModelExtension.Companion")))
@interface MDSDKVehMakeModelExtensionCompanion : MDSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSDKVehMakeModelExtensionCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VehType")))
@interface MDSDKVehType : MDSDKBase
- (instancetype)initWithVehicleCategory:(NSString *)vehicleCategory doorCount:(NSString *)doorCount __attribute__((swift_name("init(vehicleCategory:doorCount:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSDKVehTypeCompanion *companion __attribute__((swift_name("companion")));
- (MDSDKVehType *)doCopyVehicleCategory:(NSString *)vehicleCategory doorCount:(NSString *)doorCount __attribute__((swift_name("doCopy(vehicleCategory:doorCount:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *doorCount __attribute__((swift_name("doorCount")));
@property (readonly) NSString *vehicleCategory __attribute__((swift_name("vehicleCategory")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VehType.Companion")))
@interface MDSDKVehTypeCompanion : MDSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSDKVehTypeCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VehicleCharges")))
@interface MDSDKVehicleCharges : MDSDKBase
- (instancetype)initWithDescription:(NSString *)description taxInclusive:(BOOL)taxInclusive includedInRate:(BOOL)includedInRate purpose:(NSString *)purpose __attribute__((swift_name("init(description:taxInclusive:includedInRate:purpose:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSDKVehicleChargesCompanion *companion __attribute__((swift_name("companion")));
- (MDSDKVehicleCharges *)doCopyDescription:(NSString *)description taxInclusive:(BOOL)taxInclusive includedInRate:(BOOL)includedInRate purpose:(NSString *)purpose __attribute__((swift_name("doCopy(description:taxInclusive:includedInRate:purpose:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) BOOL includedInRate __attribute__((swift_name("includedInRate")));
@property (readonly) NSString *purpose __attribute__((swift_name("purpose")));
@property (readonly) BOOL taxInclusive __attribute__((swift_name("taxInclusive")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VehicleCharges.Companion")))
@interface MDSDKVehicleChargesCompanion : MDSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSDKVehicleChargesCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AvailInfoCharge")))
@interface MDSDKAvailInfoCharge : MDSDKBase
- (instancetype)initWithDescription:(NSString *)description taxInclusive:(BOOL)taxInclusive includedInRate:(BOOL)includedInRate __attribute__((swift_name("init(description:taxInclusive:includedInRate:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSDKAvailInfoChargeCompanion *companion __attribute__((swift_name("companion")));
- (MDSDKAvailInfoCharge *)doCopyDescription:(NSString *)description taxInclusive:(BOOL)taxInclusive includedInRate:(BOOL)includedInRate __attribute__((swift_name("doCopy(description:taxInclusive:includedInRate:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) BOOL includedInRate __attribute__((swift_name("includedInRate")));
@property (readonly) BOOL taxInclusive __attribute__((swift_name("taxInclusive")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AvailInfoCharge.Companion")))
@interface MDSDKAvailInfoChargeCompanion : MDSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSDKAvailInfoChargeCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AvailInfoCoverage")))
@interface MDSDKAvailInfoCoverage : MDSDKBase
- (instancetype)initWithCoverageType:(NSString *)coverageType __attribute__((swift_name("init(coverageType:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSDKAvailInfoCoverageCompanion *companion __attribute__((swift_name("companion")));
- (MDSDKAvailInfoCoverage *)doCopyCoverageType:(NSString *)coverageType __attribute__((swift_name("doCopy(coverageType:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *coverageType __attribute__((swift_name("coverageType")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AvailInfoCoverage.Companion")))
@interface MDSDKAvailInfoCoverageCompanion : MDSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSDKAvailInfoCoverageCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AvailInfoDeductible")))
@interface MDSDKAvailInfoDeductible : MDSDKBase
- (instancetype)initWithAmount:(double)amount currencyCode:(NSString *)currencyCode __attribute__((swift_name("init(amount:currencyCode:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSDKAvailInfoDeductibleCompanion *companion __attribute__((swift_name("companion")));
- (MDSDKAvailInfoDeductible *)doCopyAmount:(double)amount currencyCode:(NSString *)currencyCode __attribute__((swift_name("doCopy(amount:currencyCode:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) double amount __attribute__((swift_name("amount")));
@property (readonly) NSString *currencyCode __attribute__((swift_name("currencyCode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AvailInfoDeductible.Companion")))
@interface MDSDKAvailInfoDeductibleCompanion : MDSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSDKAvailInfoDeductibleCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VehAvailInfo")))
@interface MDSDKVehAvailInfo : MDSDKBase
- (instancetype)initWithPricedCoverages:(NSArray<MDSDKVehAvailInfoPricedCoverage *> *)pricedCoverages __attribute__((swift_name("init(pricedCoverages:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSDKVehAvailInfoCompanion *companion __attribute__((swift_name("companion")));
- (MDSDKVehAvailInfo *)doCopyPricedCoverages:(NSArray<MDSDKVehAvailInfoPricedCoverage *> *)pricedCoverages __attribute__((swift_name("doCopy(pricedCoverages:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<MDSDKVehAvailInfoPricedCoverage *> *pricedCoverages __attribute__((swift_name("pricedCoverages")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VehAvailInfo.Companion")))
@interface MDSDKVehAvailInfoCompanion : MDSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSDKVehAvailInfoCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VehAvailInfoPricedCoverage")))
@interface MDSDKVehAvailInfoPricedCoverage : MDSDKBase
- (instancetype)initWithCoverage:(MDSDKAvailInfoCoverage *)coverage charge:(MDSDKAvailInfoCharge *)charge deductible:(MDSDKAvailInfoDeductible * _Nullable)deductible __attribute__((swift_name("init(coverage:charge:deductible:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSDKVehAvailInfoPricedCoverageCompanion *companion __attribute__((swift_name("companion")));
- (MDSDKVehAvailInfoPricedCoverage *)doCopyCoverage:(MDSDKAvailInfoCoverage *)coverage charge:(MDSDKAvailInfoCharge *)charge deductible:(MDSDKAvailInfoDeductible * _Nullable)deductible __attribute__((swift_name("doCopy(coverage:charge:deductible:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MDSDKAvailInfoCharge *charge __attribute__((swift_name("charge")));
@property (readonly) MDSDKAvailInfoCoverage *coverage __attribute__((swift_name("coverage")));
@property (readonly) MDSDKAvailInfoDeductible * _Nullable deductible __attribute__((swift_name("deductible")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VehAvailInfoPricedCoverage.Companion")))
@interface MDSDKVehAvailInfoPricedCoverageCompanion : MDSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSDKVehAvailInfoPricedCoverageCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Vendor")))
@interface MDSDKVendor : MDSDKBase
- (instancetype)initWithCode:(NSString *)code companyShortName:(NSString *)companyShortName __attribute__((swift_name("init(code:companyShortName:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MDSDKVendorCompanion *companion __attribute__((swift_name("companion")));
- (MDSDKVendor *)doCopyCode:(NSString *)code companyShortName:(NSString *)companyShortName __attribute__((swift_name("doCopy(code:companyShortName:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *code __attribute__((swift_name("code")));
@property (readonly) NSString *companyShortName __attribute__((swift_name("companyShortName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Vendor.Companion")))
@interface MDSDKVendorCompanion : MDSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSDKVendorCompanion *shared __attribute__((swift_name("shared")));
- (id<MDSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CTSdkEnvironment")))
@interface MDSDKCTSdkEnvironment : MDSDKKotlinEnum<MDSDKCTSdkEnvironment *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MDSDKCTSdkEnvironment *development __attribute__((swift_name("development")));
@property (class, readonly) MDSDKCTSdkEnvironment *production __attribute__((swift_name("production")));
+ (MDSDKKotlinArray<MDSDKCTSdkEnvironment *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<MDSDKCTSdkEnvironment *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SearchIATA")))
@interface MDSDKSearchIATA : MDSDKBase
- (instancetype)initWithLocationCode:(NSString *)locationCode name:(NSString *)name atAirport:(NSString *)atAirport __attribute__((swift_name("init(locationCode:name:atAirport:)"))) __attribute__((objc_designated_initializer));
- (MDSDKSearchIATA *)doCopyLocationCode:(NSString *)locationCode name:(NSString *)name atAirport:(NSString *)atAirport __attribute__((swift_name("doCopy(locationCode:name:atAirport:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *atAirport __attribute__((swift_name("atAirport")));
@property (readonly) NSString *locationCode __attribute__((swift_name("locationCode")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((swift_name("CTLogger")))
@protocol MDSDKCTLogger
@required
- (void)debugMessage:(NSString *)message __attribute__((swift_name("debug(message:)")));
- (void)errorMessage:(NSString *)message throwable:(MDSDKKotlinThrowable * _Nullable)throwable __attribute__((swift_name("error(message:throwable:)")));
- (void)infoMessage:(NSString *)message __attribute__((swift_name("info(message:)")));
- (void)warnMessage:(NSString *)message __attribute__((swift_name("warn(message:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CTLoggerImpl")))
@interface MDSDKCTLoggerImpl : MDSDKBase <MDSDKCTLogger>
- (instancetype)initWithTag:(NSString *)tag __attribute__((swift_name("init(tag:)"))) __attribute__((objc_designated_initializer));
- (void)debugMessage:(NSString *)message __attribute__((swift_name("debug(message:)")));
- (void)errorMessage:(NSString *)message throwable:(MDSDKKotlinThrowable * _Nullable)throwable __attribute__((swift_name("error(message:throwable:)")));
- (void)infoMessage:(NSString *)message __attribute__((swift_name("info(message:)")));
- (void)warnMessage:(NSString *)message __attribute__((swift_name("warn(message:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoggerFactory")))
@interface MDSDKLoggerFactory : MDSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)loggerFactory __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSDKLoggerFactory *shared __attribute__((swift_name("shared")));
- (id<MDSDKCTLogger>)createLoggerTag:(NSString *)tag __attribute__((swift_name("createLogger(tag:)")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol MDSDKKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<MDSDKKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<MDSDKKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol MDSDKKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<MDSDKKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<MDSDKKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol MDSDKKotlinx_serialization_coreKSerializer <MDSDKKotlinx_serialization_coreSerializationStrategy, MDSDKKotlinx_serialization_coreDeserializationStrategy>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ForceListSerializer")))
@interface MDSDKForceListSerializer<T> : MDSDKBase <MDSDKKotlinx_serialization_coreKSerializer>
- (instancetype)initWithDataSerializer:(id<MDSDKKotlinx_serialization_coreKSerializer>)dataSerializer __attribute__((swift_name("init(dataSerializer:)"))) __attribute__((objc_designated_initializer));
- (NSArray<T> *)deserializeDecoder:(id<MDSDKKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (void)serializeEncoder:(id<MDSDKKotlinx_serialization_coreEncoder>)encoder value:(NSArray<T> *)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<MDSDKKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PricedEquipsDisplaySerializer")))
@interface MDSDKPricedEquipsDisplaySerializer : MDSDKBase <MDSDKKotlinx_serialization_coreKSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)pricedEquipsDisplaySerializer __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSDKPricedEquipsDisplaySerializer *shared __attribute__((swift_name("shared")));
- (MDSDKPricedEquipsWrapper *)deserializeDecoder:(id<MDSDKKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (void)serializeEncoder:(id<MDSDKKotlinx_serialization_coreEncoder>)encoder value:(MDSDKPricedEquipsWrapper *)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<MDSDKKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VehVendorAvailSerializer")))
@interface MDSDKVehVendorAvailSerializer : MDSDKBase <MDSDKKotlinx_serialization_coreKSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)vehVendorAvailSerializer __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSDKVehVendorAvailSerializer *shared __attribute__((swift_name("shared")));
- (MDSDKVehVendorAvailWrapper *)deserializeDecoder:(id<MDSDKKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (void)serializeEncoder:(id<MDSDKKotlinx_serialization_coreEncoder>)encoder value:(MDSDKVehVendorAvailWrapper *)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<MDSDKKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Platform_iosKt")))
@interface MDSDKPlatform_iosKt : MDSDKBase
+ (id<MDSDKPlatform>)getPlatform __attribute__((swift_name("getPlatform()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface MDSDKKotlinEnumCompanion : MDSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MDSDKKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface MDSDKKotlinArray<T> : MDSDKBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(MDSDKInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<MDSDKKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("KotlinThrowable")))
@interface MDSDKKotlinThrowable : MDSDKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(MDSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MDSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.experimental.ExperimentalNativeApi
*/
- (MDSDKKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MDSDKKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol MDSDKKotlinx_serialization_coreEncoder
@required
- (id<MDSDKKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<MDSDKKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<MDSDKKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<MDSDKKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<MDSDKKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<MDSDKKotlinx_serialization_coreEncoder>)encodeInlineDescriptor:(id<MDSDKKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("encodeInline(descriptor:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNull __attribute__((swift_name("encodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableValueSerializer:(id<MDSDKKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<MDSDKKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) MDSDKKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol MDSDKKotlinx_serialization_coreSerialDescriptor
@required

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSArray<id<MDSDKKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<MDSDKKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSArray<id<MDSDKKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) MDSDKKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol MDSDKKotlinx_serialization_coreDecoder
@required
- (id<MDSDKKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<MDSDKKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<MDSDKKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<MDSDKKotlinx_serialization_coreDecoder>)decodeInlineDescriptor:(id<MDSDKKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeInline(descriptor:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (MDSDKKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<MDSDKKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<MDSDKKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) MDSDKKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("KotlinIterator")))
@protocol MDSDKKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol MDSDKKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<MDSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<MDSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<MDSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<MDSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<MDSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<MDSDKKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<MDSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<MDSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<MDSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableElementDescriptor:(id<MDSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<MDSDKKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<MDSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<MDSDKKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<MDSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<MDSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<MDSDKKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<MDSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) MDSDKKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface MDSDKKotlinx_serialization_coreSerializersModule : MDSDKBase

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)dumpToCollector:(id<MDSDKKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<MDSDKKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<MDSDKKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<MDSDKKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<MDSDKKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<MDSDKKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<MDSDKKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<MDSDKKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end

__attribute__((swift_name("KotlinAnnotation")))
@protocol MDSDKKotlinAnnotation
@required
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface MDSDKKotlinx_serialization_coreSerialKind : MDSDKBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol MDSDKKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<MDSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<MDSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<MDSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<MDSDKKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<MDSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<MDSDKKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<MDSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<MDSDKKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<MDSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<MDSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<MDSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<MDSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<MDSDKKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<MDSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<MDSDKKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<MDSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<MDSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<MDSDKKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) MDSDKKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface MDSDKKotlinNothing : MDSDKBase
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol MDSDKKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<MDSDKKotlinKClass>)kClass provider:(id<MDSDKKotlinx_serialization_coreKSerializer> (^)(NSArray<id<MDSDKKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<MDSDKKotlinKClass>)kClass serializer:(id<MDSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<MDSDKKotlinKClass>)baseClass actualClass:(id<MDSDKKotlinKClass>)actualClass actualSerializer:(id<MDSDKKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<MDSDKKotlinKClass>)baseClass defaultDeserializerProvider:(id<MDSDKKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultDeserializerProvider:)"))) __attribute__((deprecated("Deprecated in favor of function with more precise name: polymorphicDefaultDeserializer")));
- (void)polymorphicDefaultDeserializerBaseClass:(id<MDSDKKotlinKClass>)baseClass defaultDeserializerProvider:(id<MDSDKKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultSerializerBaseClass:(id<MDSDKKotlinKClass>)baseClass defaultSerializerProvider:(id<MDSDKKotlinx_serialization_coreSerializationStrategy> _Nullable (^)(id))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
@end

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol MDSDKKotlinKDeclarationContainer
@required
@end

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol MDSDKKotlinKAnnotatedElement
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((swift_name("KotlinKClassifier")))
@protocol MDSDKKotlinKClassifier
@required
@end

__attribute__((swift_name("KotlinKClass")))
@protocol MDSDKKotlinKClass <MDSDKKotlinKDeclarationContainer, MDSDKKotlinKAnnotatedElement, MDSDKKotlinKClassifier>
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
