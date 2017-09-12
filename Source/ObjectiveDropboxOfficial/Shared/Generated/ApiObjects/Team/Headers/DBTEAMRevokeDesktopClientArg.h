///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"
#import "DBTEAMDeviceSessionArg.h"

@class DBTEAMRevokeDesktopClientArg;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `RevokeDesktopClientArg` struct.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMRevokeDesktopClientArg : DBTEAMDeviceSessionArg <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// Whether to delete all files of the account (this is possible only if
/// supported by the desktop client and  will be made the next time the client
/// access the account).
@property (nonatomic, readonly) NSNumber *deleteOnUnlink;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param sessionId The session id.
/// @param teamMemberId The unique id of the member owning the device.
/// @param deleteOnUnlink Whether to delete all files of the account (this is
/// possible only if supported by the desktop client and  will be made the next
/// time the client access the account).
///
/// @return An initialized instance.
///
- (instancetype)initWithSessionId:(NSString *)sessionId
                     teamMemberId:(NSString *)teamMemberId
                   deleteOnUnlink:(nullable NSNumber *)deleteOnUnlink;

///
/// Convenience constructor (exposes only non-nullable instance variables with
/// no default value).
///
/// @param sessionId The session id.
/// @param teamMemberId The unique id of the member owning the device.
///
/// @return An initialized instance.
///
- (instancetype)initWithSessionId:(NSString *)sessionId teamMemberId:(NSString *)teamMemberId;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `RevokeDesktopClientArg` struct.
///
@interface DBTEAMRevokeDesktopClientArgSerializer : NSObject

///
/// Serializes `DBTEAMRevokeDesktopClientArg` instances.
///
/// @param instance An instance of the `DBTEAMRevokeDesktopClientArg` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMRevokeDesktopClientArg` API object.
///
+ (nullable NSDictionary *)serialize:(DBTEAMRevokeDesktopClientArg *)instance;

///
/// Deserializes `DBTEAMRevokeDesktopClientArg` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMRevokeDesktopClientArg` API object.
///
/// @return An instantiation of the `DBTEAMRevokeDesktopClientArg` object.
///
+ (DBTEAMRevokeDesktopClientArg *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END
