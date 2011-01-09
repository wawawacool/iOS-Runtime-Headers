/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */



@interface SUAccountViewController : SUStorePageViewController 
{
    BOOL _failed;
    NSInteger _style;
}

@property NSInteger style;


- (id)createFetchOperation;
- (id)createPlaceholderViewController;
- (id)createViewControllerForPage:(id)arg1 ofType:(NSInteger)arg2 returningError:(id*)arg3;
- (void)handleFailureWithError:(id)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (id)_authenticationQueryParametersForStyle:(NSInteger)arg1;
- (id)_bagKeyForStyle:(NSInteger)arg1;
- (NSInteger)style;
- (void)setStyle:(NSInteger)arg1;

@end