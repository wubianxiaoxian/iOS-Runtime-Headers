/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
 */

@class PUActivityItemSourceController;

@interface PUSaveToCameraRollActivity : UISaveToCameraRollActivity <PUActivity> {
    PUActivityItemSourceController *_itemSourceController;
}

@property PUActivityItemSourceController * itemSourceController;

- (void).cxx_destruct;
- (id)activityTitle;
- (BOOL)canPerformWithActivityItems:(id)arg1;
- (id)itemSourceController;
- (void)performActivity;
- (void)prepareWithActivityItems:(id)arg1;
- (void)setItemSourceController:(id)arg1;

@end