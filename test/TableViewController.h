//
//  TableViewController.h
//  test
//
//  Created by healthplus on 14-5-23.
//  Copyright (c) 2014年 healthplus. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TableViewController : UIViewController<UITableViewDelegate, UITableViewDataSource>
//ttttyyyyy
@property (weak, nonatomic) IBOutlet UITableView *table;
- (IBAction)back:(id)sender;

@end
