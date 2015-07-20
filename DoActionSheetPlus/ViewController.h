//
//  ViewController.h
//  DoActionSheetPlus
//
//  Created by MH-Pengrun on 15/7/20.
//  Copyright (c) 2015年 MH. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (weak, nonatomic) IBOutlet UISegmentedControl     *sgSelect;
@property (weak, nonatomic) IBOutlet UISegmentedControl     *sgType;
@property (weak, nonatomic) IBOutlet UISegmentedControl     *sgSelectImage;
@property (weak, nonatomic) IBOutlet UISegmentedControl     *sgStyle;


@property (weak, nonatomic) IBOutlet UILabel                *lbMode;
@property (weak, nonatomic) IBOutlet UILabel                *lbType;
@property (weak, nonatomic) IBOutlet UILabel                *lbStyle;


- (IBAction)onShowAlert:(id)sender;

- (IBAction)onSelect:(id)sender;
- (IBAction)onSelectAnimationType:(id)sender;
- (IBAction)onSelectStyle:(id)sender;


@end
