//
//  DWPasswordChecker.h
//  Group20_Final
//
//  Created by Yqi on 2022/11/01.
//  Copyright © 2022 yueqi. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface DWPasswordChecker : NSObject

// 返回密码校验结果
- (BOOL)checkPassword:(NSString *)password;

// 更新密码
- (void)updateKey:(NSString *)key;

@end
