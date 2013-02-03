/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class NSMutableArray, LBSGPlatformProfile, LBSGUserProfile;

@interface LBSGLocRequest : PBRequest {
    NSMutableArray *_appProfiless;
    LBSGPlatformProfile *_platformProfile;
    NSMutableArray *_requestElementss;
    LBSGUserProfile *_userProfile;
}

@property(retain) NSMutableArray *appProfiless;
@property(retain) LBSGPlatformProfile *platformProfile;
@property(retain) NSMutableArray *requestElementss;
@property(retain) LBSGUserProfile *userProfile;
@property(readonly) NSInteger appProfilessCount;
@property(readonly) BOOL hasUserProfile;
@property(readonly) NSInteger requestElementssCount;

- (void)addAppProfiles:(id)arg1;
- (void)addRequestElements:(id)arg1;
- (id)appProfilesAtIndex:(NSUInteger)arg1;
- (id)appProfiless;
- (NSInteger)appProfilessCount;
- (void)dealloc;
- (id)description;
- (BOOL)hasUserProfile;
- (id)init;
- (id)platformProfile;
- (BOOL)readFrom:(id)arg1;
- (id)requestElementsAtIndex:(NSUInteger)arg1;
- (id)requestElementss;
- (NSInteger)requestElementssCount;
- (NSUInteger)requestTypeCode;
- (Class)responseClass;
- (void)setAppProfiles:(id)arg1 atIndex:(NSUInteger)arg2;
- (void)setAppProfiless:(id)arg1;
- (void)setPlatformProfile:(id)arg1;
- (void)setRequestElements:(id)arg1 atIndex:(NSUInteger)arg2;
- (void)setRequestElementss:(id)arg1;
- (void)setUserProfile:(id)arg1;
- (id)userProfile;
- (void)writeTo:(id)arg1;

@end