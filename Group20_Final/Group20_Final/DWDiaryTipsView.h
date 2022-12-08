//
//  DWDiaryTipsView.h
//  Group20_Final
//
//  Created by Yqi on 2022/11/01.
//  Copyright © 2022 yueqi. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DWDiaryTipsView : UIView

@property (copy, nonatomic) NSString *message;

- (void)showAnimated;
- (void)disappear;

@end
