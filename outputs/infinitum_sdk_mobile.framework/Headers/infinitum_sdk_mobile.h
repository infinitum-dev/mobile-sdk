#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class Infinitum_sdk_mobileApps, Infinitum_sdk_mobileAuth, Infinitum_sdk_mobileErrorResponse, Infinitum_sdk_mobileKotlinArray, Infinitum_sdk_mobileNetworkService, Infinitum_sdk_mobileKtor_httpHttpMethod, Infinitum_sdk_mobileKotlinx_serialization_runtimeEnumDescriptor, Infinitum_sdk_mobileKotlinx_serialization_runtimeSerialKind, Infinitum_sdk_mobileKotlinNothing, Infinitum_sdk_mobileKotlinx_serialization_runtimeUpdateMode;

@protocol Infinitum_sdk_mobileInfinitumResponseCallback, Infinitum_sdk_mobileKotlinx_serialization_runtimeKSerializer, Infinitum_sdk_mobileKotlinx_serialization_runtimeEncoder, Infinitum_sdk_mobileKotlinx_serialization_runtimeSerialDescriptor, Infinitum_sdk_mobileKotlinx_serialization_runtimeDecoder, Infinitum_sdk_mobileKotlinIterator, Infinitum_sdk_mobileKotlinx_serialization_runtimeCompositeEncoder, Infinitum_sdk_mobileKotlinx_serialization_runtimeSerialModule, Infinitum_sdk_mobileKotlinAnnotation, Infinitum_sdk_mobileKotlinx_serialization_runtimeCompositeDecoder, Infinitum_sdk_mobileKotlinx_serialization_runtimeSerialModuleCollector, Infinitum_sdk_mobileKotlinKClass;

NS_ASSUME_NONNULL_BEGIN

@interface KotlinBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end;

@interface KotlinBase (KotlinBaseCopying) <NSCopying>
@end;

__attribute__((objc_runtime_name("KotlinMutableSet")))
__attribute__((swift_name("KotlinMutableSet")))
@interface Infinitum_sdk_mobileMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((objc_runtime_name("KotlinMutableDictionary")))
__attribute__((swift_name("KotlinMutableDictionary")))
@interface Infinitum_sdk_mobileMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((objc_runtime_name("KotlinNumber")))
__attribute__((swift_name("KotlinNumber")))
@interface Infinitum_sdk_mobileNumber : NSNumber
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
@end;

__attribute__((objc_runtime_name("KotlinByte")))
__attribute__((swift_name("KotlinByte")))
@interface Infinitum_sdk_mobileByte : Infinitum_sdk_mobileNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((objc_runtime_name("KotlinUByte")))
__attribute__((swift_name("KotlinUByte")))
@interface Infinitum_sdk_mobileUByte : Infinitum_sdk_mobileNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((objc_runtime_name("KotlinShort")))
__attribute__((swift_name("KotlinShort")))
@interface Infinitum_sdk_mobileShort : Infinitum_sdk_mobileNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((objc_runtime_name("KotlinUShort")))
__attribute__((swift_name("KotlinUShort")))
@interface Infinitum_sdk_mobileUShort : Infinitum_sdk_mobileNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((objc_runtime_name("KotlinInt")))
__attribute__((swift_name("KotlinInt")))
@interface Infinitum_sdk_mobileInt : Infinitum_sdk_mobileNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((objc_runtime_name("KotlinUInt")))
__attribute__((swift_name("KotlinUInt")))
@interface Infinitum_sdk_mobileUInt : Infinitum_sdk_mobileNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((objc_runtime_name("KotlinLong")))
__attribute__((swift_name("KotlinLong")))
@interface Infinitum_sdk_mobileLong : Infinitum_sdk_mobileNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((objc_runtime_name("KotlinULong")))
__attribute__((swift_name("KotlinULong")))
@interface Infinitum_sdk_mobileULong : Infinitum_sdk_mobileNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((objc_runtime_name("KotlinFloat")))
__attribute__((swift_name("KotlinFloat")))
@interface Infinitum_sdk_mobileFloat : Infinitum_sdk_mobileNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((objc_runtime_name("KotlinDouble")))
__attribute__((swift_name("KotlinDouble")))
@interface Infinitum_sdk_mobileDouble : Infinitum_sdk_mobileNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((objc_runtime_name("KotlinBoolean")))
__attribute__((swift_name("KotlinBoolean")))
@interface Infinitum_sdk_mobileBoolean : Infinitum_sdk_mobileNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Infinitum")))
@interface Infinitum_sdk_mobileInfinitum : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)infinitum __attribute__((swift_name("init()")));
- (Infinitum_sdk_mobileInfinitum *)getInstance __attribute__((swift_name("getInstance()")));
- (void)configDomain:(NSString *)domain appType:(NSString *)appType callback:(id<Infinitum_sdk_mobileInfinitumResponseCallback>)callback __attribute__((swift_name("config(domain:appType:callback:)")));
- (void)doInitDomain:(NSString *)domain appKey:(NSString *)appKey appSecret:(NSString *)appSecret appToken:(NSString *)appToken identity:(NSString *)identity callback:(id<Infinitum_sdk_mobileInfinitumResponseCallback>)callback __attribute__((swift_name("doInit(domain:appKey:appSecret:appToken:identity:callback:)")));
- (void)doInitDomain:(NSString *)domain appKey:(NSString *)appKey appSecret:(NSString *)appSecret appToken:(NSString *)appToken identity:(NSString *)identity macAddress:(NSString * _Nullable)macAddress callback:(id<Infinitum_sdk_mobileInfinitumResponseCallback>)callback __attribute__((swift_name("doInit(domain:appKey:appSecret:appToken:identity:macAddress:callback:)")));
- (Infinitum_sdk_mobileApps * _Nullable)apps __attribute__((swift_name("apps()")));
- (Infinitum_sdk_mobileAuth * _Nullable)auth __attribute__((swift_name("auth()")));
@end;

__attribute__((swift_name("InfinitumResponseCallback")))
@protocol Infinitum_sdk_mobileInfinitumResponseCallback
@required
- (void)onSuccessResponse:(NSString *)response __attribute__((swift_name("onSuccess(response:)")));
- (void)onFailureError:(Infinitum_sdk_mobileErrorResponse *)error __attribute__((swift_name("onFailure(error:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ErrorResponse")))
@interface Infinitum_sdk_mobileErrorResponse : KotlinBase
- (instancetype)initWithSeen1:(int32_t)seen1 message:(NSString * _Nullable)message type:(NSString * _Nullable)type status:(Infinitum_sdk_mobileInt * _Nullable)status serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen1:message:type:status:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message type:(NSString * _Nullable)type status:(Infinitum_sdk_mobileInt * _Nullable)status __attribute__((swift_name("init(message:type:status:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (Infinitum_sdk_mobileInt * _Nullable)component3 __attribute__((swift_name("component3()")));
- (Infinitum_sdk_mobileErrorResponse *)doCopyMessage:(NSString * _Nullable)message type:(NSString * _Nullable)type status:(Infinitum_sdk_mobileInt * _Nullable)status __attribute__((swift_name("doCopy(message:type:status:)")));
@property NSString * _Nullable message __attribute__((swift_name("message")));
@property NSString * _Nullable type __attribute__((swift_name("type")));
@property Infinitum_sdk_mobileInt * _Nullable status __attribute__((swift_name("status")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ErrorResponse.Companion")))
@interface Infinitum_sdk_mobileErrorResponseCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<Infinitum_sdk_mobileKotlinx_serialization_runtimeKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeSerializationStrategy")))
@protocol Infinitum_sdk_mobileKotlinx_serialization_runtimeSerializationStrategy
@required
- (void)serializeEncoder:(id<Infinitum_sdk_mobileKotlinx_serialization_runtimeEncoder>)encoder obj:(id _Nullable)obj __attribute__((swift_name("serialize(encoder:obj:)")));
@property (readonly) id<Infinitum_sdk_mobileKotlinx_serialization_runtimeSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeDeserializationStrategy")))
@protocol Infinitum_sdk_mobileKotlinx_serialization_runtimeDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<Infinitum_sdk_mobileKotlinx_serialization_runtimeDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (id _Nullable)patchDecoder:(id<Infinitum_sdk_mobileKotlinx_serialization_runtimeDecoder>)decoder old:(id _Nullable)old __attribute__((swift_name("patch(decoder:old:)")));
@property (readonly) id<Infinitum_sdk_mobileKotlinx_serialization_runtimeSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeKSerializer")))
@protocol Infinitum_sdk_mobileKotlinx_serialization_runtimeKSerializer <Infinitum_sdk_mobileKotlinx_serialization_runtimeSerializationStrategy, Infinitum_sdk_mobileKotlinx_serialization_runtimeDeserializationStrategy>
@required
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeGeneratedSerializer")))
@protocol Infinitum_sdk_mobileKotlinx_serialization_runtimeGeneratedSerializer <Infinitum_sdk_mobileKotlinx_serialization_runtimeKSerializer>
@required
- (Infinitum_sdk_mobileKotlinArray *)childSerializers __attribute__((swift_name("childSerializers()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ErrorResponse.$serializer")))
@interface Infinitum_sdk_mobileErrorResponse$serializer : KotlinBase <Infinitum_sdk_mobileKotlinx_serialization_runtimeGeneratedSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)$serializer __attribute__((swift_name("init()")));
- (Infinitum_sdk_mobileKotlinArray *)childSerializers __attribute__((swift_name("childSerializers()")));
- (Infinitum_sdk_mobileErrorResponse *)deserializeDecoder:(id<Infinitum_sdk_mobileKotlinx_serialization_runtimeDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (Infinitum_sdk_mobileErrorResponse *)patchDecoder:(id<Infinitum_sdk_mobileKotlinx_serialization_runtimeDecoder>)decoder old:(Infinitum_sdk_mobileErrorResponse *)old __attribute__((swift_name("patch(decoder:old:)")));
- (void)serializeEncoder:(id<Infinitum_sdk_mobileKotlinx_serialization_runtimeEncoder>)encoder obj:(Infinitum_sdk_mobileErrorResponse *)obj __attribute__((swift_name("serialize(encoder:obj:)")));
@property (readonly) id<Infinitum_sdk_mobileKotlinx_serialization_runtimeSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("KotlinComparable")))
@protocol Infinitum_sdk_mobileKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("KotlinEnum")))
@interface Infinitum_sdk_mobileKotlinEnum : KotlinBase <Infinitum_sdk_mobileKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
- (int32_t)compareToOther:(Infinitum_sdk_mobileKotlinEnum *)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ErrorTypes")))
@interface Infinitum_sdk_mobileErrorTypes : Infinitum_sdk_mobileKotlinEnum
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
@property (class, readonly) Infinitum_sdk_mobileErrorTypes *infinitumsdk __attribute__((swift_name("infinitumsdk")));
@property (class, readonly) Infinitum_sdk_mobileErrorTypes *network __attribute__((swift_name("network")));
@property (class, readonly) Infinitum_sdk_mobileErrorTypes *server __attribute__((swift_name("server")));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (int32_t)compareToOther:(Infinitum_sdk_mobileErrorTypes *)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Errors")))
@interface Infinitum_sdk_mobileErrors : Infinitum_sdk_mobileKotlinEnum
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
@property (class, readonly) Infinitum_sdk_mobileErrors *invalidParameter __attribute__((swift_name("invalidParameter")));
@property (class, readonly) Infinitum_sdk_mobileErrors *networkError __attribute__((swift_name("networkError")));
@property (class, readonly) Infinitum_sdk_mobileErrors *unknownException __attribute__((swift_name("unknownException")));
@property (class, readonly) Infinitum_sdk_mobileErrors *domainUnspecified __attribute__((swift_name("domainUnspecified")));
@property (class, readonly) Infinitum_sdk_mobileErrors *serverError __attribute__((swift_name("serverError")));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (int32_t)compareToOther:(Infinitum_sdk_mobileErrors *)other __attribute__((swift_name("compareTo(other:)")));
@property Infinitum_sdk_mobileErrorResponse *error __attribute__((swift_name("error")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apps")))
@interface Infinitum_sdk_mobileApps : KotlinBase
- (instancetype)initWithMBaseUrl:(NSString *)mBaseUrl mNetworkService:(Infinitum_sdk_mobileNetworkService *)mNetworkService __attribute__((swift_name("init(mBaseUrl:mNetworkService:)"))) __attribute__((objc_designated_initializer));
- (void)getAppsAccessToken:(NSString *)accessToken callback:(id<Infinitum_sdk_mobileInfinitumResponseCallback>)callback __attribute__((swift_name("getApps(accessToken:callback:)")));
- (void)createAppAccessToken:(NSString *)accessToken appName:(NSString *)appName appTypeId:(int32_t)appTypeId token:(NSString *)token callback:(id<Infinitum_sdk_mobileInfinitumResponseCallback>)callback __attribute__((swift_name("createApp(accessToken:appName:appTypeId:token:callback:)")));
- (void)getAppByIdAccessToken:(NSString *)accessToken appId:(int32_t)appId callback:(id<Infinitum_sdk_mobileInfinitumResponseCallback>)callback __attribute__((swift_name("getAppById(accessToken:appId:callback:)")));
- (void)deleteAppAccessToken:(NSString *)accessToken appId:(int32_t)appId callback:(id<Infinitum_sdk_mobileInfinitumResponseCallback>)callback __attribute__((swift_name("deleteApp(accessToken:appId:callback:)")));
- (void)updateAppAccessToken:(NSString *)accessToken appId:(int32_t)appId appName:(NSString *)appName appTypeId:(int32_t)appTypeId callback:(id<Infinitum_sdk_mobileInfinitumResponseCallback>)callback __attribute__((swift_name("updateApp(accessToken:appId:appName:appTypeId:callback:)")));
@property (readonly) NSString *mBaseUrl __attribute__((swift_name("mBaseUrl")));
@property (readonly) Infinitum_sdk_mobileNetworkService *mNetworkService __attribute__((swift_name("mNetworkService")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Auth")))
@interface Infinitum_sdk_mobileAuth : KotlinBase
- (instancetype)initWithMBaseUrl:(NSString *)mBaseUrl mNetworkService:(Infinitum_sdk_mobileNetworkService *)mNetworkService __attribute__((swift_name("init(mBaseUrl:mNetworkService:)"))) __attribute__((objc_designated_initializer));
- (void)photoPhotoB64:(NSString *)photoB64 callback:(id<Infinitum_sdk_mobileInfinitumResponseCallback>)callback __attribute__((swift_name("photo(photoB64:callback:)")));
@property (readonly) NSString *mBaseUrl __attribute__((swift_name("mBaseUrl")));
@property (readonly) Infinitum_sdk_mobileNetworkService *mNetworkService __attribute__((swift_name("mNetworkService")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NetworkService")))
@interface Infinitum_sdk_mobileNetworkService : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RequestLauncher")))
@interface Infinitum_sdk_mobileRequestLauncher : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)requestLauncher __attribute__((swift_name("init()")));
- (void)launchUrl:(NSString *)url headerParameters:(Infinitum_sdk_mobileMutableDictionary<NSString *, NSString *> * _Nullable)headerParameters bodyParameters:(Infinitum_sdk_mobileMutableDictionary<NSString *, NSString *> * _Nullable)bodyParameters networkService:(Infinitum_sdk_mobileNetworkService *)networkService method:(Infinitum_sdk_mobileKtor_httpHttpMethod *)method callback:(id<Infinitum_sdk_mobileInfinitumResponseCallback>)callback __attribute__((swift_name("launch(url:headerParameters:bodyParameters:networkService:method:callback:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Args")))
@interface Infinitum_sdk_mobileArgs : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)args __attribute__((swift_name("init()")));
- (BOOL)checkForContentArguments:(Infinitum_sdk_mobileKotlinArray *)arguments __attribute__((swift_name("checkForContent(arguments:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Dispatcher")))
@interface Infinitum_sdk_mobileDispatcher : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Dispatcher.Companion")))
@interface Infinitum_sdk_mobileDispatcherCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Utils")))
@interface Infinitum_sdk_mobileUtils : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Utils.Companion")))
@interface Infinitum_sdk_mobileUtilsCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (Infinitum_sdk_mobileMutableDictionary<NSString *, NSString *> *)createMapPairs:(Infinitum_sdk_mobileKotlinArray *)pairs __attribute__((swift_name("createMap(pairs:)")));
- (Infinitum_sdk_mobileMutableDictionary<NSString *, NSString *> *)createAuthorizationHeaderAccessToken:(NSString *)accessToken __attribute__((swift_name("createAuthorizationHeader(accessToken:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface Infinitum_sdk_mobileKotlinArray : KotlinBase
+ (instancetype)arrayWithSize:(int32_t)size init:(id _Nullable (^)(Infinitum_sdk_mobileInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (id _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<Infinitum_sdk_mobileKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(id _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeEncoder")))
@protocol Infinitum_sdk_mobileKotlinx_serialization_runtimeEncoder
@required
- (id<Infinitum_sdk_mobileKotlinx_serialization_runtimeCompositeEncoder>)beginCollectionDesc:(id<Infinitum_sdk_mobileKotlinx_serialization_runtimeSerialDescriptor>)desc collectionSize:(int32_t)collectionSize typeParams:(Infinitum_sdk_mobileKotlinArray *)typeParams __attribute__((swift_name("beginCollection(desc:collectionSize:typeParams:)")));
- (id<Infinitum_sdk_mobileKotlinx_serialization_runtimeCompositeEncoder>)beginStructureDesc:(id<Infinitum_sdk_mobileKotlinx_serialization_runtimeSerialDescriptor>)desc typeParams:(Infinitum_sdk_mobileKotlinArray *)typeParams __attribute__((swift_name("beginStructure(desc:typeParams:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescription:(Infinitum_sdk_mobileKotlinx_serialization_runtimeEnumDescriptor *)enumDescription ordinal:(int32_t)ordinal __attribute__((swift_name("encodeEnum(enumDescription:ordinal:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));
- (void)encodeNull __attribute__((swift_name("encodeNull()")));
- (void)encodeNullableSerializableValueSerializer:(id<Infinitum_sdk_mobileKotlinx_serialization_runtimeSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<Infinitum_sdk_mobileKotlinx_serialization_runtimeSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
- (void)encodeUnit __attribute__((swift_name("encodeUnit()")));
@property (readonly) id<Infinitum_sdk_mobileKotlinx_serialization_runtimeSerialModule> context __attribute__((swift_name("context")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeSerialDescriptor")))
@protocol Infinitum_sdk_mobileKotlinx_serialization_runtimeSerialDescriptor
@required
- (NSArray<id<Infinitum_sdk_mobileKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));
- (id<Infinitum_sdk_mobileKotlinx_serialization_runtimeSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));
- (NSArray<id<Infinitum_sdk_mobileKotlinAnnotation>> *)getEntityAnnotations __attribute__((swift_name("getEntityAnnotations()")));
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));
@property (readonly) Infinitum_sdk_mobileKotlinx_serialization_runtimeSerialKind *kind __attribute__((swift_name("kind")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeDecoder")))
@protocol Infinitum_sdk_mobileKotlinx_serialization_runtimeDecoder
@required
- (id<Infinitum_sdk_mobileKotlinx_serialization_runtimeCompositeDecoder>)beginStructureDesc:(id<Infinitum_sdk_mobileKotlinx_serialization_runtimeSerialDescriptor>)desc typeParams:(Infinitum_sdk_mobileKotlinArray *)typeParams __attribute__((swift_name("beginStructure(desc:typeParams:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescription:(Infinitum_sdk_mobileKotlinx_serialization_runtimeEnumDescriptor *)enumDescription __attribute__((swift_name("decodeEnum(enumDescription:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));
- (Infinitum_sdk_mobileKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<Infinitum_sdk_mobileKotlinx_serialization_runtimeDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<Infinitum_sdk_mobileKotlinx_serialization_runtimeDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
- (void)decodeUnit __attribute__((swift_name("decodeUnit()")));
- (id _Nullable)updateNullableSerializableValueDeserializer:(id<Infinitum_sdk_mobileKotlinx_serialization_runtimeDeserializationStrategy>)deserializer old:(id _Nullable)old __attribute__((swift_name("updateNullableSerializableValue(deserializer:old:)")));
- (id _Nullable)updateSerializableValueDeserializer:(id<Infinitum_sdk_mobileKotlinx_serialization_runtimeDeserializationStrategy>)deserializer old:(id _Nullable)old __attribute__((swift_name("updateSerializableValue(deserializer:old:)")));
@property (readonly) id<Infinitum_sdk_mobileKotlinx_serialization_runtimeSerialModule> context __attribute__((swift_name("context")));
@property (readonly) Infinitum_sdk_mobileKotlinx_serialization_runtimeUpdateMode *updateMode __attribute__((swift_name("updateMode")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpMethod")))
@interface Infinitum_sdk_mobileKtor_httpHttpMethod : KotlinBase
- (instancetype)initWithValue:(NSString *)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (Infinitum_sdk_mobileKtor_httpHttpMethod *)doCopyValue:(NSString *)value __attribute__((swift_name("doCopy(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((swift_name("KotlinIterator")))
@protocol Infinitum_sdk_mobileKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeCompositeEncoder")))
@protocol Infinitum_sdk_mobileKotlinx_serialization_runtimeCompositeEncoder
@required
- (void)encodeBooleanElementDesc:(id<Infinitum_sdk_mobileKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(desc:index:value:)")));
- (void)encodeByteElementDesc:(id<Infinitum_sdk_mobileKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(desc:index:value:)")));
- (void)encodeCharElementDesc:(id<Infinitum_sdk_mobileKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(desc:index:value:)")));
- (void)encodeDoubleElementDesc:(id<Infinitum_sdk_mobileKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(desc:index:value:)")));
- (void)encodeFloatElementDesc:(id<Infinitum_sdk_mobileKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(desc:index:value:)")));
- (void)encodeIntElementDesc:(id<Infinitum_sdk_mobileKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(desc:index:value:)")));
- (void)encodeLongElementDesc:(id<Infinitum_sdk_mobileKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(desc:index:value:)")));
- (void)encodeNonSerializableElementDesc:(id<Infinitum_sdk_mobileKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index value:(id)value __attribute__((swift_name("encodeNonSerializableElement(desc:index:value:)")));
- (void)encodeNullableSerializableElementDesc:(id<Infinitum_sdk_mobileKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index serializer:(id<Infinitum_sdk_mobileKotlinx_serialization_runtimeSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(desc:index:serializer:value:)")));
- (void)encodeSerializableElementDesc:(id<Infinitum_sdk_mobileKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index serializer:(id<Infinitum_sdk_mobileKotlinx_serialization_runtimeSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(desc:index:serializer:value:)")));
- (void)encodeShortElementDesc:(id<Infinitum_sdk_mobileKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(desc:index:value:)")));
- (void)encodeStringElementDesc:(id<Infinitum_sdk_mobileKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(desc:index:value:)")));
- (void)encodeUnitElementDesc:(id<Infinitum_sdk_mobileKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("encodeUnitElement(desc:index:)")));
- (void)endStructureDesc:(id<Infinitum_sdk_mobileKotlinx_serialization_runtimeSerialDescriptor>)desc __attribute__((swift_name("endStructure(desc:)")));
- (BOOL)shouldEncodeElementDefaultDesc:(id<Infinitum_sdk_mobileKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(desc:index:)")));
@property (readonly) id<Infinitum_sdk_mobileKotlinx_serialization_runtimeSerialModule> context __attribute__((swift_name("context")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeSerialClassDescImpl")))
@interface Infinitum_sdk_mobileKotlinx_serialization_runtimeSerialClassDescImpl : KotlinBase <Infinitum_sdk_mobileKotlinx_serialization_runtimeSerialDescriptor>
- (instancetype)initWithName:(NSString *)name generatedSerializer:(id<Infinitum_sdk_mobileKotlinx_serialization_runtimeGeneratedSerializer> _Nullable)generatedSerializer __attribute__((swift_name("init(name:generatedSerializer:)"))) __attribute__((objc_designated_initializer));
- (void)addElementName:(NSString *)name isOptional:(BOOL)isOptional __attribute__((swift_name("addElement(name:isOptional:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSArray<id<Infinitum_sdk_mobileKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));
- (id<Infinitum_sdk_mobileKotlinx_serialization_runtimeSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));
- (NSArray<id<Infinitum_sdk_mobileKotlinAnnotation>> *)getEntityAnnotations __attribute__((swift_name("getEntityAnnotations()")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));
- (void)pushAnnotationA:(id<Infinitum_sdk_mobileKotlinAnnotation>)a __attribute__((swift_name("pushAnnotation(a:)")));
- (void)pushClassAnnotationA:(id<Infinitum_sdk_mobileKotlinAnnotation>)a __attribute__((swift_name("pushClassAnnotation(a:)")));
- (void)pushDescriptorDesc:(id<Infinitum_sdk_mobileKotlinx_serialization_runtimeSerialDescriptor>)desc __attribute__((swift_name("pushDescriptor(desc:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) Infinitum_sdk_mobileKotlinx_serialization_runtimeSerialKind *kind __attribute__((swift_name("kind")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_runtimeEnumDescriptor")))
@interface Infinitum_sdk_mobileKotlinx_serialization_runtimeEnumDescriptor : Infinitum_sdk_mobileKotlinx_serialization_runtimeSerialClassDescImpl
- (instancetype)initWithName:(NSString *)name choices:(Infinitum_sdk_mobileKotlinArray *)choices __attribute__((swift_name("init(name:choices:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithName:(NSString *)name generatedSerializer:(id<Infinitum_sdk_mobileKotlinx_serialization_runtimeGeneratedSerializer> _Nullable)generatedSerializer __attribute__((swift_name("init(name:generatedSerializer:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (id<Infinitum_sdk_mobileKotlinx_serialization_runtimeSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
@property (readonly) Infinitum_sdk_mobileKotlinx_serialization_runtimeSerialKind *kind __attribute__((swift_name("kind")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeSerialModule")))
@protocol Infinitum_sdk_mobileKotlinx_serialization_runtimeSerialModule
@required
- (void)dumpToCollector:(id<Infinitum_sdk_mobileKotlinx_serialization_runtimeSerialModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));
- (id<Infinitum_sdk_mobileKotlinx_serialization_runtimeKSerializer> _Nullable)getContextualKclass:(id<Infinitum_sdk_mobileKotlinKClass>)kclass __attribute__((swift_name("getContextual(kclass:)")));
- (id<Infinitum_sdk_mobileKotlinx_serialization_runtimeKSerializer> _Nullable)getPolymorphicBaseClass:(id<Infinitum_sdk_mobileKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));
- (id<Infinitum_sdk_mobileKotlinx_serialization_runtimeKSerializer> _Nullable)getPolymorphicBaseClass:(id<Infinitum_sdk_mobileKotlinKClass>)baseClass serializedClassName:(NSString *)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end;

__attribute__((swift_name("KotlinAnnotation")))
@protocol Infinitum_sdk_mobileKotlinAnnotation
@required
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeSerialKind")))
@interface Infinitum_sdk_mobileKotlinx_serialization_runtimeSerialKind : KotlinBase
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeCompositeDecoder")))
@protocol Infinitum_sdk_mobileKotlinx_serialization_runtimeCompositeDecoder
@required
- (BOOL)decodeBooleanElementDesc:(id<Infinitum_sdk_mobileKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(desc:index:)")));
- (int8_t)decodeByteElementDesc:(id<Infinitum_sdk_mobileKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeByteElement(desc:index:)")));
- (unichar)decodeCharElementDesc:(id<Infinitum_sdk_mobileKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeCharElement(desc:index:)")));
- (int32_t)decodeCollectionSizeDesc:(id<Infinitum_sdk_mobileKotlinx_serialization_runtimeSerialDescriptor>)desc __attribute__((swift_name("decodeCollectionSize(desc:)")));
- (double)decodeDoubleElementDesc:(id<Infinitum_sdk_mobileKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(desc:index:)")));
- (int32_t)decodeElementIndexDesc:(id<Infinitum_sdk_mobileKotlinx_serialization_runtimeSerialDescriptor>)desc __attribute__((swift_name("decodeElementIndex(desc:)")));
- (float)decodeFloatElementDesc:(id<Infinitum_sdk_mobileKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeFloatElement(desc:index:)")));
- (int32_t)decodeIntElementDesc:(id<Infinitum_sdk_mobileKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeIntElement(desc:index:)")));
- (int64_t)decodeLongElementDesc:(id<Infinitum_sdk_mobileKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeLongElement(desc:index:)")));
- (id _Nullable)decodeNullableSerializableElementDesc:(id<Infinitum_sdk_mobileKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index deserializer:(id<Infinitum_sdk_mobileKotlinx_serialization_runtimeDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableElement(desc:index:deserializer:)")));
- (id _Nullable)decodeSerializableElementDesc:(id<Infinitum_sdk_mobileKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index deserializer:(id<Infinitum_sdk_mobileKotlinx_serialization_runtimeDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableElement(desc:index:deserializer:)")));
- (int16_t)decodeShortElementDesc:(id<Infinitum_sdk_mobileKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeShortElement(desc:index:)")));
- (NSString *)decodeStringElementDesc:(id<Infinitum_sdk_mobileKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeStringElement(desc:index:)")));
- (void)decodeUnitElementDesc:(id<Infinitum_sdk_mobileKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeUnitElement(desc:index:)")));
- (void)endStructureDesc:(id<Infinitum_sdk_mobileKotlinx_serialization_runtimeSerialDescriptor>)desc __attribute__((swift_name("endStructure(desc:)")));
- (id _Nullable)updateNullableSerializableElementDesc:(id<Infinitum_sdk_mobileKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index deserializer:(id<Infinitum_sdk_mobileKotlinx_serialization_runtimeDeserializationStrategy>)deserializer old:(id _Nullable)old __attribute__((swift_name("updateNullableSerializableElement(desc:index:deserializer:old:)")));
- (id _Nullable)updateSerializableElementDesc:(id<Infinitum_sdk_mobileKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index deserializer:(id<Infinitum_sdk_mobileKotlinx_serialization_runtimeDeserializationStrategy>)deserializer old:(id _Nullable)old __attribute__((swift_name("updateSerializableElement(desc:index:deserializer:old:)")));
@property (readonly) id<Infinitum_sdk_mobileKotlinx_serialization_runtimeSerialModule> context __attribute__((swift_name("context")));
@property (readonly) Infinitum_sdk_mobileKotlinx_serialization_runtimeUpdateMode *updateMode __attribute__((swift_name("updateMode")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface Infinitum_sdk_mobileKotlinNothing : KotlinBase
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_runtimeUpdateMode")))
@interface Infinitum_sdk_mobileKotlinx_serialization_runtimeUpdateMode : Infinitum_sdk_mobileKotlinEnum
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
@property (class, readonly) Infinitum_sdk_mobileKotlinx_serialization_runtimeUpdateMode *banned __attribute__((swift_name("banned")));
@property (class, readonly) Infinitum_sdk_mobileKotlinx_serialization_runtimeUpdateMode *overwrite __attribute__((swift_name("overwrite")));
@property (class, readonly) Infinitum_sdk_mobileKotlinx_serialization_runtimeUpdateMode *update __attribute__((swift_name("update")));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (int32_t)compareToOther:(Infinitum_sdk_mobileKotlinx_serialization_runtimeUpdateMode *)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeSerialModuleCollector")))
@protocol Infinitum_sdk_mobileKotlinx_serialization_runtimeSerialModuleCollector
@required
- (void)contextualKClass:(id<Infinitum_sdk_mobileKotlinKClass>)kClass serializer:(id<Infinitum_sdk_mobileKotlinx_serialization_runtimeKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<Infinitum_sdk_mobileKotlinKClass>)baseClass actualClass:(id<Infinitum_sdk_mobileKotlinKClass>)actualClass actualSerializer:(id<Infinitum_sdk_mobileKotlinx_serialization_runtimeKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
@end;

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol Infinitum_sdk_mobileKotlinKDeclarationContainer
@required
@end;

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol Infinitum_sdk_mobileKotlinKAnnotatedElement
@required
@end;

__attribute__((swift_name("KotlinKClassifier")))
@protocol Infinitum_sdk_mobileKotlinKClassifier
@required
@end;

__attribute__((swift_name("KotlinKClass")))
@protocol Infinitum_sdk_mobileKotlinKClass <Infinitum_sdk_mobileKotlinKDeclarationContainer, Infinitum_sdk_mobileKotlinKAnnotatedElement, Infinitum_sdk_mobileKotlinKClassifier>
@required
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end;

NS_ASSUME_NONNULL_END
