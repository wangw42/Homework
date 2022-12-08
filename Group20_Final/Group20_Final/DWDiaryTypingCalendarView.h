//
//  DWDiaryTypingCalendarView.h
//  Group20_Final
//
//  Created by Yqi on 2022/11/01.
//  Copyright © 2022 yueqi. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol DWDiaryTypingCalendarDelegate <NSObject>

- (void)leftButtonPressed;
- (void)rightButtonPressed;

@end

@interface DWDiaryTypingCalendarView : UIView

@property (strong, nonatomic) NSDictionary *dicDate;
@property (weak, nonatomic) id<DWDiaryTypingCalendarDelegate> delegate;

- (void)transformToSmallMood;
- (void)transformToNormalMood;

@end
