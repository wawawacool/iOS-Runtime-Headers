/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADStyleMatrixReference : NSObject <NSCopying> {
    OADColor *mColor;
    unsigned long mMatrixIndex;
}

+ (id)styleMatrixReferenceWithMatrixIndex:(unsigned long)arg1 color:(id)arg2;

- (void)applyToEffectsInProperties:(id)arg1 styleMatrix:(id)arg2;
- (void)applyToFillInProperties:(id)arg1 styleMatrix:(id)arg2;
- (void)applyToStrokeInProperties:(id)arg1 styleMatrix:(id)arg2;
- (id)color;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)initWithMatrixIndex:(unsigned long)arg1 color:(id)arg2;
- (unsigned long)matrixIndex;
- (void)setColor:(id)arg1;
- (void)setMatrixIndex:(unsigned long)arg1;

@end
