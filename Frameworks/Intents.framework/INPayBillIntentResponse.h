/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INPayBillIntentResponse : INIntentResponse <INPayBillIntentResponseExport> {
    _INPBPayBillIntentResponse * _responseMessagePBRepresentation;
}

@property (nonatomic, copy) INBillDetails *billDetails;
@property (nonatomic, readonly) int code;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) INPaymentAccount *fromAccount;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) INPaymentAmount *transactionAmount;
@property (nonatomic, copy) NSString *transactionNote;
@property (nonatomic, copy) INDateComponentsRange *transactionScheduledDate;

+ (BOOL)_appLaunchRequestedFromCode:(int)arg1;
+ (int)_codeFromType:(int)arg1 errorCode:(int)arg2 appLaunchRequested:(BOOL)arg3;
+ (int)_errorCodeFromCode:(int)arg1;
+ (int)_intentHandlingStatusFromCode:(int)arg1;
+ (int)_typeFromCode:(int)arg1;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)_responseMessagePBRepresentation;
- (id)billDetails;
- (int)code;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)fromAccount;
- (id)init;
- (id)initWithBackingStore:(id)arg1;
- (id)initWithCode:(int)arg1 userActivity:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)setBillDetails:(id)arg1;
- (void)setFromAccount:(id)arg1;
- (void)setTransactionAmount:(id)arg1;
- (void)setTransactionNote:(id)arg1;
- (void)setTransactionScheduledDate:(id)arg1;
- (id)transactionAmount;
- (id)transactionNote;
- (id)transactionScheduledDate;

@end
