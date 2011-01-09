/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */



@interface NSAttributedString : NSObject <NSCopying, NSMutableCopying, NSCoding>
{
}

+ (void)_setAttributedDictionaryClass:(Class)arg1;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)attributedStringWithFormatAndAttributes:(id)arg1;

- (id)attributesAtIndex:(NSUInteger)arg1 effectiveRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; }*)arg2;
- (id)attribute:(id)arg1 atIndex:(NSUInteger)arg2 effectiveRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; }*)arg3;
- (id)attributedSubstringFromRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1;
- (id)attributesAtIndex:(NSUInteger)arg1 longestEffectiveRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; }*)arg2 inRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg3;
- (id)attribute:(id)arg1 atIndex:(NSUInteger)arg2 longestEffectiveRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; }*)arg3 inRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg4;
- (BOOL)isEqualToAttributedString:(id)arg1;
- (unsigned long)_cfTypeID;
- (id)_createAttributedSubstringWithRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1;
- (id)attributedSubstringFromRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1 replacingCharactersInRanges:(const struct _NSRange { NSUInteger x1; NSUInteger x2; }*)arg2 numberOfRanges:(NSInteger)arg3 withString:(id)arg4;
- (id)attributedStringByWeaklyAddingAttributes:(id)arg1;
- (void)enumerateAttributesInRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1 options:(NSUInteger)arg2 usingBlock:(id)arg3;
- (void)enumerateAttribute:(id)arg1 inRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg2 options:(NSUInteger)arg3 usingBlock:(id)arg4;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (Class)classForCoder;
- (id)string;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)description;
- (NSUInteger)length;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)attribute:(id)arg1 existsInRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg2;
- (id)trimmedString;
- (BOOL)getRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; }*)arg1 ofAttribute:(id)arg2;
- (id)deepCopyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)getRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; }*)arg1 ofAttribute:(id)arg2 withValue:(id)arg3;
- (BOOL)getRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; }*)arg1 ofAttribute:(id)arg2;
- (id)deepCopyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)getRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; }*)arg1 ofAttribute:(id)arg2 withValue:(id)arg3;

@end