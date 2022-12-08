//
//  DWDiaryDismissKeyboardButton.m
//  Group20_Final
//
//  Created by Yqi on 2022/11/01.
//  Copyright © 2022 yueqi. All rights reserved.
//

#import "DWDiaryDismissKeyboardButton.h"
#import "Constants.h"

@implementation DWDiaryDismissKeyboardButton

- (instancetype)init {
    self = [[super class] buttonWithType:UIButtonTypeCustom];
    if (self) {
        self.backgroundColor = DWDisKeyboardButtonGrayColor;
        [self setTitle:@"Hide" forState:UIControlStateNormal];
        self.titleLabel.font = [UIFont systemFontOfSize:13];
    }
    return self;
}

@end
