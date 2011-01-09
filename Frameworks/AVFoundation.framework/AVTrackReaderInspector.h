/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVAsset;



@interface AVTrackReaderInspector : AVAssetTrackInspector 
{
    struct OpaqueFigTrackReader { } *_trackReader;
    NSInteger _trackID;
    NSUInteger _mediaType;
    AVAsset *_asset;
}


- (struct CGSize { float x1; float x2; })naturalSize;
- (void)finalize;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)init;
- (BOOL)isEnabled;
- (void)dealloc;
- (id)segments;
- (struct OpaqueFigTrackReader { }*)_trackReader;
- (long long)_longLongForProperty:(struct __CFString { }*)arg1;
- (struct { long long x1; NSInteger x2; NSUInteger x3; long long x4; })_CMTimeForProperty:(struct __CFString { }*)arg1;
- (float)_floatForProperty:(struct __CFString { }*)arg1;
- (long)_SInt32ForProperty:(struct __CFString { }*)arg1;
- (unsigned char)_booleanForProperty:(struct __CFString { }*)arg1;
- (id)_stringForProperty:(struct __CFString { }*)arg1;
- (id)_initWithAsset:(id)arg1 trackID:(NSInteger)arg2 trackIndex:(long)arg3;
- (id)_initWithAsset:(id)arg1 trackID:(NSInteger)arg2;
- (id)formatDescriptions;
- (BOOL)isSelfContained;
- (long long)totalSampleDataLength;
- (struct { struct { long long x_1_1_1; NSInteger x_1_1_2; NSUInteger x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; NSInteger x_2_1_2; NSUInteger x_2_1_3; long long x_2_1_4; } x2; })timeRange;
- (float)estimatedDataRate;
- (id)languageCode;
- (id)extendedLanguageTag;
- (float)nominalFrameRate;
- (id)segmentForTrackTime:(struct { long long x1; NSInteger x2; NSUInteger x3; long long x4; })arg1;
- (struct { long long x1; NSInteger x2; NSUInteger x3; long long x4; })samplePresentationTimeForTrackTime:(struct { long long x1; NSInteger x2; NSUInteger x3; long long x4; })arg1;
- (id)asset;
- (NSInteger)trackID;
- (id)_initWithAsset:(id)arg1 trackIndex:(long)arg2;
- (float)preferredVolume;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })preferredTransform;
- (NSInteger)naturalTimeScale;
- (id)commonMetadata;
- (id)availableMetadataFormats;
- (id)metadataForFormat:(id)arg1;
- (id)mediaType;

@end