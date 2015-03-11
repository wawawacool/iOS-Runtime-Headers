/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

@class <SiriUIReviewsViewControllerDelegate>, NSMutableArray, NSString, SALocalSearchReviewList, UICollectionView, UIView;

@interface SiriUIReviewsViewController : SiriUISnippetViewController <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {
    struct { 
        unsigned int didLoadCollectionView : 1; 
        unsigned int viewForRatingForReview : 1; 
        unsigned int offsetForRatingView : 1; 
    struct UIOffset { 
        double horizontal; 
        double vertical; 
    struct UIOffset { 
        double horizontal; 
        double vertical; 
    NSMutableArray *_cellSizeForRowCache;
    } _delegateFlags;
    NSString *_providerName;
    UIView *_providerView;
    } _providerViewOffset;
    long long _reviewCharacterLimit;
    SALocalSearchReviewList *_reviewList;
    <SiriUIReviewsViewControllerDelegate> *_reviewsDelegate;
    UIView *_totalRatingView;
    } _totalRatingViewOffset;
    double _verticalSpaceNeededForRatingView;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(copy) NSString * providerName;
@property(retain) UIView * providerView;
@property struct UIOffset { double x1; double x2; } providerViewOffset;
@property long long reviewCharacterLimit;
@property(retain) SALocalSearchReviewList * reviewList;
@property <SiriUIReviewsViewControllerDelegate> * reviewsDelegate;
@property(readonly) Class superclass;
@property(retain) UIView * totalRatingView;
@property struct UIOffset { double x1; double x2; } totalRatingViewOffset;
@property double verticalSpaceNeededForRatingView;
@property(retain) UICollectionView * view;

- (void).cxx_destruct;
- (id)_displayStringForReviewCount:(long long)arg1 providerName:(id)arg2 providerView:(id)arg3;
- (double)_effectiveContentWidthForItemCellsForWidth:(double)arg1;
- (double)_horizontalCellSpacing;
- (double)_minCellWidth;
- (long long)_numberOfCells;
- (long long)_numberOfColumnsForWidth:(double)arg1;
- (long long)_numberOfRowsForWidth:(double)arg1;
- (id)_punchoutForIndexPath:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_reviewCollectionInsets;
- (long long)_rowForItemAtIndex:(long long)arg1 forWidth:(double)arg2;
- (struct CGSize { double x1; double x2; })_sizeForCellAtIndex:(long long)arg1 forWidth:(double)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)configureReusableHeaderView:(id)arg1;
- (double)desiredHeightForWidth:(double)arg1;
- (void)didEndDisplayingReusableHeaderView:(id)arg1;
- (Class)headerViewClass;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (id)providerName;
- (id)providerView;
- (struct UIOffset { double x1; double x2; })providerViewOffset;
- (long long)reviewCharacterLimit;
- (id)reviewList;
- (id)reviewsDelegate;
- (void)setProviderName:(id)arg1;
- (void)setProviderView:(id)arg1;
- (void)setProviderViewOffset:(struct UIOffset { double x1; double x2; })arg1;
- (void)setReviewCharacterLimit:(long long)arg1;
- (void)setReviewList:(id)arg1;
- (void)setReviewsDelegate:(id)arg1;
- (void)setTotalRatingView:(id)arg1;
- (void)setTotalRatingViewOffset:(struct UIOffset { double x1; double x2; })arg1;
- (void)setVerticalSpaceNeededForRatingView:(double)arg1;
- (void)siriDidLayoutSnippetView;
- (id)totalRatingView;
- (struct UIOffset { double x1; double x2; })totalRatingViewOffset;
- (double)verticalSpaceNeededForRatingView;

@end