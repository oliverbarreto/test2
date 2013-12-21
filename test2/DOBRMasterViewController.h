//
//  DOBRMasterViewController.h
//  test2
//
//  Created by David Oliver Barreto Rodríguez on 15/12/13.
//  Copyright (c) 2013 David Oliver Barreto Rodríguez. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

@interface DOBRMasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
