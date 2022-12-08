//
//  SettingManage.h
//  Group20_Final
//
//  Created by Yqi on 2022/11/01.
//  Copyright © 2022 yueqi. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SettingManage : NSObject

@property (assign, nonatomic) BOOL isLocked;

+ (instancetype)sharedInstance;

@end
