//
//  DWPasswordDisplayView.h
//  Group20_Final
//
//  Created by Yqi on 2022/11/01.
//  Copyright © 2022 yueqi. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DWPasswordDisplayView : UIView

@property (assign, nonatomic) BOOL isEmpty;
@property (assign, nonatomic) BOOL isFull;

- (void)plus;
- (void)minus;

@end
