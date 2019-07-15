#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class ISDKMApps, ISDKMAuth, ISDKMErrorResponse, ISDKMKotlinArray, ISDKMNetworkService, ISDKMKtor_httpHttpMethod, ISDKMKotlinx_serialization_runtimeEnumDescriptor, ISDKMKotlinx_serialization_runtimeSerialKind, ISDKMKotlinNothing, ISDKMKotlinx_serialization_runtimeUpdateMode;

@protocol ISDKMInfinitumResponseCallback, ISDKMKotlinx_serialization_runtimeKSerializer, ISDKMKotlinx_serialization_runtimeEncoder, ISDKMKotlinx_serialization_runtimeSerialDescriptor, ISDKMKotlinx_serialization_runtimeDecoder, ISDKMKotlinIterator, ISDKMKotlinx_serialization_runtimeCompositeEncoder, ISDKMKotlinx_serialization_runtimeSerialModule, ISDKMKotlinAnnotation, ISDKMKotlinx_serialization_runtimeCompositeDecoder, ISDKMKotlinx_serialization_runtimeSerialModuleCollector, ISDKMKotlinKClass;

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
@interface ISDKMMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((objc_runtime_name("KotlinMutableDictionary")))
__attribute__((swift_name("KotlinMutableDictionary")))
@interface ISDKMMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((objc_runtime_name("KotlinNumber")))
__attribute__((swift_name("KotlinNumber")))
@interface ISDKMNumber : NSNumber
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
@interface ISDKMByte : ISDKMNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((objc_runtime_name("KotlinUByte")))
__attribute__((swift_name("KotlinUByte")))
@interface ISDKMUByte : ISDKMNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((objc_runtime_name("KotlinShort")))
__attribute__((swift_name("KotlinShort")))
@interface ISDKMShort : ISDKMNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((objc_runtime_name("KotlinUShort")))
__attribute__((swift_name("KotlinUShort")))
@interface ISDKMUShort : ISDKMNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((objc_runtime_name("KotlinInt")))
__attribute__((swift_name("KotlinInt")))
@interface ISDKMInt : ISDKMNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((objc_runtime_name("KotlinUInt")))
__attribute__((swift_name("KotlinUInt")))
@interface ISDKMUInt : ISDKMNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((objc_runtime_name("KotlinLong")))
__attribute__((swift_name("KotlinLong")))
@interface ISDKMLong : ISDKMNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((objc_runtime_name("KotlinULong")))
__attribute__((swift_name("KotlinULong")))
@interface ISDKMULong : ISDKMNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((objc_runtime_name("KotlinFloat")))
__attribute__((swift_name("KotlinFloat")))
@interface ISDKMFloat : ISDKMNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((objc_runtime_name("KotlinDouble")))
__attribute__((swift_name("KotlinDouble")))
@interface ISDKMDouble : ISDKMNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((objc_runtime_name("KotlinBoolean")))
__attribute__((swift_name("KotlinBoolean")))
@interface ISDKMBoolean : ISDKMNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Infinitum")))
@interface ISDKMInfinitum : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)infinitum __attribute__((swift_name("init()")));
- (ISDKMInfinitum *)getInstance __attribute__((swift_name("getInstance()")));
- (void)configDomain:(NSString *)domain appType:(NSString *)appType callback:(id<ISDKMInfinitumResponseCallback>)callback __attribute__((swift_name("config(domain:appType:callback:)")));
- (void)doInitDomain:(NSString *)domain appKey:(NSString *)appKey appSecret:(NSString *)appSecret appToken:(NSString *)appToken identity:(NSString *)identity callback:(id<ISDKMInfinitumResponseCallback>)callback __attribute__((swift_name("doInit(domain:appKey:appSecret:appToken:identity:callback:)")));
- (void)doInitDomain:(NSString *)domain appKey:(NSString *)appKey appSecret:(NSString *)appSecret appToken:(NSString *)appToken identity:(NSString *)identity macAddress:(NSString * _Nullable)macAddress callback:(id<ISDKMInfinitumResponseCallback>)callback __attribute__((swift_name("doInit(domain:appKey:appSecret:appToken:identity:macAddress:callback:)")));
- (ISDKMApps * _Nullable)apps __attribute__((swift_name("apps()")));
- (ISDKMAuth * _Nullable)auth __attribute__((swift_name("auth()")));
@end;

__attribute__((swift_name("InfinitumResponseCallback")))
@protocol ISDKMInfinitumResponseCallback
@required
- (void)onSuccessResponse:(NSString *)response __attribute__((swift_name("onSuccess(response:)")));
- (void)onFailureError:(ISDKMErrorResponse *)error __attribute__((swift_name("onFailure(error:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ErrorResponse")))
@interface ISDKMErrorResponse : KotlinBase
- (instancetype)initWithSeen1:(int32_t)seen1 message:(NSString * _Nullable)message type:(NSString * _Nullable)type status:(ISDKMInt * _Nullable)status serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen1:message:type:status:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message type:(NSString * _Nullable)type status:(ISDKMInt * _Nullable)status __attribute__((swift_name("init(message:type:status:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (ISDKMInt * _Nullable)component3 __attribute__((swift_name("component3()")));
- (ISDKMErrorResponse *)doCopyMessage:(NSString * _Nullable)message type:(NSString * _Nullable)type status:(ISDKMInt * _Nullable)status __attribute__((swift_name("doCopy(message:type:status:)")));
@property NSString * _Nullable message __attribute__((swift_name("message")));
@property NSString * _Nullable type __attribute__((swift_name("type")));
@property ISDKMInt * _Nullable status __attribute__((swift_name("status")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ErrorResponse.Companion")))
@interface ISDKMErrorResponseCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<ISDKMKotlinx_serialization_runtimeKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeSerializationStrategy")))
@protocol ISDKMKotlinx_serialization_runtimeSerializationStrategy
@required
- (void)serializeEncoder:(id<ISDKMKotlinx_serialization_runtimeEncoder>)encoder obj:(id _Nullable)obj __attribute__((swift_name("serialize(encoder:obj:)")));
@property (readonly) id<ISDKMKotlinx_serialization_runtimeSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeDeserializationStrategy")))
@protocol ISDKMKotlinx_serialization_runtimeDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<ISDKMKotlinx_serialization_runtimeDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (id _Nullable)patchDecoder:(id<ISDKMKotlinx_serialization_runtimeDecoder>)decoder old:(id _Nullable)old __attribute__((swift_name("patch(decoder:old:)")));
@property (readonly) id<ISDKMKotlinx_serialization_runtimeSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeKSerializer")))
@protocol ISDKMKotlinx_serialization_runtimeKSerializer <ISDKMKotlinx_serialization_runtimeSerializationStrategy, ISDKMKotlinx_serialization_runtimeDeserializationStrategy>
@required
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeGeneratedSerializer")))
@protocol ISDKMKotlinx_serialization_runtimeGeneratedSerializer <ISDKMKotlinx_serialization_runtimeKSerializer>
@required
- (ISDKMKotlinArray *)childSerializers __attribute__((swift_name("childSerializers()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ErrorResponse.$serializer")))
@interface ISDKMErrorResponse$serializer : KotlinBase <ISDKMKotlinx_serialization_runtimeGeneratedSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)$serializer __attribute__((swift_name("init()")));
- (ISDKMKotlinArray *)childSerializers __attribute__((swift_name("childSerializers()")));
- (ISDKMErrorResponse *)deserializeDecoder:(id<ISDKMKotlinx_serialization_runtimeDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (ISDKMErrorResponse *)patchDecoder:(id<ISDKMKotlinx_serialization_runtimeDecoder>)decoder old:(ISDKMErrorResponse *)old __attribute__((swift_name("patch(decoder:old:)")));
- (void)serializeEncoder:(id<ISDKMKotlinx_serialization_runtimeEncoder>)encoder obj:(ISDKMErrorResponse *)obj __attribute__((swift_name("serialize(encoder:obj:)")));
@property (readonly) id<ISDKMKotlinx_serialization_runtimeSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("KotlinComparable")))
@protocol ISDKMKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("KotlinEnum")))
@interface ISDKMKotlinEnum : KotlinBase <ISDKMKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
- (int32_t)compareToOther:(ISDKMKotlinEnum *)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ErrorTypes")))
@interface ISDKMErrorTypes : ISDKMKotlinEnum
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
@property (class, readonly) ISDKMErrorTypes *infinitumsdk __attribute__((swift_name("infinitumsdk")));
@property (class, readonly) ISDKMErrorTypes *network __attribute__((swift_name("network")));
@property (class, readonly) ISDKMErrorTypes *server __attribute__((swift_name("server")));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (int32_t)compareToOther:(ISDKMErrorTypes *)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Errors")))
@interface ISDKMErrors : ISDKMKotlinEnum
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
@property (class, readonly) ISDKMErrors *invalidParameter __attribute__((swift_name("invalidParameter")));
@property (class, readonly) ISDKMErrors *networkError __attribute__((swift_name("networkError")));
@property (class, readonly) ISDKMErrors *unknownException __attribute__((swift_name("unknownException")));
@property (class, readonly) ISDKMErrors *domainUnspecified __attribute__((swift_name("domainUnspecified")));
@property (class, readonly) ISDKMErrors *serverError __attribute__((swift_name("serverError")));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (int32_t)compareToOther:(ISDKMErrors *)other __attribute__((swift_name("compareTo(other:)")));
@property ISDKMErrorResponse *error __attribute__((swift_name("error")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apps")))
@interface ISDKMApps : KotlinBase
- (instancetype)initWithMBaseUrl:(NSString *)mBaseUrl mNetworkService:(ISDKMNetworkService *)mNetworkService __attribute__((swift_name("init(mBaseUrl:mNetworkService:)"))) __attribute__((objc_designated_initializer));
- (void)getAppsAccessToken:(NSString *)accessToken callback:(id<ISDKMInfinitumResponseCallback>)callback __attribute__((swift_name("getApps(accessToken:callback:)")));
- (void)createAppAccessToken:(NSString *)accessToken appName:(NSString *)appName appTypeId:(int32_t)appTypeId token:(NSString *)token callback:(id<ISDKMInfinitumResponseCallback>)callback __attribute__((swift_name("createApp(accessToken:appName:appTypeId:token:callback:)")));
- (void)getAppByIdAccessToken:(NSString *)accessToken appId:(int32_t)appId callback:(id<ISDKMInfinitumResponseCallback>)callback __attribute__((swift_name("getAppById(accessToken:appId:callback:)")));
- (void)deleteAppAccessToken:(NSString *)accessToken appId:(int32_t)appId callback:(id<ISDKMInfinitumResponseCallback>)callback __attribute__((swift_name("deleteApp(accessToken:appId:callback:)")));
- (void)updateAppAccessToken:(NSString *)accessToken appId:(int32_t)appId appName:(NSString *)appName appTypeId:(int32_t)appTypeId callback:(id<ISDKMInfinitumResponseCallback>)callback __attribute__((swift_name("updateApp(accessToken:appId:appName:appTypeId:callback:)")));
@property (readonly) NSString *mBaseUrl __attribute__((swift_name("mBaseUrl")));
@property (readonly) ISDKMNetworkService *mNetworkService __attribute__((swift_name("mNetworkService")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Auth")))
@interface ISDKMAuth : KotlinBase
- (instancetype)initWithMBaseUrl:(NSString *)mBaseUrl mNetworkService:(ISDKMNetworkService *)mNetworkService __attribute__((swift_name("init(mBaseUrl:mNetworkService:)"))) __attribute__((objc_designated_initializer));
- (void)photoAuthToken:(NSString *)authToken appToken:(NSString *)appToken photoB64:(NSString *)photoB64 deviceIdentity:(NSString *)deviceIdentity callback:(id<ISDKMInfinitumResponseCallback>)callback __attribute__((swift_name("photo(authToken:appToken:photoB64:deviceIdentity:callback:)")));
@property (readonly) NSString *mBaseUrl __attribute__((swift_name("mBaseUrl")));
@property (readonly) ISDKMNetworkService *mNetworkService __attribute__((swift_name("mNetworkService")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NetworkService")))
@interface ISDKMNetworkService : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RequestLauncher")))
@interface ISDKMRequestLauncher : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)requestLauncher __attribute__((swift_name("init()")));
- (void)launchUrl:(NSString *)url headerParameters:(ISDKMMutableDictionary<NSString *, NSString *> * _Nullable)headerParameters bodyParameters:(ISDKMMutableDictionary<NSString *, NSString *> * _Nullable)bodyParameters networkService:(ISDKMNetworkService *)networkService method:(ISDKMKtor_httpHttpMethod *)method callback:(id<ISDKMInfinitumResponseCallback>)callback __attribute__((swift_name("launch(url:headerParameters:bodyParameters:networkService:method:callback:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Args")))
@interface ISDKMArgs : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)args __attribute__((swift_name("init()")));
- (BOOL)checkForContentArguments:(ISDKMKotlinArray *)arguments __attribute__((swift_name("checkForContent(arguments:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Dispatcher")))
@interface ISDKMDispatcher : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Dispatcher.Companion")))
@interface ISDKMDispatcherCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PlatformUtils")))
@interface ISDKMPlatformUtils : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)getDeviceIdentification __attribute__((swift_name("getDeviceIdentification()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Utils")))
@interface ISDKMUtils : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Utils.Companion")))
@interface ISDKMUtilsCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (ISDKMMutableDictionary<NSString *, NSString *> *)createMapPairs:(ISDKMKotlinArray *)pairs __attribute__((swift_name("createMap(pairs:)")));
- (ISDKMMutableDictionary<NSString *, NSString *> *)createAuthorizationHeaderAccessToken:(NSString *)accessToken __attribute__((swift_name("createAuthorizationHeader(accessToken:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface ISDKMKotlinArray : KotlinBase
+ (instancetype)arrayWithSize:(int32_t)size init:(id _Nullable (^)(ISDKMInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (id _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<ISDKMKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(id _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeEncoder")))
@protocol ISDKMKotlinx_serialization_runtimeEncoder
@required
- (id<ISDKMKotlinx_serialization_runtimeCompositeEncoder>)beginCollectionDesc:(id<ISDKMKotlinx_serialization_runtimeSerialDescriptor>)desc collectionSize:(int32_t)collectionSize typeParams:(ISDKMKotlinArray *)typeParams __attribute__((swift_name("beginCollection(desc:collectionSize:typeParams:)")));
- (id<ISDKMKotlinx_serialization_runtimeCompositeEncoder>)beginStructureDesc:(id<ISDKMKotlinx_serialization_runtimeSerialDescriptor>)desc typeParams:(ISDKMKotlinArray *)typeParams __attribute__((swift_name("beginStructure(desc:typeParams:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescription:(ISDKMKotlinx_serialization_runtimeEnumDescriptor *)enumDescription ordinal:(int32_t)ordinal __attribute__((swift_name("encodeEnum(enumDescription:ordinal:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));
- (void)encodeNull __attribute__((swift_name("encodeNull()")));
- (void)encodeNullableSerializableValueSerializer:(id<ISDKMKotlinx_serialization_runtimeSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<ISDKMKotlinx_serialization_runtimeSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
- (void)encodeUnit __attribute__((swift_name("encodeUnit()")));
@property (readonly) id<ISDKMKotlinx_serialization_runtimeSerialModule> context __attribute__((swift_name("context")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeSerialDescriptor")))
@protocol ISDKMKotlinx_serialization_runtimeSerialDescriptor
@required
- (NSArray<id<ISDKMKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));
- (id<ISDKMKotlinx_serialization_runtimeSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));
- (NSArray<id<ISDKMKotlinAnnotation>> *)getEntityAnnotations __attribute__((swift_name("getEntityAnnotations()")));
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));
@property (readonly) ISDKMKotlinx_serialization_runtimeSerialKind *kind __attribute__((swift_name("kind")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeDecoder")))
@protocol ISDKMKotlinx_serialization_runtimeDecoder
@required
- (id<ISDKMKotlinx_serialization_runtimeCompositeDecoder>)beginStructureDesc:(id<ISDKMKotlinx_serialization_runtimeSerialDescriptor>)desc typeParams:(ISDKMKotlinArray *)typeParams __attribute__((swift_name("beginStructure(desc:typeParams:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescription:(ISDKMKotlinx_serialization_runtimeEnumDescriptor *)enumDescription __attribute__((swift_name("decodeEnum(enumDescription:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));
- (ISDKMKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<ISDKMKotlinx_serialization_runtimeDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<ISDKMKotlinx_serialization_runtimeDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
- (void)decodeUnit __attribute__((swift_name("decodeUnit()")));
- (id _Nullable)updateNullableSerializableValueDeserializer:(id<ISDKMKotlinx_serialization_runtimeDeserializationStrategy>)deserializer old:(id _Nullable)old __attribute__((swift_name("updateNullableSerializableValue(deserializer:old:)")));
- (id _Nullable)updateSerializableValueDeserializer:(id<ISDKMKotlinx_serialization_runtimeDeserializationStrategy>)deserializer old:(id _Nullable)old __attribute__((swift_name("updateSerializableValue(deserializer:old:)")));
@property (readonly) id<ISDKMKotlinx_serialization_runtimeSerialModule> context __attribute__((swift_name("context")));
@property (readonly) ISDKMKotlinx_serialization_runtimeUpdateMode *updateMode __attribute__((swift_name("updateMode")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpMethod")))
@interface ISDKMKtor_httpHttpMethod : KotlinBase
- (instancetype)initWithValue:(NSString *)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (ISDKMKtor_httpHttpMethod *)doCopyValue:(NSString *)value __attribute__((swift_name("doCopy(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((swift_name("KotlinIterator")))
@protocol ISDKMKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeCompositeEncoder")))
@protocol ISDKMKotlinx_serialization_runtimeCompositeEncoder
@required
- (void)encodeBooleanElementDesc:(id<ISDKMKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(desc:index:value:)")));
- (void)encodeByteElementDesc:(id<ISDKMKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(desc:index:value:)")));
- (void)encodeCharElementDesc:(id<ISDKMKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(desc:index:value:)")));
- (void)encodeDoubleElementDesc:(id<ISDKMKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(desc:index:value:)")));
- (void)encodeFloatElementDesc:(id<ISDKMKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(desc:index:value:)")));
- (void)encodeIntElementDesc:(id<ISDKMKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(desc:index:value:)")));
- (void)encodeLongElementDesc:(id<ISDKMKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(desc:index:value:)")));
- (void)encodeNonSerializableElementDesc:(id<ISDKMKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index value:(id)value __attribute__((swift_name("encodeNonSerializableElement(desc:index:value:)")));
- (void)encodeNullableSerializableElementDesc:(id<ISDKMKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index serializer:(id<ISDKMKotlinx_serialization_runtimeSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(desc:index:serializer:value:)")));
- (void)encodeSerializableElementDesc:(id<ISDKMKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index serializer:(id<ISDKMKotlinx_serialization_runtimeSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(desc:index:serializer:value:)")));
- (void)encodeShortElementDesc:(id<ISDKMKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(desc:index:value:)")));
- (void)encodeStringElementDesc:(id<ISDKMKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(desc:index:value:)")));
- (void)encodeUnitElementDesc:(id<ISDKMKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("encodeUnitElement(desc:index:)")));
- (void)endStructureDesc:(id<ISDKMKotlinx_serialization_runtimeSerialDescriptor>)desc __attribute__((swift_name("endStructure(desc:)")));
- (BOOL)shouldEncodeElementDefaultDesc:(id<ISDKMKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(desc:index:)")));
@property (readonly) id<ISDKMKotlinx_serialization_runtimeSerialModule> context __attribute__((swift_name("context")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeSerialClassDescImpl")))
@interface ISDKMKotlinx_serialization_runtimeSerialClassDescImpl : KotlinBase <ISDKMKotlinx_serialization_runtimeSerialDescriptor>
- (instancetype)initWithName:(NSString *)name generatedSerializer:(id<ISDKMKotlinx_serialization_runtimeGeneratedSerializer> _Nullable)generatedSerializer __attribute__((swift_name("init(name:generatedSerializer:)"))) __attribute__((objc_designated_initializer));
- (void)addElementName:(NSString *)name isOptional:(BOOL)isOptional __attribute__((swift_name("addElement(name:isOptional:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSArray<id<ISDKMKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));
- (id<ISDKMKotlinx_serialization_runtimeSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));
- (NSArray<id<ISDKMKotlinAnnotation>> *)getEntityAnnotations __attribute__((swift_name("getEntityAnnotations()")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));
- (void)pushAnnotationA:(id<ISDKMKotlinAnnotation>)a __attribute__((swift_name("pushAnnotation(a:)")));
- (void)pushClassAnnotationA:(id<ISDKMKotlinAnnotation>)a __attribute__((swift_name("pushClassAnnotation(a:)")));
- (void)pushDescriptorDesc:(id<ISDKMKotlinx_serialization_runtimeSerialDescriptor>)desc __attribute__((swift_name("pushDescriptor(desc:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) ISDKMKotlinx_serialization_runtimeSerialKind *kind __attribute__((swift_name("kind")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_runtimeEnumDescriptor")))
@interface ISDKMKotlinx_serialization_runtimeEnumDescriptor : ISDKMKotlinx_serialization_runtimeSerialClassDescImpl
- (instancetype)initWithName:(NSString *)name choices:(ISDKMKotlinArray *)choices __attribute__((swift_name("init(name:choices:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithName:(NSString *)name generatedSerializer:(id<ISDKMKotlinx_serialization_runtimeGeneratedSerializer> _Nullable)generatedSerializer __attribute__((swift_name("init(name:generatedSerializer:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (id<ISDKMKotlinx_serialization_runtimeSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
@property (readonly) ISDKMKotlinx_serialization_runtimeSerialKind *kind __attribute__((swift_name("kind")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeSerialModule")))
@protocol ISDKMKotlinx_serialization_runtimeSerialModule
@required
- (void)dumpToCollector:(id<ISDKMKotlinx_serialization_runtimeSerialModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));
- (id<ISDKMKotlinx_serialization_runtimeKSerializer> _Nullable)getContextualKclass:(id<ISDKMKotlinKClass>)kclass __attribute__((swift_name("getContextual(kclass:)")));
- (id<ISDKMKotlinx_serialization_runtimeKSerializer> _Nullable)getPolymorphicBaseClass:(id<ISDKMKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));
- (id<ISDKMKotlinx_serialization_runtimeKSerializer> _Nullable)getPolymorphicBaseClass:(id<ISDKMKotlinKClass>)baseClass serializedClassName:(NSString *)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end;

__attribute__((swift_name("KotlinAnnotation")))
@protocol ISDKMKotlinAnnotation
@required
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeSerialKind")))
@interface ISDKMKotlinx_serialization_runtimeSerialKind : KotlinBase
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeCompositeDecoder")))
@protocol ISDKMKotlinx_serialization_runtimeCompositeDecoder
@required
- (BOOL)decodeBooleanElementDesc:(id<ISDKMKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(desc:index:)")));
- (int8_t)decodeByteElementDesc:(id<ISDKMKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeByteElement(desc:index:)")));
- (unichar)decodeCharElementDesc:(id<ISDKMKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeCharElement(desc:index:)")));
- (int32_t)decodeCollectionSizeDesc:(id<ISDKMKotlinx_serialization_runtimeSerialDescriptor>)desc __attribute__((swift_name("decodeCollectionSize(desc:)")));
- (double)decodeDoubleElementDesc:(id<ISDKMKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(desc:index:)")));
- (int32_t)decodeElementIndexDesc:(id<ISDKMKotlinx_serialization_runtimeSerialDescriptor>)desc __attribute__((swift_name("decodeElementIndex(desc:)")));
- (float)decodeFloatElementDesc:(id<ISDKMKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeFloatElement(desc:index:)")));
- (int32_t)decodeIntElementDesc:(id<ISDKMKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeIntElement(desc:index:)")));
- (int64_t)decodeLongElementDesc:(id<ISDKMKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeLongElement(desc:index:)")));
- (id _Nullable)decodeNullableSerializableElementDesc:(id<ISDKMKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index deserializer:(id<ISDKMKotlinx_serialization_runtimeDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableElement(desc:index:deserializer:)")));
- (id _Nullable)decodeSerializableElementDesc:(id<ISDKMKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index deserializer:(id<ISDKMKotlinx_serialization_runtimeDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableElement(desc:index:deserializer:)")));
- (int16_t)decodeShortElementDesc:(id<ISDKMKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeShortElement(desc:index:)")));
- (NSString *)decodeStringElementDesc:(id<ISDKMKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeStringElement(desc:index:)")));
- (void)decodeUnitElementDesc:(id<ISDKMKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeUnitElement(desc:index:)")));
- (void)endStructureDesc:(id<ISDKMKotlinx_serialization_runtimeSerialDescriptor>)desc __attribute__((swift_name("endStructure(desc:)")));
- (id _Nullable)updateNullableSerializableElementDesc:(id<ISDKMKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index deserializer:(id<ISDKMKotlinx_serialization_runtimeDeserializationStrategy>)deserializer old:(id _Nullable)old __attribute__((swift_name("updateNullableSerializableElement(desc:index:deserializer:old:)")));
- (id _Nullable)updateSerializableElementDesc:(id<ISDKMKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index deserializer:(id<ISDKMKotlinx_serialization_runtimeDeserializationStrategy>)deserializer old:(id _Nullable)old __attribute__((swift_name("updateSerializableElement(desc:index:deserializer:old:)")));
@property (readonly) id<ISDKMKotlinx_serialization_runtimeSerialModule> context __attribute__((swift_name("context")));
@property (readonly) ISDKMKotlinx_serialization_runtimeUpdateMode *updateMode __attribute__((swift_name("updateMode")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface ISDKMKotlinNothing : KotlinBase
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_runtimeUpdateMode")))
@interface ISDKMKotlinx_serialization_runtimeUpdateMode : ISDKMKotlinEnum
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
@property (class, readonly) ISDKMKotlinx_serialization_runtimeUpdateMode *banned __attribute__((swift_name("banned")));
@property (class, readonly) ISDKMKotlinx_serialization_runtimeUpdateMode *overwrite __attribute__((swift_name("overwrite")));
@property (class, readonly) ISDKMKotlinx_serialization_runtimeUpdateMode *update __attribute__((swift_name("update")));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (int32_t)compareToOther:(ISDKMKotlinx_serialization_runtimeUpdateMode *)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeSerialModuleCollector")))
@protocol ISDKMKotlinx_serialization_runtimeSerialModuleCollector
@required
- (void)contextualKClass:(id<ISDKMKotlinKClass>)kClass serializer:(id<ISDKMKotlinx_serialization_runtimeKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<ISDKMKotlinKClass>)baseClass actualClass:(id<ISDKMKotlinKClass>)actualClass actualSerializer:(id<ISDKMKotlinx_serialization_runtimeKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
@end;

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol ISDKMKotlinKDeclarationContainer
@required
@end;

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol ISDKMKotlinKAnnotatedElement
@required
@end;

__attribute__((swift_name("KotlinKClassifier")))
@protocol ISDKMKotlinKClassifier
@required
@end;

__attribute__((swift_name("KotlinKClass")))
@protocol ISDKMKotlinKClass <ISDKMKotlinKDeclarationContainer, ISDKMKotlinKAnnotatedElement, ISDKMKotlinKClassifier>
@required
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end;

NS_ASSUME_NONNULL_END
