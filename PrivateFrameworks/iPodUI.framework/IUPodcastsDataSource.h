/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

@interface IUPodcastsDataSource : IUMediaQueriesDataSource {
}

+ (int)mediaEntityType;
+ (id)queryCollectionPropertiesToFetch;
+ (id)tabBarItemIconName;
+ (id)tabBarItemTitleKey;

- (BOOL)allowsDeletion;
- (BOOL)canDeleteIndex:(unsigned int)arg1;
- (void)createGlobalContexts;
- (id)createNoContentDataSource;
- (SEL)libraryHasDisplayableEntitiesSelector;
- (void)setQueries:(id)arg1;
- (BOOL)shouldDisplayWhenEmpty;
- (id)viewControllerContextForIndex:(unsigned int)arg1;
- (id)viewControllerContextForMediaQuery:(id)arg1;

@end