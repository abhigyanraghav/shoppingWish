//
//  ScanViewController.h
//  shoppingWish
//
//  Created by Abhigyan on 10/1/13.
//  Copyright (c) 2013 ShoppingWish. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ScanViewController : UIViewController
@property (weak, nonatomic) IBOutlet UIButton *ScanButton;
- (IBAction)scanButtonAction:(id)sender;
@property (weak, nonatomic) IBOutlet UIView *scanView;

@end
