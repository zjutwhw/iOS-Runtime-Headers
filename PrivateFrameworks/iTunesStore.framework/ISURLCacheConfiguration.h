/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class NSString;

@interface ISURLCacheConfiguration : NSObject <NSCopying> {
    unsigned int _diskCapacity;
    unsigned int _memoryCapacity;
    NSString *_persistentIdentifier;
}

@property unsigned int diskCapacity;
@property unsigned int memoryCapacity;
@property(copy) NSString * persistentIdentifier;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned int)diskCapacity;
- (unsigned int)memoryCapacity;
- (id)persistentIdentifier;
- (void)setDiskCapacity:(unsigned int)arg1;
- (void)setMemoryCapacity:(unsigned int)arg1;
- (void)setPersistentIdentifier:(id)arg1;

@end
