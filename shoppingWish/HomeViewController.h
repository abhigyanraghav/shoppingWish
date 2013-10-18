//
//  HomeViewController.h
//  shoppingWish
//
//  Created by Abhigyan on 10/7/13.
//  Copyright (c) 2013 ShoppingWish. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HomeViewController : UIViewController
@property (weak, nonatomic) IBOutlet UIButton *scanButton;
- (IBAction)scanButtonAction:(id)sender;
@property (weak, nonatomic) IBOutlet UITextField *searchBox;
@property (weak, nonatomic) IBOutlet UIButton *searchButton;
- (IBAction)searchButtonAction:(id)sender;


@end
