/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FactoryDiags.framework/FactoryDiags
 */

@interface OSDHIDEventRef : NSObject {
    struct __IOHIDEvent { } *_eventRef;
}

@property(readonly) struct __IOHIDEvent { }* hidEventRef;

+ (id)refWithIOHIDEventRef:(struct __IOHIDEvent { }*)arg1;

- (id)description;
- (struct __IOHIDEvent { }*)hidEventRef;
- (id)initWithIOHIDEventRef:(struct __IOHIDEvent { }*)arg1;

@end
