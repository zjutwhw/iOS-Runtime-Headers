/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVCaptureSessionInternal;

@interface AVCaptureSession : NSObject {
    AVCaptureSessionInternal *_internal;
}

@property(readonly) NSArray *inputs;
@property(readonly) NSArray *outputs;
@property(copy) NSString *sessionPreset;
@property(getter=isInterrupted,readonly) BOOL interrupted;
@property(getter=isRunning,readonly) BOOL running;

+ (id)avCaptureSessionPlist;
+ (void)initialize;

- (void)_addConnection:(id)arg1;
- (id)_addFastSwitchOptionsToCaptureOptions:(id)arg1 forDevice:(id)arg2 preset:(id)arg3;
- (void)_addInputWithNoConnections:(id)arg1;
- (void)_addOutputWithNoConnections:(id)arg1;
- (id)_applyOutputOverridesToCaptureOptions:(id)arg1;
- (void)_beginSessionUpdates;
- (void)_buildAndRunGraph;
- (BOOL)_canAddConnection:(id)arg1 failureReason:(id*)arg2;
- (BOOL)_canAddInput:(id)arg1 failureReason:(id*)arg2;
- (BOOL)_canAddOutput:(id)arg1 failureReason:(id*)arg2;
- (BOOL)_connectionIsActive:(id)arg1;
- (id)_connectionsForNewInputPort:(id)arg1;
- (id)_connectionsForNewOutput:(id)arg1;
- (id)_createCaptureOptionsForPreset:(id)arg1 audioDevice:(id)arg2 videoDevice:(id)arg3 errorStatus:(NSInteger*)arg4;
- (long)_createRecorderIfNeeded;
- (void)_doDidStart;
- (void)_doDidStop:(id)arg1;
- (void)_endSessionUpdates;
- (void)_excludeOutputsForCaptureOptions:(id)arg1;
- (BOOL)_figRecorderOldOptionsAreEqual:(id)arg1 toNewOptions:(id)arg2 livesourceOptionsAreEqual:(BOOL*)arg3;
- (id)_figRecorderOptionsForPreset:(id)arg1 audioDevice:(id)arg2 videoDevice:(id)arg3;
- (void)_handleNotification:(id)arg1 payload:(id)arg2;
- (void)_postRuntimeError:(id)arg1;
- (void)_rebuildGraph;
- (void)_rebuildInternalCaptureOptions;
- (void)_removeConnection:(id)arg1;
- (void)_removeConnectionsForInputPort:(id)arg1;
- (void)_removeVideoPreviewLayerConnectionsForInputPort:(id)arg1;
- (void)_setInterrupted:(BOOL)arg1;
- (void)_setRunning:(BOOL)arg1;
- (BOOL)_startPreviewing;
- (long)_startRecording;
- (void)_stopAndTearDownGraph;
- (id)_stopError;
- (BOOL)_stopPreviewing;
- (long)_stopRecording;
- (void)_teardownFigRecorder;
- (void)addConnection:(id)arg1;
- (void)addInput:(id)arg1;
- (void)addInputWithNoConnections:(id)arg1;
- (void)addOutput:(id)arg1;
- (void)addOutputWithNoConnections:(id)arg1;
- (void)beginConfiguration;
- (BOOL)canAddConnection:(id)arg1;
- (BOOL)canAddInput:(id)arg1;
- (BOOL)canAddOutput:(id)arg1;
- (BOOL)canSetSessionPreset:(id)arg1;
- (id)captureOptions;
- (void)commitConfiguration;
- (void)dealloc;
- (id)init;
- (id)inputWithClass:(Class)arg1;
- (id)inputs;
- (BOOL)isBeingConfigured;
- (BOOL)isInterrupted;
- (BOOL)isPreviewing;
- (BOOL)isRunning;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)outputWithClass:(Class)arg1;
- (id)outputs;
- (struct OpaqueFigRecorder { }*)recorder;
- (void)release;
- (void)removeConnection:(id)arg1;
- (void)removeInput:(id)arg1;
- (void)removeOutput:(id)arg1;
- (id)retain;
- (id)sessionPreset;
- (void)setSessionPreset:(id)arg1;
- (void)setVideoPreviewLayer:(id)arg1;
- (void)startRunning;
- (void)stopRunning;
- (id)videoPreviewLayer;
- (void)videoPreviewLayerPropertiesChanged;

@end