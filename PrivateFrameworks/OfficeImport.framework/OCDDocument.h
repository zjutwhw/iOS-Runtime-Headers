/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class <OCDWriter>, OADBlipCollection, OCDReader, OCDSummary;

@interface OCDDocument : NSObject {
    OADBlipCollection *mBlips;
    OCDReader *mReader;
    OCDSummary *mSummary;
    <OCDWriter> *mWriter;
}

@property(readonly) OADBlipCollection * blips;
@property(retain) OCDReader * reader;
@property(readonly) OCDSummary * summary;
@property(retain) <OCDWriter> * writer;

- (id)blips;
- (void)dealloc;
- (id)init;
- (bool)isFromBinaryFile;
- (bool)isToBinaryFile;
- (id)reader;
- (void)setReader:(id)arg1;
- (void)setWriter:(id)arg1;
- (id)summary;
- (id)writer;

@end
