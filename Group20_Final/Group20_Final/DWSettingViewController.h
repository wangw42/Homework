//
//  DWSettingViewController.h
//  Group20_Final
//
//  Created by Yqi on 2022/11/01.
//  Copyright © 2022 yueqi. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void (^CompletionBlock) (void);

@protocol DWSettingViewControllerDelegate <NSObject>

- (void)dismissViewController;

@end

@interface DWSettingViewController : UIViewController

@property (weak, nonatomic) id<DWSettingViewControllerDelegate> delegate;

@end
