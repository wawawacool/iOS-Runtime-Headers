/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIMessageActivity : UIActivity {
    MFMessageComposeViewController *_messageComposeViewController;
    BOOL _sourceIsManaged;
}

@property (nonatomic, retain) MFMessageComposeViewController *messageComposeViewController;
@property (nonatomic) BOOL sourceIsManaged;

+ (int)activityCategory;

- (id)_activityImage;
- (id)_activitySettingsImage;
- (void)_cleanup;
- (id)activityTitle;
- (id)activityType;
- (id)activityViewController;
- (BOOL)canPerformWithActivityItems:(id)arg1;
- (void)dealloc;
- (id)messageComposeViewController;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(int)arg2;
- (void)prepareWithActivityItems:(id)arg1;
- (void)setMessageComposeViewController:(id)arg1;
- (void)setSourceIsManaged:(BOOL)arg1;
- (BOOL)sourceIsManaged;

@end
