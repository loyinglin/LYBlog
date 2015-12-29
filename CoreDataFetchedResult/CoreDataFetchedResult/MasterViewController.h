//
//  MasterViewController.h
//  CoreDataFetchedResult
//
//  Created by 林伟池 on 15/12/29.
//  Copyright © 2015年 林伟池. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) DetailViewController *detailViewController;

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;


@end

