/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */



@interface CMGyroData : CMLogItem 
{
    id _internal;
}

@property(readonly) ? rotationRate;


- (id)initWithClientRotationRate:(struct { double x1; double x2; double x3; double x4; })arg1;
- (struct { double x1; double x2; double x3; })rotationRate;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;

@end