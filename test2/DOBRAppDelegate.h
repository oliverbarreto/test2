//
//  DOBRAppDelegate.h
//  test2
//
//  Created by David Oliver Barreto Rodríguez on 15/12/13.
//  Copyright (c) 2013 David Oliver Barreto Rodríguez. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DOBRAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
