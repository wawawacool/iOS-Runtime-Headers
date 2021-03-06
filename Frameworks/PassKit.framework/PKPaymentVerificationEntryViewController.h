/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@interface PKPaymentVerificationEntryViewController : PKPaymentSetupTableViewController <UITextFieldDelegate> {
    NSString *_descriptionText;
    PKPaymentPass *_pass;
    UIImage *_passSnapshot;
    PKPaymentWebService *_paymentWebService;
    <PKPaymentVerificationEntryDelegate> *_setupDelegate;
    BOOL _verificationCodeAccepted;
    PKActivityTableCell *_verificationCodeCell;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSString *descriptionText;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) UIImage *passSnapshot;
@property (nonatomic) <PKPaymentVerificationEntryDelegate> *setupDelegate;
@property (readonly) Class superclass;

- (void)_disableUI;
- (void)_enableUI;
- (void)_handleDownloadedPasses:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)_secureElementID;
- (void)_showActivationError:(id)arg1;
- (void)_showCompletedUIForPass:(id)arg1;
- (void)_showValidatedUI;
- (void)_submitVerificationCode;
- (void)cancel:(id)arg1;
- (void)dealloc;
- (id)descriptionText;
- (id)initWithPaymentWebService:(id)arg1 pass:(id)arg2 context:(int)arg3;
- (void)next:(id)arg1;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)passSnapshot;
- (void)setDescriptionText:(id)arg1;
- (void)setPassSnapshot:(id)arg1;
- (void)setSetupDelegate:(id)arg1;
- (id)setupDelegate;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidChange:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)viewDidLoad;

@end
