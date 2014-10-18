//
//  DetailViewController.h
//  SetWeekInvestigation
//
//  Created by Samuel Westrich on 10/19/14.
//  Copyright (c) 2014 Samuel Westrich. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

