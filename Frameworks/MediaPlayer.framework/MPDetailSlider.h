/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class UIImageView, UILabel, NSTimer;

@interface MPDetailSlider : UISlider {
    struct CGPoint { 
        float x; 
        float y; 
    struct CGPoint { 
        float x; 
        float y; 
    struct CGPoint { 
        float x; 
        float y; 
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    unsigned int _allowsDetailScrubbing : 1;
    unsigned int _isTracking : 1;
    unsigned int _didBeginTracking : 1;
    unsigned int _needsCommit : 1;
    unsigned int _canCommit : 1;
    unsigned int _autoscrubActive : 1;
    NSTimer *_autoscrubTimer;
    double _availableDuration;
    } _beginLocationInView;
    double _currentTime;
    UILabel *_currentTimeInverseLabel;
    UILabel *_currentTimeLabel;
    id _delegate;
    float _detailScrubbingVerticalRange;
    UIImageView *_downloadingTrackOverlay;
    double _duration;
    UIImageView *_glowDetailScrubImageView;
    } _lastCommittedLocationInView;
    float _maxTrackWidth;
    float _minScale;
    } _previousLocationInView;
    NSInteger _scrubValue;
    UIImageView *_thumbImageView;
    } _timeLabelInsets;
    float _trackInset;
}

@property float detailScrubbingVerticalRange; /* unknown property attribute: V_detailScrubbingVerticalRange */
@property UIEdgeInsets timeLabelInsets; /* unknown property attribute: V_timeLabelInsets */
@property double availableDuration; /* unknown property attribute: V_availableDuration */
@property double duration; /* unknown property attribute: V_duration */
@property <MPDetailSliderDelegate> *delegate; /* unknown property attribute: V_delegate */
@property(readonly) NSString *localizedScrubSpeedText;
@property BOOL allowsDetailScrubbing;

+ (float)defaultHeight;

- (void)_adjustMinScale;
- (void)_autoscrubTick:(id)arg1;
- (void)_commitValue;
- (void)_resetScrubInfo;
- (float)_scaleForIdealValueForVerticalPosition:(float)arg1;
- (float)_scaleForVerticalPosition:(float)arg1;
- (id)_stringForCurrentTime:(double)arg1;
- (id)_stringForInverseCurrentTime:(double)arg1;
- (void)_updateTimeDisplayForTime:(double)arg1 force:(BOOL)arg2;
- (void)_updateTimeDisplayForTime:(double)arg1;
- (void)_updateTrackInset;
- (BOOL)allowsDetailScrubbing;
- (double)availableDuration;
- (BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)cancelTracking;
- (void)cancelTrackingWithEvent:(id)arg1;
- (BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)createThumbView;
- (id)currentThumbImage;
- (void)dealloc;
- (id)delegate;
- (float)detailScrubbingVerticalRange;
- (double)duration;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 maxTrackWidth:(float)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)localizedScrubSpeedText;
- (void)setAllowsDetailScrubbing:(BOOL)arg1;
- (void)setAvailableDuration:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDetailScrubbingVerticalRange:(float)arg1;
- (void)setDuration:(double)arg1;
- (void)setTimeLabelInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setValue:(float)arg1 animated:(BOOL)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })thumbRectForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 trackRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 value:(float)arg3;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })timeLabelInsets;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })trackRectForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end