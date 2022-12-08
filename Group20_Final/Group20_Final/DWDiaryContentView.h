//
//  DWDiaryContentView.h
//  Group20_Final
//
//  Created by Yqi on 2022/11/01.
//  Copyright © 2022 yueqi. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol DWDiaryContentViewDelegate <NSObject>

- (void)openTypingViewWithDicDate:(NSDictionary *)dicDate;
- (void)deleteDiaryWithDicDate:(NSDictionary *)dicDate;
- (void)updateContentViewWithOffset:(NSInteger)offset;

@end

@interface DWDiaryContentView : UIView

@property (strong, nonatomic) NSDictionary *dicDate;
@property (strong, nonatomic) NSString *detail;

@property (weak, nonatomic) id<DWDiaryContentViewDelegate> delegate;

- (void)showAnimated;

@end
