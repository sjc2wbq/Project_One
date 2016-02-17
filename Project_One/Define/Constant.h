//
//  Constant.h
//  Project_One
//
//  Created by Tarena on 16/2/16.
//  Copyright © 2016年 shijunchuan. All rights reserved.
//

#ifndef Constant_h
#define Constant_h

#define kScreenWidth [UIScreen mainScreen].bounds.size.width
#define kScreenHeight [UIScreen mainScreen].bounds.size.height
#define kRGBA(R,G,B,A) [UIColor colorWithRed:R/255.0 green:G/255.0 blue:B/255.0 alpha:A]
#define kAppDelegate ((AppDelegate *)[UIApplication sharedApplication].delegate)
#define WK(self) __block __weak __typeof(&*self)weakSelf = self
#define kDocPath NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES).firstObject


#endif /* Constant_h */
