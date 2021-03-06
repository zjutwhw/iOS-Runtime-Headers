/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSMapTable;

@interface GKLocalImageSource : GKImageSource {
    NSMapTable *_keysForSizes;
}

@property(retain) NSMapTable * keysForSizes;

- (void)dealloc;
- (id)imageForImageSize:(struct CGSize { float x1; float x2; })arg1;
- (id)keyForImageSize:(struct CGSize { float x1; float x2; })arg1;
- (id)keysForSizes;
- (void)setKeysForSizes:(id)arg1;

@end
