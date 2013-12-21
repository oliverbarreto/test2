//
//  DOBRDetailViewController.h
//  test2
//
//  Created by David Oliver Barreto Rodríguez on 15/12/13.
//  Copyright (c) 2013 David Oliver Barreto Rodríguez. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DOBRDetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
