//
//  DatabaseViewController.h
//  Database
//
//  Created by panda zheng on 14-5-23.
//  Copyright (c) 2014年 panda zheng. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <sqlite3.h>

@interface DatabaseViewController : UIViewController

@property (nonatomic,strong) NSString *databasePath;
@property (nonatomic) sqlite3 *contactDB;
@property (nonatomic,weak) IBOutlet UITextField *name;
@property (nonatomic,weak) IBOutlet UITextField *address;
@property (nonatomic,weak) IBOutlet UITextField *phone;
@property (nonatomic,weak) IBOutlet UILabel *status;

- (IBAction) saveData: (id) sender;
- (IBAction) findContact: (id) sender;

@end
