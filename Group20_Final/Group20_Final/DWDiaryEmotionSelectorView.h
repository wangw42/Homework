//
//  DWDiaryEmotionSelectorView.h
//  Group20_Final
//
//  Created by Yqi on 2022/11/01.
//  Copyright © 2022 yueqi. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol DWDiaryEmotionSelectorDelegate <NSObject>

- (void)setEmotionWithString:(NSString *)emotion;

@end

@interface DWDiaryEmotionSelectorView : UIView

@property (weak, nonatomic) id<DWDiaryEmotionSelectorDelegate> delegate;

- (void)showAnimated;

@end
