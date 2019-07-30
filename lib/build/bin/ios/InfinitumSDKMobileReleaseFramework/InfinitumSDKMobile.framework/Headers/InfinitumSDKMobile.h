#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class ISDKMSqldelight_runtimeQuery, ISDKMSqldelight_runtimeTransacterTransaction, ISDKMConfigResponse, ISDKMErrorResponse, ISDKMInitResponse, ISDKMApps, ISDKMAuth, ISDKMDevicePosition, ISDKMApplicationContext, ISDKMApp, ISDKMKotlinArray, ISDKMConfig, ISDKMNetworkService, ISDKMRepository, ISDKMApp_, ISDKMType, ISDKMClient, ISDKMPhotoResponse, ISDKMPhotoOptionalParametersBuilder, ISDKMDevicePosition_, ISDKMKtor_httpHttpMethod, ISDKMKotlinx_coroutines_coreCoroutineDispatcher, UIImage, ISDKMKotlinx_serialization_runtimeEnumDescriptor, ISDKMKotlinx_serialization_runtimeSerialKind, ISDKMKotlinNothing, ISDKMKotlinx_serialization_runtimeUpdateMode, ISDKMKotlinByteArray, ISDKMKotlinByteIterator;

@protocol ISDKMSqldelight_runtimeSqlDriver, ISDKMSqldelight_runtimeSqlDriverSchema, ISDKMKotlinCoroutineContextElement, ISDKMKotlinx_serialization_runtimeKSerializer, ISDKMKotlinx_serialization_runtimeEncoder, ISDKMKotlinx_serialization_runtimeSerialDescriptor, ISDKMKotlinx_serialization_runtimeDecoder, ISDKMSqldelight_runtimeSqlCursor, ISDKMSqldelight_runtimeQueryListener, ISDKMSqldelight_runtimeSqlPreparedStatement, ISDKMKotlinCoroutineContextKey, ISDKMKotlinIterator, ISDKMKotlinx_serialization_runtimeCompositeEncoder, ISDKMKotlinx_serialization_runtimeSerialModule, ISDKMKotlinAnnotation, ISDKMKotlinx_serialization_runtimeCompositeDecoder, ISDKMKotlinContinuation, ISDKMKotlinx_coroutines_coreRunnable, ISDKMKotlinx_serialization_runtimeSerialModuleCollector, ISDKMKotlinKClass;

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

__attribute__((swift_name("Sqldelight_runtimeTransacter")))
@protocol ISDKMSqldelight_runtimeTransacter
@required
- (void)transactionNoEnclosing:(BOOL)noEnclosing body:(void (^)(ISDKMSqldelight_runtimeTransacterTransaction *))body __attribute__((swift_name("transaction(noEnclosing:body:)")));
@end;

__attribute__((swift_name("InfinitumDBQueries")))
@protocol ISDKMInfinitumDBQueries <ISDKMSqldelight_runtimeTransacter>
@required
- (ISDKMSqldelight_runtimeQuery *)selectAllMapper:(id (^)(NSString *, ISDKMLong *))mapper __attribute__((swift_name("selectAll(mapper:)")));
- (ISDKMSqldelight_runtimeQuery *)selectAll __attribute__((swift_name("selectAll()")));
- (void)insertNumber:(int64_t)number name:(NSString *)name __attribute__((swift_name("insert(number:name:)")));
@end;

__attribute__((swift_name("Infinitum_teste")))
@protocol ISDKMInfinitum_teste
@required
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int64_t number __attribute__((swift_name("number")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Infinitum_testeImpl")))
@interface ISDKMInfinitum_testeImpl : KotlinBase <ISDKMInfinitum_teste>
- (instancetype)initWithName:(NSString *)name number:(int64_t)number __attribute__((swift_name("init(name:number:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (int64_t)component2 __attribute__((swift_name("component2()")));
- (ISDKMInfinitum_testeImpl *)doCopyName:(NSString *)name number:(int64_t)number __attribute__((swift_name("doCopy(name:number:)")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int64_t number __attribute__((swift_name("number")));
@end;

__attribute__((swift_name("MyDatabase")))
@protocol ISDKMMyDatabase <ISDKMSqldelight_runtimeTransacter>
@required
@property (readonly) id<ISDKMInfinitumDBQueries> infinitumDBQueries __attribute__((swift_name("infinitumDBQueries")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MyDatabaseCompanion")))
@interface ISDKMMyDatabaseCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<ISDKMMyDatabase>)invokeDriver:(id<ISDKMSqldelight_runtimeSqlDriver>)driver __attribute__((swift_name("invoke(driver:)")));
@property (readonly) id<ISDKMSqldelight_runtimeSqlDriverSchema> Schema __attribute__((swift_name("Schema")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Infinitum")))
@interface ISDKMInfinitum : KotlinBase
- (void)configDomain:(NSString *)domain appType:(NSString *)appType onSuccess:(void (^)(ISDKMConfigResponse *))onSuccess onFailure:(void (^)(ISDKMErrorResponse *))onFailure __attribute__((swift_name("config(domain:appType:onSuccess:onFailure:)")));
- (void)doInitDomain:(NSString *)domain appToken:(NSString *)appToken onSuccess:(void (^)(ISDKMInitResponse *))onSuccess onFailure:(void (^)(ISDKMErrorResponse *))onFailure onLicensed:(void (^)(void))onLicensed onUnlicensed:(void (^)(void))onUnlicensed __attribute__((swift_name("doInit(domain:appToken:onSuccess:onFailure:onLicensed:onUnlicensed:)")));
- (void)doInitDomain:(NSString *)domain appToken:(NSString *)appToken onSuccess:(void (^)(ISDKMInitResponse *))onSuccess onFailure:(void (^)(ISDKMErrorResponse *))onFailure __attribute__((swift_name("doInit(domain:appToken:onSuccess:onFailure:)")));
- (void)exit __attribute__((swift_name("exit()")));
- (ISDKMApps * _Nullable)apps __attribute__((swift_name("apps()")));
- (ISDKMAuth * _Nullable)auth __attribute__((swift_name("auth()")));
- (ISDKMDevicePosition * _Nullable)devicePosition __attribute__((swift_name("devicePosition()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Infinitum.Companion")))
@interface ISDKMInfinitumCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (ISDKMInfinitum *)getInstanceApplicationContext:(ISDKMApplicationContext *)applicationContext __attribute__((swift_name("getInstance(applicationContext:)")));
@end;

__attribute__((swift_name("InfinitumResponseCallback")))
@protocol ISDKMInfinitumResponseCallback
@required
- (void)onSuccessResponse:(id _Nullable)response __attribute__((swift_name("onSuccess(response:)")));
- (void)onFailureError:(ISDKMErrorResponse *)error __attribute__((swift_name("onFailure(error:)")));
@end;

__attribute__((swift_name("ConfigCallback")))
@protocol ISDKMConfigCallback <ISDKMInfinitumResponseCallback>
@required
@end;

__attribute__((swift_name("InitCallback")))
@protocol ISDKMInitCallback <ISDKMInfinitumResponseCallback>
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Workaround")))
@interface ISDKMWorkaround : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)workaroundElement:(id<ISDKMKotlinCoroutineContextElement>)element __attribute__((swift_name("workaround(element:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConfigResponse")))
@interface ISDKMConfigResponse : KotlinBase
- (instancetype)initWithSeen1:(int32_t)seen1 apps:(NSArray<ISDKMApp *> * _Nullable)apps serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen1:apps:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithApps:(NSArray<ISDKMApp *> *)apps __attribute__((swift_name("init(apps:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (NSArray<ISDKMApp *> *)component1 __attribute__((swift_name("component1()")));
- (ISDKMConfigResponse *)doCopyApps:(NSArray<ISDKMApp *> *)apps __attribute__((swift_name("doCopy(apps:)")));
@property (readonly) NSArray<ISDKMApp *> *apps __attribute__((swift_name("apps")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConfigResponse.Companion")))
@interface ISDKMConfigResponseCompanion : KotlinBase
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
__attribute__((swift_name("ConfigResponse.$serializer")))
@interface ISDKMConfigResponse$serializer : KotlinBase <ISDKMKotlinx_serialization_runtimeGeneratedSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)$serializer __attribute__((swift_name("init()")));
- (ISDKMKotlinArray *)childSerializers __attribute__((swift_name("childSerializers()")));
- (ISDKMConfigResponse *)deserializeDecoder:(id<ISDKMKotlinx_serialization_runtimeDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (ISDKMConfigResponse *)patchDecoder:(id<ISDKMKotlinx_serialization_runtimeDecoder>)decoder old:(ISDKMConfigResponse *)old __attribute__((swift_name("patch(decoder:old:)")));
- (void)serializeEncoder:(id<ISDKMKotlinx_serialization_runtimeEncoder>)encoder obj:(ISDKMConfigResponse *)obj __attribute__((swift_name("serialize(encoder:obj:)")));
@property (readonly) id<ISDKMKotlinx_serialization_runtimeSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("App")))
@interface ISDKMApp : KotlinBase
- (instancetype)initWithSeen1:(int32_t)seen1 name:(NSString * _Nullable)name token:(NSString * _Nullable)token serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen1:name:token:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithName:(NSString *)name token:(NSString *)token __attribute__((swift_name("init(name:token:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (ISDKMApp *)doCopyName:(NSString *)name token:(NSString *)token __attribute__((swift_name("doCopy(name:token:)")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *token __attribute__((swift_name("token")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("App.Companion")))
@interface ISDKMAppCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<ISDKMKotlinx_serialization_runtimeKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("App.$serializer")))
@interface ISDKMApp$serializer : KotlinBase <ISDKMKotlinx_serialization_runtimeGeneratedSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)$serializer __attribute__((swift_name("init()")));
- (ISDKMKotlinArray *)childSerializers __attribute__((swift_name("childSerializers()")));
- (ISDKMApp *)deserializeDecoder:(id<ISDKMKotlinx_serialization_runtimeDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (ISDKMApp *)patchDecoder:(id<ISDKMKotlinx_serialization_runtimeDecoder>)decoder old:(ISDKMApp *)old __attribute__((swift_name("patch(decoder:old:)")));
- (void)serializeEncoder:(id<ISDKMKotlinx_serialization_runtimeEncoder>)encoder obj:(ISDKMApp *)obj __attribute__((swift_name("serialize(encoder:obj:)")));
@property (readonly) id<ISDKMKotlinx_serialization_runtimeSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InitResponseDTO")))
@interface ISDKMInitResponseDTO : KotlinBase
- (instancetype)initWithSeen1:(int32_t)seen1 access_token:(NSString * _Nullable)access_token config:(ISDKMConfig * _Nullable)config node:(NSString * _Nullable)node serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen1:access_token:config:node:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithAccess_token:(NSString *)access_token config:(ISDKMConfig *)config node:(NSString *)node __attribute__((swift_name("init(access_token:config:node:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (ISDKMConfig *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (ISDKMInitResponseDTO *)doCopyAccess_token:(NSString *)access_token config:(ISDKMConfig *)config node:(NSString *)node __attribute__((swift_name("doCopy(access_token:config:node:)")));
@property (readonly) NSString *access_token __attribute__((swift_name("access_token")));
@property (readonly) ISDKMConfig *config __attribute__((swift_name("config")));
@property (readonly) NSString *node __attribute__((swift_name("node")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InitResponseDTO.Companion")))
@interface ISDKMInitResponseDTOCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<ISDKMKotlinx_serialization_runtimeKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InitResponseDTO.$serializer")))
@interface ISDKMInitResponseDTO$serializer : KotlinBase <ISDKMKotlinx_serialization_runtimeGeneratedSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)$serializer __attribute__((swift_name("init()")));
- (ISDKMKotlinArray *)childSerializers __attribute__((swift_name("childSerializers()")));
- (ISDKMInitResponseDTO *)deserializeDecoder:(id<ISDKMKotlinx_serialization_runtimeDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (ISDKMInitResponseDTO *)patchDecoder:(id<ISDKMKotlinx_serialization_runtimeDecoder>)decoder old:(ISDKMInitResponseDTO *)old __attribute__((swift_name("patch(decoder:old:)")));
- (void)serializeEncoder:(id<ISDKMKotlinx_serialization_runtimeEncoder>)encoder obj:(ISDKMInitResponseDTO *)obj __attribute__((swift_name("serialize(encoder:obj:)")));
@property (readonly) id<ISDKMKotlinx_serialization_runtimeSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InitResponse")))
@interface ISDKMInitResponse : KotlinBase
- (instancetype)initWithSeen1:(int32_t)seen1 config:(ISDKMConfig * _Nullable)config serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen1:config:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithConfig:(ISDKMConfig *)config __attribute__((swift_name("init(config:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (ISDKMConfig *)component1 __attribute__((swift_name("component1()")));
- (ISDKMInitResponse *)doCopyConfig:(ISDKMConfig *)config __attribute__((swift_name("doCopy(config:)")));
@property (readonly) ISDKMConfig *config __attribute__((swift_name("config")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InitResponse.Companion")))
@interface ISDKMInitResponseCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<ISDKMKotlinx_serialization_runtimeKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InitResponse.$serializer")))
@interface ISDKMInitResponse$serializer : KotlinBase <ISDKMKotlinx_serialization_runtimeGeneratedSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)$serializer __attribute__((swift_name("init()")));
- (ISDKMKotlinArray *)childSerializers __attribute__((swift_name("childSerializers()")));
- (ISDKMInitResponse *)deserializeDecoder:(id<ISDKMKotlinx_serialization_runtimeDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (ISDKMInitResponse *)patchDecoder:(id<ISDKMKotlinx_serialization_runtimeDecoder>)decoder old:(ISDKMInitResponse *)old __attribute__((swift_name("patch(decoder:old:)")));
- (void)serializeEncoder:(id<ISDKMKotlinx_serialization_runtimeEncoder>)encoder obj:(ISDKMInitResponse *)obj __attribute__((swift_name("serialize(encoder:obj:)")));
@property (readonly) id<ISDKMKotlinx_serialization_runtimeSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Config")))
@interface ISDKMConfig : KotlinBase
- (instancetype)initWithSeen1:(int32_t)seen1 country:(NSString * _Nullable)country background:(NSString * _Nullable)background logo:(NSString * _Nullable)logo text_color:(NSString * _Nullable)text_color button_color:(NSString * _Nullable)button_color button_text_color:(NSString * _Nullable)button_text_color pincode:(NSString * _Nullable)pincode offline:(int32_t)offline serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen1:country:background:logo:text_color:button_color:button_text_color:pincode:offline:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCountry:(NSString *)country background:(NSString *)background logo:(NSString *)logo text_color:(NSString *)text_color button_color:(NSString *)button_color button_text_color:(NSString *)button_text_color pincode:(NSString *)pincode offline:(int32_t)offline __attribute__((swift_name("init(country:background:logo:text_color:button_color:button_text_color:pincode:offline:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (NSString *)component5 __attribute__((swift_name("component5()")));
- (NSString *)component6 __attribute__((swift_name("component6()")));
- (NSString *)component7 __attribute__((swift_name("component7()")));
- (int32_t)component8 __attribute__((swift_name("component8()")));
- (ISDKMConfig *)doCopyCountry:(NSString *)country background:(NSString *)background logo:(NSString *)logo text_color:(NSString *)text_color button_color:(NSString *)button_color button_text_color:(NSString *)button_text_color pincode:(NSString *)pincode offline:(int32_t)offline __attribute__((swift_name("doCopy(country:background:logo:text_color:button_color:button_text_color:pincode:offline:)")));
@property (readonly) NSString *country __attribute__((swift_name("country")));
@property (readonly) NSString *background __attribute__((swift_name("background")));
@property (readonly) NSString *logo __attribute__((swift_name("logo")));
@property (readonly) NSString *text_color __attribute__((swift_name("text_color")));
@property (readonly) NSString *button_color __attribute__((swift_name("button_color")));
@property (readonly) NSString *button_text_color __attribute__((swift_name("button_text_color")));
@property (readonly) NSString *pincode __attribute__((swift_name("pincode")));
@property (readonly) int32_t offline __attribute__((swift_name("offline")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Config.Companion")))
@interface ISDKMConfigCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<ISDKMKotlinx_serialization_runtimeKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Config.$serializer")))
@interface ISDKMConfig$serializer : KotlinBase <ISDKMKotlinx_serialization_runtimeGeneratedSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)$serializer __attribute__((swift_name("init()")));
- (ISDKMKotlinArray *)childSerializers __attribute__((swift_name("childSerializers()")));
- (ISDKMConfig *)deserializeDecoder:(id<ISDKMKotlinx_serialization_runtimeDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (ISDKMConfig *)patchDecoder:(id<ISDKMKotlinx_serialization_runtimeDecoder>)decoder old:(ISDKMConfig *)old __attribute__((swift_name("patch(decoder:old:)")));
- (void)serializeEncoder:(id<ISDKMKotlinx_serialization_runtimeEncoder>)encoder obj:(ISDKMConfig *)obj __attribute__((swift_name("serialize(encoder:obj:)")));
@property (readonly) id<ISDKMKotlinx_serialization_runtimeSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
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
@property (class, readonly) ISDKMErrors *invalidDomain __attribute__((swift_name("invalidDomain")));
@property (class, readonly) ISDKMErrors *serverError __attribute__((swift_name("serverError")));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (int32_t)compareToOther:(ISDKMErrors *)other __attribute__((swift_name("compareTo(other:)")));
@property ISDKMErrorResponse *error __attribute__((swift_name("error")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apps")))
@interface ISDKMApps : KotlinBase
- (instancetype)initWithMBaseUrl:(NSString *)mBaseUrl mNetworkService:(ISDKMNetworkService *)mNetworkService mRepository:(ISDKMRepository *)mRepository __attribute__((swift_name("init(mBaseUrl:mNetworkService:mRepository:)"))) __attribute__((objc_designated_initializer));
- (void)getAppsOnSuccess:(void (^)(NSArray<ISDKMApp_ *> *))onSuccess onFailure:(void (^)(ISDKMErrorResponse *))onFailure __attribute__((swift_name("getApps(onSuccess:onFailure:)")));
- (void)createAppAppName:(NSString *)appName appTypeId:(int32_t)appTypeId token:(NSString *)token onSuccess:(void (^)(ISDKMBoolean *))onSuccess onFailure:(void (^)(ISDKMErrorResponse *))onFailure __attribute__((swift_name("createApp(appName:appTypeId:token:onSuccess:onFailure:)")));
- (void)getAppByIdAppId:(int32_t)appId onSuccess:(void (^)(ISDKMApp_ *))onSuccess onFailure:(void (^)(ISDKMErrorResponse *))onFailure __attribute__((swift_name("getAppById(appId:onSuccess:onFailure:)")));
- (void)deleteAppAppId:(int32_t)appId onSuccess:(void (^)(ISDKMBoolean *))onSuccess onFailure:(void (^)(ISDKMErrorResponse *))onFailure __attribute__((swift_name("deleteApp(appId:onSuccess:onFailure:)")));
- (void)updateAppAppId:(int32_t)appId appName:(NSString *)appName appTypeId:(int32_t)appTypeId onSuccess:(void (^)(ISDKMBoolean *))onSuccess onFailure:(void (^)(ISDKMErrorResponse *))onFailure __attribute__((swift_name("updateApp(appId:appName:appTypeId:onSuccess:onFailure:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (ISDKMRepository *)component3 __attribute__((swift_name("component3()")));
- (ISDKMApps *)doCopyMBaseUrl:(NSString *)mBaseUrl mNetworkService:(ISDKMNetworkService *)mNetworkService mRepository:(ISDKMRepository *)mRepository __attribute__((swift_name("doCopy(mBaseUrl:mNetworkService:mRepository:)")));
@property (readonly) ISDKMRepository *mRepository __attribute__((swift_name("mRepository")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("App_")))
@interface ISDKMApp_ : KotlinBase
- (instancetype)initWithSeen1:(int32_t)seen1 id:(int32_t)id name:(NSString * _Nullable)name token:(NSString * _Nullable)token type:(ISDKMType * _Nullable)type client:(ISDKMClient * _Nullable)client serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen1:id:name:token:type:client:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithId:(int32_t)id name:(NSString *)name token:(NSString *)token type:(ISDKMType *)type client:(ISDKMClient *)client __attribute__((swift_name("init(id:name:token:type:client:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (ISDKMType *)component4 __attribute__((swift_name("component4()")));
- (ISDKMClient *)component5 __attribute__((swift_name("component5()")));
- (ISDKMApp_ *)doCopyId:(int32_t)id name:(NSString *)name token:(NSString *)token type:(ISDKMType *)type client:(ISDKMClient *)client __attribute__((swift_name("doCopy(id:name:token:type:client:)")));
@property (readonly) int32_t id __attribute__((swift_name("id")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *token __attribute__((swift_name("token")));
@property (readonly) ISDKMType *type __attribute__((swift_name("type")));
@property (readonly) ISDKMClient *client __attribute__((swift_name("client")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("App_.Companion")))
@interface ISDKMApp_Companion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<ISDKMKotlinx_serialization_runtimeKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("App_.$serializer")))
@interface ISDKMApp_$serializer : KotlinBase <ISDKMKotlinx_serialization_runtimeGeneratedSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)$serializer __attribute__((swift_name("init()")));
- (ISDKMKotlinArray *)childSerializers __attribute__((swift_name("childSerializers()")));
- (ISDKMApp_ *)deserializeDecoder:(id<ISDKMKotlinx_serialization_runtimeDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (ISDKMApp_ *)patchDecoder:(id<ISDKMKotlinx_serialization_runtimeDecoder>)decoder old:(ISDKMApp_ *)old __attribute__((swift_name("patch(decoder:old:)")));
- (void)serializeEncoder:(id<ISDKMKotlinx_serialization_runtimeEncoder>)encoder obj:(ISDKMApp_ *)obj __attribute__((swift_name("serialize(encoder:obj:)")));
@property (readonly) id<ISDKMKotlinx_serialization_runtimeSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Type")))
@interface ISDKMType : KotlinBase
- (instancetype)initWithSeen1:(int32_t)seen1 alias:(NSString * _Nullable)alias serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen1:alias:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithAlias:(NSString *)alias __attribute__((swift_name("init(alias:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (ISDKMType *)doCopyAlias:(NSString *)alias __attribute__((swift_name("doCopy(alias:)")));
@property (readonly) NSString *alias __attribute__((swift_name("alias")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Type.Companion")))
@interface ISDKMTypeCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<ISDKMKotlinx_serialization_runtimeKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Type.$serializer")))
@interface ISDKMType$serializer : KotlinBase <ISDKMKotlinx_serialization_runtimeGeneratedSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)$serializer __attribute__((swift_name("init()")));
- (ISDKMKotlinArray *)childSerializers __attribute__((swift_name("childSerializers()")));
- (ISDKMType *)deserializeDecoder:(id<ISDKMKotlinx_serialization_runtimeDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (ISDKMType *)patchDecoder:(id<ISDKMKotlinx_serialization_runtimeDecoder>)decoder old:(ISDKMType *)old __attribute__((swift_name("patch(decoder:old:)")));
- (void)serializeEncoder:(id<ISDKMKotlinx_serialization_runtimeEncoder>)encoder obj:(ISDKMType *)obj __attribute__((swift_name("serialize(encoder:obj:)")));
@property (readonly) id<ISDKMKotlinx_serialization_runtimeSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Client")))
@interface ISDKMClient : KotlinBase
- (instancetype)initWithSeen1:(int32_t)seen1 id:(NSString * _Nullable)id secret:(NSString * _Nullable)secret serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen1:id:secret:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithId:(NSString *)id secret:(NSString *)secret __attribute__((swift_name("init(id:secret:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (ISDKMClient *)doCopyId:(NSString *)id secret:(NSString *)secret __attribute__((swift_name("doCopy(id:secret:)")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString *secret __attribute__((swift_name("secret")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Client.Companion")))
@interface ISDKMClientCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<ISDKMKotlinx_serialization_runtimeKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Client.$serializer")))
@interface ISDKMClient$serializer : KotlinBase <ISDKMKotlinx_serialization_runtimeGeneratedSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)$serializer __attribute__((swift_name("init()")));
- (ISDKMKotlinArray *)childSerializers __attribute__((swift_name("childSerializers()")));
- (ISDKMClient *)deserializeDecoder:(id<ISDKMKotlinx_serialization_runtimeDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (ISDKMClient *)patchDecoder:(id<ISDKMKotlinx_serialization_runtimeDecoder>)decoder old:(ISDKMClient *)old __attribute__((swift_name("patch(decoder:old:)")));
- (void)serializeEncoder:(id<ISDKMKotlinx_serialization_runtimeEncoder>)encoder obj:(ISDKMClient *)obj __attribute__((swift_name("serialize(encoder:obj:)")));
@property (readonly) id<ISDKMKotlinx_serialization_runtimeSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Auth")))
@interface ISDKMAuth : KotlinBase
- (instancetype)initWithMBaseUrl:(NSString *)mBaseUrl mNetworkService:(ISDKMNetworkService *)mNetworkService mRepository:(ISDKMRepository *)mRepository __attribute__((swift_name("init(mBaseUrl:mNetworkService:mRepository:)"))) __attribute__((objc_designated_initializer));
- (void)photoPhotoB64:(NSString *)photoB64 onSuccess:(void (^)(ISDKMPhotoResponse *))onSuccess onFailure:(void (^)(ISDKMErrorResponse *))onFailure optionalParametersBuilder:(ISDKMPhotoOptionalParametersBuilder *)optionalParametersBuilder __attribute__((swift_name("photo(photoB64:onSuccess:onFailure:optionalParametersBuilder:)")));
@end;

__attribute__((swift_name("OptionalParameters")))
@protocol ISDKMOptionalParameters
@required
- (ISDKMMutableDictionary<NSString *, NSString *> *)toMap __attribute__((swift_name("toMap()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PhotoOptionalParameters")))
@interface ISDKMPhotoOptionalParameters : KotlinBase <ISDKMOptionalParameters>
- (ISDKMMutableDictionary<NSString *, NSString *> *)toMap __attribute__((swift_name("toMap()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PhotoOptionalParameters.Builder")))
@interface ISDKMPhotoOptionalParametersBuilder : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (ISDKMPhotoOptionalParametersBuilder *)setPositionLatitude:(float)latitude longitude:(float)longitude __attribute__((swift_name("setPosition(latitude:longitude:)")));
- (ISDKMPhotoOptionalParametersBuilder *)setProximityProximity:(NSString *)proximity __attribute__((swift_name("setProximity(proximity:)")));
- (ISDKMPhotoOptionalParametersBuilder *)setActionAction:(NSString *)action __attribute__((swift_name("setAction(action:)")));
- (ISDKMPhotoOptionalParametersBuilder *)setDataData:(NSString *)data __attribute__((swift_name("setData(data:)")));
- (ISDKMPhotoOptionalParameters *)build __attribute__((swift_name("build()")));
@property NSString *position __attribute__((swift_name("position")));
@property NSString *proximity __attribute__((swift_name("proximity")));
@property NSString *action __attribute__((swift_name("action")));
@property NSString *data __attribute__((swift_name("data")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PhotoResponseDto")))
@interface ISDKMPhotoResponseDto : KotlinBase
- (instancetype)initWithSeen1:(int32_t)seen1 token:(NSString * _Nullable)token name:(NSString * _Nullable)name email:(NSString * _Nullable)email serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen1:token:name:email:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithToken:(NSString *)token name:(NSString *)name email:(NSString *)email __attribute__((swift_name("init(token:name:email:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (ISDKMPhotoResponseDto *)doCopyToken:(NSString *)token name:(NSString *)name email:(NSString *)email __attribute__((swift_name("doCopy(token:name:email:)")));
@property (readonly) NSString *token __attribute__((swift_name("token")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *email __attribute__((swift_name("email")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PhotoResponseDto.Companion")))
@interface ISDKMPhotoResponseDtoCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<ISDKMKotlinx_serialization_runtimeKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PhotoResponseDto.$serializer")))
@interface ISDKMPhotoResponseDto$serializer : KotlinBase <ISDKMKotlinx_serialization_runtimeGeneratedSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)$serializer __attribute__((swift_name("init()")));
- (ISDKMKotlinArray *)childSerializers __attribute__((swift_name("childSerializers()")));
- (ISDKMPhotoResponseDto *)deserializeDecoder:(id<ISDKMKotlinx_serialization_runtimeDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (ISDKMPhotoResponseDto *)patchDecoder:(id<ISDKMKotlinx_serialization_runtimeDecoder>)decoder old:(ISDKMPhotoResponseDto *)old __attribute__((swift_name("patch(decoder:old:)")));
- (void)serializeEncoder:(id<ISDKMKotlinx_serialization_runtimeEncoder>)encoder obj:(ISDKMPhotoResponseDto *)obj __attribute__((swift_name("serialize(encoder:obj:)")));
@property (readonly) id<ISDKMKotlinx_serialization_runtimeSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PhotoResponse")))
@interface ISDKMPhotoResponse : KotlinBase
- (instancetype)initWithSeen1:(int32_t)seen1 name:(NSString * _Nullable)name email:(NSString * _Nullable)email serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen1:name:email:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithName:(NSString *)name email:(NSString *)email __attribute__((swift_name("init(name:email:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (ISDKMPhotoResponse *)doCopyName:(NSString *)name email:(NSString *)email __attribute__((swift_name("doCopy(name:email:)")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *email __attribute__((swift_name("email")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PhotoResponse.Companion")))
@interface ISDKMPhotoResponseCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<ISDKMKotlinx_serialization_runtimeKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PhotoResponse.$serializer")))
@interface ISDKMPhotoResponse$serializer : KotlinBase <ISDKMKotlinx_serialization_runtimeGeneratedSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)$serializer __attribute__((swift_name("init()")));
- (ISDKMKotlinArray *)childSerializers __attribute__((swift_name("childSerializers()")));
- (ISDKMPhotoResponse *)deserializeDecoder:(id<ISDKMKotlinx_serialization_runtimeDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (ISDKMPhotoResponse *)patchDecoder:(id<ISDKMKotlinx_serialization_runtimeDecoder>)decoder old:(ISDKMPhotoResponse *)old __attribute__((swift_name("patch(decoder:old:)")));
- (void)serializeEncoder:(id<ISDKMKotlinx_serialization_runtimeEncoder>)encoder obj:(ISDKMPhotoResponse *)obj __attribute__((swift_name("serialize(encoder:obj:)")));
@property (readonly) id<ISDKMKotlinx_serialization_runtimeSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DevicePosition")))
@interface ISDKMDevicePosition : KotlinBase
- (instancetype)initWithMBaseUrl:(NSString *)mBaseUrl mNetworkService:(ISDKMNetworkService *)mNetworkService mRepository:(ISDKMRepository *)mRepository __attribute__((swift_name("init(mBaseUrl:mNetworkService:mRepository:)"))) __attribute__((objc_designated_initializer));
- (void)getAllDevicePositionsOnSuccess:(void (^)(NSArray<ISDKMDevicePosition_ *> *))onSuccess onFailure:(void (^)(ISDKMErrorResponse *))onFailure __attribute__((swift_name("getAllDevicePositions(onSuccess:onFailure:)")));
- (void)doNewDevicePositionLatitude:(NSString *)latitude longitude:(NSString *)longitude onSuccess:(void (^)(ISDKMBoolean *))onSuccess onFailure:(void (^)(ISDKMErrorResponse *))onFailure __attribute__((swift_name("doNewDevicePosition(latitude:longitude:onSuccess:onFailure:)")));
- (void)doNewDevicePositionDeviceId:(int32_t)deviceId latitude:(NSString *)latitude longitude:(NSString *)longitude onSuccess:(void (^)(ISDKMBoolean *))onSuccess onFailure:(void (^)(ISDKMErrorResponse *))onFailure __attribute__((swift_name("doNewDevicePosition(deviceId:latitude:longitude:onSuccess:onFailure:)")));
- (void)deleteDevicePositionDevicePositionId:(int32_t)devicePositionId onSuccess:(void (^)(ISDKMBoolean *))onSuccess onFailure:(void (^)(ISDKMErrorResponse *))onFailure __attribute__((swift_name("deleteDevicePosition(devicePositionId:onSuccess:onFailure:)")));
- (void)getDevicePositionByIdDevicePositionId:(int32_t)devicePositionId onSuccess:(void (^)(ISDKMDevicePosition_ *))onSuccess onFailure:(void (^)(ISDKMErrorResponse *))onFailure __attribute__((swift_name("getDevicePositionById(devicePositionId:onSuccess:onFailure:)")));
- (void)getDevicePositionsByDeviceIdDeviceId:(int32_t)deviceId onSuccess:(void (^)(NSArray<ISDKMDevicePosition_ *> *))onSuccess onFailure:(void (^)(ISDKMErrorResponse *))onFailure __attribute__((swift_name("getDevicePositionsByDeviceId(deviceId:onSuccess:onFailure:)")));
- (void)updateDevicePositionDevicePositionId:(int32_t)devicePositionId deviceId:(int32_t)deviceId latitude:(NSString *)latitude longitude:(NSString *)longitude onSuccess:(void (^)(ISDKMDevicePosition_ *))onSuccess onFailure:(void (^)(ISDKMErrorResponse *))onFailure __attribute__((swift_name("updateDevicePosition(devicePositionId:deviceId:latitude:longitude:onSuccess:onFailure:)")));
- (void)updateDevicePositionDevicePositionId:(int32_t)devicePositionId latitude:(NSString *)latitude longitude:(NSString *)longitude onSuccess:(void (^)(ISDKMDevicePosition_ *))onSuccess onFailure:(void (^)(ISDKMErrorResponse *))onFailure __attribute__((swift_name("updateDevicePosition(devicePositionId:latitude:longitude:onSuccess:onFailure:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (ISDKMDevicePosition *)doCopyMBaseUrl:(NSString *)mBaseUrl mNetworkService:(ISDKMNetworkService *)mNetworkService mRepository:(ISDKMRepository *)mRepository __attribute__((swift_name("doCopy(mBaseUrl:mNetworkService:mRepository:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DevicePosition_")))
@interface ISDKMDevicePosition_ : KotlinBase
- (instancetype)initWithSeen1:(int32_t)seen1 id:(int32_t)id device_id:(int32_t)device_id lat:(NSString * _Nullable)lat lng:(NSString * _Nullable)lng serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen1:id:device_id:lat:lng:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithId:(int32_t)id device_id:(int32_t)device_id lat:(NSString *)lat lng:(NSString *)lng __attribute__((swift_name("init(id:device_id:lat:lng:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (ISDKMDevicePosition_ *)doCopyId:(int32_t)id device_id:(int32_t)device_id lat:(NSString *)lat lng:(NSString *)lng __attribute__((swift_name("doCopy(id:device_id:lat:lng:)")));
@property (readonly) int32_t id __attribute__((swift_name("id")));
@property (readonly) int32_t device_id __attribute__((swift_name("device_id")));
@property (readonly) NSString *lat __attribute__((swift_name("lat")));
@property (readonly) NSString *lng __attribute__((swift_name("lng")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DevicePosition_.Companion")))
@interface ISDKMDevicePosition_Companion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<ISDKMKotlinx_serialization_runtimeKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DevicePosition_.$serializer")))
@interface ISDKMDevicePosition_$serializer : KotlinBase <ISDKMKotlinx_serialization_runtimeGeneratedSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)$serializer __attribute__((swift_name("init()")));
- (ISDKMKotlinArray *)childSerializers __attribute__((swift_name("childSerializers()")));
- (ISDKMDevicePosition_ *)deserializeDecoder:(id<ISDKMKotlinx_serialization_runtimeDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (ISDKMDevicePosition_ *)patchDecoder:(id<ISDKMKotlinx_serialization_runtimeDecoder>)decoder old:(ISDKMDevicePosition_ *)old __attribute__((swift_name("patch(decoder:old:)")));
- (void)serializeEncoder:(id<ISDKMKotlinx_serialization_runtimeEncoder>)encoder obj:(ISDKMDevicePosition_ *)obj __attribute__((swift_name("serialize(encoder:obj:)")));
@property (readonly) id<ISDKMKotlinx_serialization_runtimeSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NetworkService")))
@interface ISDKMNetworkService : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Repository")))
@interface ISDKMRepository : KotlinBase
- (instancetype)initWithApplicationContext:(ISDKMApplicationContext *)applicationContext __attribute__((swift_name("init(applicationContext:)"))) __attribute__((objc_designated_initializer));
- (void)getAllDb __attribute__((swift_name("getAllDb()")));
- (void)insertDbNumber:(int32_t)number name:(NSString *)name __attribute__((swift_name("insertDb(number:name:)")));
- (NSString *)getDeviceId __attribute__((swift_name("getDeviceId()")));
- (NSString *)getToken __attribute__((swift_name("getToken()")));
- (void)setUserTokenUserToken:(NSString *)userToken __attribute__((swift_name("setUserToken(userToken:)")));
- (NSString *)getAppToken __attribute__((swift_name("getAppToken()")));
- (void)setAppTokenAppToken:(NSString *)appToken __attribute__((swift_name("setAppToken(appToken:)")));
- (void)setClientTokenClientToken:(NSString *)clientToken __attribute__((swift_name("setClientToken(clientToken:)")));
- (NSString *)getNode __attribute__((swift_name("getNode()")));
- (void)setNodeNode:(NSString *)node __attribute__((swift_name("setNode(node:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (ISDKMRepository *)doCopyApplicationContext:(ISDKMApplicationContext *)applicationContext __attribute__((swift_name("doCopy(applicationContext:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RequestLauncher")))
@interface ISDKMRequestLauncher : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)requestLauncher __attribute__((swift_name("init()")));
- (void)launchUrl:(NSString *)url headerParameters:(ISDKMMutableDictionary<NSString *, NSString *> * _Nullable)headerParameters bodyParameters:(ISDKMMutableDictionary<NSString *, NSString *> * _Nullable)bodyParameters networkService:(ISDKMNetworkService *)networkService method:(ISDKMKtor_httpHttpMethod *)method onSuccess:(void (^)(id))onSuccess onFailure:(void (^)(ISDKMErrorResponse *))onFailure __attribute__((swift_name("launch(url:headerParameters:bodyParameters:networkService:method:onSuccess:onFailure:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebSocket")))
@interface ISDKMWebSocket : KotlinBase
- (instancetype)initWithOnLicensed:(void (^)(void))onLicensed onUnlicensed:(void (^)(void))onUnlicensed mRepository:(ISDKMRepository *)mRepository __attribute__((swift_name("init(onLicensed:onUnlicensed:mRepository:)"))) __attribute__((objc_designated_initializer));
- (void)disconnect __attribute__((swift_name("disconnect()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApplicationContext")))
@interface ISDKMApplicationContext : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)getDeviceId __attribute__((swift_name("getDeviceId()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Args")))
@interface ISDKMArgs : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)args __attribute__((swift_name("init()")));
- (NSString *)createPositionJsonLatitude:(float)latitude longitude:(float)longitude __attribute__((swift_name("createPositionJson(latitude:longitude:)")));
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
@property (readonly) ISDKMKotlinx_coroutines_coreCoroutineDispatcher *ApplicationDispatcher __attribute__((swift_name("ApplicationDispatcher")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Keys")))
@interface ISDKMKeys : ISDKMKotlinEnum
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
@property (class, readonly) ISDKMKeys *clientToken __attribute__((swift_name("clientToken")));
@property (class, readonly) ISDKMKeys *userToken __attribute__((swift_name("userToken")));
@property (class, readonly) ISDKMKeys *appToken __attribute__((swift_name("appToken")));
@property (class, readonly) ISDKMKeys *node __attribute__((swift_name("node")));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (int32_t)compareToOther:(ISDKMKeys *)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PreferenceEditor")))
@interface ISDKMPreferenceEditor : KotlinBase
- (instancetype)initWithApplicationContext:(ISDKMApplicationContext *)applicationContext __attribute__((swift_name("init(applicationContext:)"))) __attribute__((objc_designated_initializer));
- (NSString *)getStringKey:(ISDKMKeys *)key __attribute__((swift_name("getString(key:)")));
- (void)setStringKey:(ISDKMKeys *)key string:(NSString *)string __attribute__((swift_name("setString(key:string:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Utils")))
@interface ISDKMUtils : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)utils __attribute__((swift_name("init()")));
- (NSString *)convertImageToBase64Image:(UIImage *)image __attribute__((swift_name("convertImageToBase64(image:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetSqlDriverKt")))
@interface ISDKMGetSqlDriverKt : KotlinBase
+ (id<ISDKMSqldelight_runtimeSqlDriver>)getSqlDriverApplicationContext:(ISDKMApplicationContext *)applicationContext schema:(id<ISDKMSqldelight_runtimeSqlDriverSchema>)schema dbName:(NSString *)dbName __attribute__((swift_name("getSqlDriver(applicationContext:schema:dbName:)")));
@end;

__attribute__((swift_name("Sqldelight_runtimeQuery")))
@interface ISDKMSqldelight_runtimeQuery : KotlinBase
- (instancetype)initWithQueries:(NSMutableArray<ISDKMSqldelight_runtimeQuery *> *)queries mapper:(id (^)(id<ISDKMSqldelight_runtimeSqlCursor>))mapper __attribute__((swift_name("init(queries:mapper:)"))) __attribute__((objc_designated_initializer));
- (void)addListenerListener:(id<ISDKMSqldelight_runtimeQueryListener>)listener __attribute__((swift_name("addListener(listener:)")));
- (id<ISDKMSqldelight_runtimeSqlCursor>)execute __attribute__((swift_name("execute()")));
- (NSArray<id> *)executeAsList __attribute__((swift_name("executeAsList()")));
- (id)executeAsOne __attribute__((swift_name("executeAsOne()")));
- (id _Nullable)executeAsOneOrNull __attribute__((swift_name("executeAsOneOrNull()")));
- (void)notifyDataChanged __attribute__((swift_name("notifyDataChanged()")));
- (void)removeListenerListener:(id<ISDKMSqldelight_runtimeQueryListener>)listener __attribute__((swift_name("removeListener(listener:)")));
@property (readonly) id (^mapper)(id<ISDKMSqldelight_runtimeSqlCursor>) __attribute__((swift_name("mapper")));
@end;

__attribute__((swift_name("Sqldelight_runtimeTransacterTransaction")))
@interface ISDKMSqldelight_runtimeTransacterTransaction : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)afterCommitFunction:(void (^)(void))function __attribute__((swift_name("afterCommit(function:)")));
- (void)afterRollbackFunction:(void (^)(void))function __attribute__((swift_name("afterRollback(function:)")));
- (void)endTransactionSuccessful:(BOOL)successful __attribute__((swift_name("endTransaction(successful:)")));
- (void)rollback __attribute__((swift_name("rollback()")));
- (void)transactionBody:(void (^)(ISDKMSqldelight_runtimeTransacterTransaction *))body __attribute__((swift_name("transaction(body:)")));
@property (readonly) ISDKMSqldelight_runtimeTransacterTransaction * _Nullable enclosingTransaction __attribute__((swift_name("enclosingTransaction")));
@end;

__attribute__((swift_name("Sqldelight_runtimeCloseable")))
@protocol ISDKMSqldelight_runtimeCloseable
@required
- (void)close __attribute__((swift_name("close()")));
@end;

__attribute__((swift_name("Sqldelight_runtimeSqlDriver")))
@protocol ISDKMSqldelight_runtimeSqlDriver <ISDKMSqldelight_runtimeCloseable>
@required
- (ISDKMSqldelight_runtimeTransacterTransaction * _Nullable)currentTransaction __attribute__((swift_name("currentTransaction()")));
- (void)executeIdentifier:(ISDKMInt * _Nullable)identifier sql:(NSString *)sql parameters:(int32_t)parameters binders:(void (^ _Nullable)(id<ISDKMSqldelight_runtimeSqlPreparedStatement>))binders __attribute__((swift_name("execute(identifier:sql:parameters:binders:)")));
- (id<ISDKMSqldelight_runtimeSqlCursor>)executeQueryIdentifier:(ISDKMInt * _Nullable)identifier sql:(NSString *)sql parameters:(int32_t)parameters binders:(void (^ _Nullable)(id<ISDKMSqldelight_runtimeSqlPreparedStatement>))binders __attribute__((swift_name("executeQuery(identifier:sql:parameters:binders:)")));
- (ISDKMSqldelight_runtimeTransacterTransaction *)doNewTransaction __attribute__((swift_name("doNewTransaction()")));
@end;

__attribute__((swift_name("Sqldelight_runtimeSqlDriverSchema")))
@protocol ISDKMSqldelight_runtimeSqlDriverSchema
@required
- (void)createDriver:(id<ISDKMSqldelight_runtimeSqlDriver>)driver __attribute__((swift_name("create(driver:)")));
- (void)migrateDriver:(id<ISDKMSqldelight_runtimeSqlDriver>)driver oldVersion:(int32_t)oldVersion newVersion:(int32_t)newVersion __attribute__((swift_name("migrate(driver:oldVersion:newVersion:)")));
@property (readonly) int32_t version __attribute__((swift_name("version")));
@end;

__attribute__((swift_name("KotlinCoroutineContext")))
@protocol ISDKMKotlinCoroutineContext
@required
- (id _Nullable)foldInitial:(id _Nullable)initial operation:(id _Nullable (^)(id _Nullable, id<ISDKMKotlinCoroutineContextElement>))operation __attribute__((swift_name("fold(initial:operation:)")));
- (id<ISDKMKotlinCoroutineContextElement> _Nullable)getKey:(id<ISDKMKotlinCoroutineContextKey>)key __attribute__((swift_name("get(key:)")));
- (id<ISDKMKotlinCoroutineContext>)minusKeyKey:(id<ISDKMKotlinCoroutineContextKey>)key __attribute__((swift_name("minusKey(key:)")));
- (id<ISDKMKotlinCoroutineContext>)plusContext:(id<ISDKMKotlinCoroutineContext>)context __attribute__((swift_name("plus(context:)")));
@end;

__attribute__((swift_name("KotlinCoroutineContextElement")))
@protocol ISDKMKotlinCoroutineContextElement <ISDKMKotlinCoroutineContext>
@required
@property (readonly) id<ISDKMKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
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

__attribute__((swift_name("KotlinAbstractCoroutineContextElement")))
@interface ISDKMKotlinAbstractCoroutineContextElement : KotlinBase <ISDKMKotlinCoroutineContextElement>
- (instancetype)initWithKey:(id<ISDKMKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<ISDKMKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end;

__attribute__((swift_name("KotlinContinuationInterceptor")))
@protocol ISDKMKotlinContinuationInterceptor <ISDKMKotlinCoroutineContextElement>
@required
- (id<ISDKMKotlinContinuation>)interceptContinuationContinuation:(id<ISDKMKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (void)releaseInterceptedContinuationContinuation:(id<ISDKMKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher")))
@interface ISDKMKotlinx_coroutines_coreCoroutineDispatcher : ISDKMKotlinAbstractCoroutineContextElement <ISDKMKotlinContinuationInterceptor>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithKey:(id<ISDKMKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (void)dispatchContext:(id<ISDKMKotlinCoroutineContext>)context block:(id<ISDKMKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatch(context:block:)")));
- (void)dispatchYieldContext:(id<ISDKMKotlinCoroutineContext>)context block:(id<ISDKMKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatchYield(context:block:)")));
- (id<ISDKMKotlinContinuation>)interceptContinuationContinuation:(id<ISDKMKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (BOOL)isDispatchNeededContext:(id<ISDKMKotlinCoroutineContext>)context __attribute__((swift_name("isDispatchNeeded(context:)")));
- (ISDKMKotlinx_coroutines_coreCoroutineDispatcher *)plusOther:(ISDKMKotlinx_coroutines_coreCoroutineDispatcher *)other __attribute__((swift_name("plus(other:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Sqldelight_runtimeSqlCursor")))
@protocol ISDKMSqldelight_runtimeSqlCursor <ISDKMSqldelight_runtimeCloseable>
@required
- (ISDKMKotlinByteArray * _Nullable)getBytesIndex:(int32_t)index __attribute__((swift_name("getBytes(index:)")));
- (ISDKMDouble * _Nullable)getDoubleIndex:(int32_t)index __attribute__((swift_name("getDouble(index:)")));
- (ISDKMLong * _Nullable)getLongIndex:(int32_t)index __attribute__((swift_name("getLong(index:)")));
- (NSString * _Nullable)getStringIndex:(int32_t)index __attribute__((swift_name("getString(index:)")));
- (BOOL)next __attribute__((swift_name("next()")));
@end;

__attribute__((swift_name("Sqldelight_runtimeQueryListener")))
@protocol ISDKMSqldelight_runtimeQueryListener
@required
- (void)queryResultsChanged __attribute__((swift_name("queryResultsChanged()")));
@end;

__attribute__((swift_name("Sqldelight_runtimeSqlPreparedStatement")))
@protocol ISDKMSqldelight_runtimeSqlPreparedStatement
@required
- (void)bindBytesIndex:(int32_t)index value:(ISDKMKotlinByteArray * _Nullable)value __attribute__((swift_name("bindBytes(index:value:)")));
- (void)bindDoubleIndex:(int32_t)index value:(ISDKMDouble * _Nullable)value __attribute__((swift_name("bindDouble(index:value:)")));
- (void)bindLongIndex:(int32_t)index value:(ISDKMLong * _Nullable)value __attribute__((swift_name("bindLong(index:value:)")));
- (void)bindStringIndex:(int32_t)index value:(NSString * _Nullable)value __attribute__((swift_name("bindString(index:value:)")));
@end;

__attribute__((swift_name("KotlinCoroutineContextKey")))
@protocol ISDKMKotlinCoroutineContextKey
@required
@end;

__attribute__((swift_name("KotlinIterator")))
@protocol ISDKMKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next_ __attribute__((swift_name("next_()")));
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

__attribute__((swift_name("KotlinContinuation")))
@protocol ISDKMKotlinContinuation
@required
- (void)resumeWithResult:(id _Nullable)result __attribute__((swift_name("resumeWith(result:)")));
@property (readonly) id<ISDKMKotlinCoroutineContext> context __attribute__((swift_name("context")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreRunnable")))
@protocol ISDKMKotlinx_coroutines_coreRunnable
@required
- (void)run __attribute__((swift_name("run()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface ISDKMKotlinByteArray : KotlinBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(ISDKMByte *(^)(ISDKMInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (ISDKMKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
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

__attribute__((swift_name("KotlinByteIterator")))
@interface ISDKMKotlinByteIterator : KotlinBase <ISDKMKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (ISDKMByte *)next_ __attribute__((swift_name("next_()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end;

NS_ASSUME_NONNULL_END
