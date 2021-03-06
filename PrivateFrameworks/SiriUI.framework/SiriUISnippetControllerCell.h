/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

@class SiriUIContentButton, SiriUIKeyline, SiriUISnippetViewController, UICollectionReusableView<SiriUIReusableView>, UILabel, UIView;

@interface SiriUISnippetControllerCell : UICollectionViewCell <SiriUIReusableView> {
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    SiriUIKeyline *_bottomKeyline;
    UILabel *_cancelledLabel;
    UICollectionReusableView<SiriUIReusableView> *_footerView;
    UICollectionReusableView<SiriUIReusableView> *_headerView;
    UIView *_snippetBackgroundView;
    } _snippetEdgeInsets;
    SiriUIContentButton *_snippetPunchOutButton;
    SiriUISnippetViewController *_snippetViewController;
    UICollectionReusableView<SiriUIReusableView> *_transparentFooterView;
    UICollectionReusableView<SiriUIReusableView> *_transparentHeaderView;
}

@property(getter=_snippetEdgeInsets,setter=_setSnippetEdgeInsets:) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } snippetEdgeInsets;
@property SiriUISnippetViewController * snippetViewController;

+ (float)defaultHeight;
+ (id)elementKind;
+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (void)_configureSubviewsForCurrentInset;
- (float)_heightForFooterView;
- (float)_heightForHeaderView;
- (float)_heightForTransparentFooterView;
- (float)_heightForTransparentHeaderView;
- (void)_setFooterView:(id)arg1;
- (void)_setHeaderView:(id)arg1;
- (void)_setSnippetEdgeInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)_setTransparentFooterView:(id)arg1;
- (void)_setTransparentHeaderView:(id)arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })_snippetEdgeInsets;
- (void)_snippetPunchOutButtonTapped:(id)arg1;
- (void)animateSnippetCancellationWithCompletion:(id)arg1;
- (void)animateSnippetConfirmationWithCompletion:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setSnippetViewController:(id)arg1;
- (id)snippetViewController;

@end
