/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNAccountsAndGroupsViewController : UITableViewController <UITableViewDelegate> {
    CNAccountsAndGroupsDataSource * _dataSource;
    <CNAccountsAndGroupsViewControllerDelegate> * _delegate;
    BOOL  _needsReload;
    BOOL  _tableViewNeedsReloadAfterResume;
}

@property (nonatomic, retain) CNAccountsAndGroupsDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CNAccountsAndGroupsViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)applicationDidResume;
- (void)contactStoreDidChangeWithNotification:(id)arg1;
- (id)dataSource;
- (void)dealloc;
- (id)delegate;
- (void)done:(id)arg1;
- (id)initWithStyle:(int)arg1;
- (void)loadView;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)reloadData;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(int)arg3;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;

@end
