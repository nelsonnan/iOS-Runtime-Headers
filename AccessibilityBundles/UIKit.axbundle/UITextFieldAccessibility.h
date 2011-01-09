/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
 */



@interface UITextFieldAccessibility : UITextFieldAccessibility_super 
{
}

+ (void)_initializeSafeCategory;

- (void)_accessibilitySetSelectedTextRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1;
- (struct _NSRange { NSUInteger x1; NSUInteger x2; })_accessibilitySelectedTextRange;
- (struct CGPoint { float x1; float x2; })accessibilityCenterPoint;
- (id)_accessibilityHitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)accessibilityValue;
- (unsigned long long)accessibilityTraits;
- (BOOL)isAccessibilityElement;
- (NSInteger)accessibilityElementCount;
- (id)accessibilityElementAtIndex:(NSInteger)arg1;
- (NSInteger)indexOfAccessibilityElement:(id)arg1;
- (void)setSelectedTextRange:(id)arg1;
- (void)_updateButtons;
- (BOOL)keyboardInput:(id)arg1 shouldInsertText:(id)arg2 isMarkedText:(BOOL)arg3;
- (void)keyboardInputChangedSelection:(id)arg1;
- (BOOL)fieldEditor:(id)arg1 shouldInsertText:(id)arg2 replacingRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg3;
- (void)_clearButtonClicked:(id)arg1;
- (void)cut:(id)arg1;
- (void)copy:(id)arg1;
- (void)paste:(id)arg1;
- (void)selectAll:(id)arg1;
- (id)accessibilityLabel;
- (void)dealloc;
- (id)_accessibilityInternalButton;
- (void)_accessibilityUpdateButtons;
- (NSInteger)_accessibilityCountAccessibleChildren:(id)arg1;
- (id)_accessibilityInternalData;

@end