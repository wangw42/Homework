//
//  DWDiaryWeatherSelectorView.h
//  Group20_Final
//
//  Created by Yqi on 2022/11/01.
//  Copyright © 2022 yueqi. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol DWDiaryWeatherSelectorDelegate <NSObject>

- (void)setWeatherWithString:(NSString *)weather;

@end

@interface DWDiaryWeatherSelectorView : UIView

@property (weak, nonatomic) id<DWDiaryWeatherSelectorDelegate> delegate;

- (void)showAnimated;

@end
