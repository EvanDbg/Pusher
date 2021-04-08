/*
* This header is generated by classdump-dyld 1.0
* on Friday, February 8, 2019 at 1:25:06 PM Eastern European Standard Time
* Operating System: Version 12.1 (Build 16B92)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BulletinBoard/BulletinBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSURL;

@interface BBAttachmentMetadata : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

	NSUUID* _UUID;
	long long _type;
	NSURL* _URL;

}

@property (nonatomic,copy,readonly) NSUUID * UUID;              //@synthesize UUID=_UUID - In the implementation block
@property (nonatomic,readonly) long long type;                  //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSURL * URL;                //@synthesize URL=_URL - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)hasContentModificationsRelativeTo:(id)arg1 ;
-(id)_initWithUUID:(id)arg1 type:(long long)arg2 URL:(id)arg3 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(NSUUID *)UUID;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)type;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSURL *)URL;

// iOS 14
-(id)_initWithType:(long long)arg1 URL:(id)arg2 identifier:(id)arg3 uniformType:(id)arg4 thumbnailGeneratorUserInfo:(id)arg5 thumbnailHidden:(BOOL)arg6 hiddenFromDefaultExpandedView:(BOOL)arg7;

@end
