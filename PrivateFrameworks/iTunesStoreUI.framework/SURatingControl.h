/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSString, UIImageView, UILabel;

@interface SURatingControl : UIControl {
    struct CGSize { 
        float width; 
        float height; 
    struct CGPoint { 
        float x; 
        float y; 
    struct CGPoint { 
        float x; 
        float y; 
    UIImageView *_backgroundImageView;
    UILabel *_explanationLabel;
    UIImageView *_foregroundImageView;
    } _hitPadding;
    float _starWidth;
    } _trackingLastPoint;
    } _trackingStartPoint;
    float _value;
}

@property(retain) NSString * explanationText;
@property float starWidth;
@property float value;

- (BOOL)_alwaysHandleScrollerMouseEvent;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_foregroundImageClipBounds;
- (id)_newExplanationLabel;
- (void)_updateValueForPoint:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)canHandleSwipes;
- (BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)dealloc;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)explanationText;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })hitRect;
- (id)initWithBackgroundImage:(id)arg1 foregroundImage:(id)arg2;
- (void)layoutSubviews;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)setExplanationText:(id)arg1;
- (void)setHitPadding:(struct CGSize { float x1; float x2; })arg1;
- (void)setStarWidth:(float)arg1;
- (void)setValue:(float)arg1;
- (void)sizeToFit;
- (float)starWidth;
- (float)value;

@end
