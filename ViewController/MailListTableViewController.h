//
//  MailListTableViewController.h
//  MailTest
//
//  Created by LGBS dev on 7/25/14.
//  Copyright (c) 2014 LGBS. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Account.h"
#import <CoreData/CoreData.h>

@interface MailListTableViewController : UITableViewController<NSFetchedResultsControllerDelegate>
@property (weak, nonatomic) IBOutlet UIButton *getDataButton;
- (IBAction)getPush:(id)sender;
@property(nonatomic,retain)NSMutableArray* accountList;
@property (weak, nonatomic) IBOutlet UISearchBar *searchUser;
@property(nonatomic,retain)NSDictionary* temp;

@property (nonatomic, retain) NSFetchedResultsController *fetchedResultsController;
@property (nonatomic, retain) NSManagedObjectContext *managedObjectContext;
@end
