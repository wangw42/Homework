//
//  DWDiaryCalendarScrollView.h
//  Group20_Final
//
//  Created by Yqi on 2022/11/01.
//  Copyright © 2022 yueqi. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DWDiaryCalendarScrollView : UIScrollView

@property (strong, nonatomic) NSArray *arrayDayDics;
@property (assign, nonatomic) NSInteger currentIndex;

@end
