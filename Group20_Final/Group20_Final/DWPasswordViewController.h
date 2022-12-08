//
//  DWPasswordViewController.h
//  Group20_Final
//
//  Created by Yqi on 2022/11/01.
//  Copyright © 2022 yueqi. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol DWPasswordViewControllerDelegate <NSObject>

- (void)dismissViewController;
- (void)saveKeyIntoDataBase:(NSString *)key;
- (void)setSwitcherValue:(BOOL)value;

- (void)enterApp;

@end

@interface DWPasswordViewController : UIViewController

@property (weak, nonatomic) id<DWPasswordViewControllerDelegate> delegate;
@property (assign, nonatomic) BOOL isSettingMode;

@end
