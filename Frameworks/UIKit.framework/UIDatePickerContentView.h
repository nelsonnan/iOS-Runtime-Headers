/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UILabel;

@interface UIDatePickerContentView : UIView {
    struct { 
        unsigned int isAmPm : 1; 
    } _datePickerContentViewFlags;
    BOOL _isModern;
    int _titleAlignment;
    UILabel *_titleLabel;
    float _titleLabelMaxX;
}

@property BOOL isAmPm;
@property BOOL isModern;
@property int titleAlignment;
@property(readonly) UILabel * titleLabel;
@property float titleLabelMaxX;

- (BOOL)_canBeReusedInPickerView;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isAmPm;
- (BOOL)isModern;
- (void)layoutSubviews;
- (void)setIsAmPm:(BOOL)arg1;
- (void)setIsModern:(BOOL)arg1;
- (void)setTitleAlignment:(int)arg1;
- (void)setTitleLabelMaxX:(float)arg1;
- (int)titleAlignment;
- (id)titleLabel;
- (float)titleLabelMaxX;

@end
