//
//  DWSettingSwitchTableViewCell.h
//  Group20_Final
//
//  Created by Yqi on 2022/11/01.
//  Copyright © 2022 yueqi. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol DWSettingSwitchCellDelegate <NSObject>

- (void)switcherValueChanged:(UISwitch *)sender;

@end

@interface DWSettingSwitchTableViewCell : UITableViewCell

@property (strong, nonatomic) UISwitch *switcher;
@property (weak, nonatomic) id<DWSettingSwitchCellDelegate> delegate;

- (instancetype)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString *)reuseIdentifier title:(NSString *)title;

@end
