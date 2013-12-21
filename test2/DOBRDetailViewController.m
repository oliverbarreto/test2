//
//  DOBRDetailViewController.m
//  test2
//
//  Created by David Oliver Barreto Rodríguez on 15/12/13.
//  Copyright (c) 2013 David Oliver Barreto Rodríguez. All rights reserved.
//

#import "DOBRDetailViewController.h"

@interface DOBRDetailViewController ()
- (void)configureView;
@end

@implementation DOBRDetailViewController

#pragma mark - Managing the detail item

- (void)setDetailItem:(id)newDetailItem
{
    if (_detailItem != newDetailItem) {
        _detailItem = newDetailItem;
        
        // Update the view.
        [self configureView];
    }
}

- (void)configureView
{
    // Update the user interface for the detail item.

    if (self.detailItem) {
        self.detailDescriptionLabel.text = [[self.detailItem valueForKey:@"timeStamp"] description];
    }
}

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
    [self configureView];
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
