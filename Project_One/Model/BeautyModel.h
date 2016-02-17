//
//  BeautyModel.h
//  Project_One
//
//  Created by Tarena on 16/2/16.
//  Copyright © 2016年 shijunchuan. All rights reserved.
//

#import <Foundation/Foundation.h>

@class Showapi_Res_Body,BtSeven,BtThree,BtEight,BtFour,BtZero,BtFive,BtOne,BtSix,BtTwo;
@interface BeautyModel : NSObject

@property (nonatomic, strong) Showapi_Res_Body *showapi_res_body;

@property (nonatomic, copy) NSString *showapi_res_error;

@property (nonatomic, assign) NSInteger showapi_res_code;

@end
@interface Showapi_Res_Body : NSObject

@property (nonatomic, strong) BtSeven *Seven;

@property (nonatomic, strong) BtThree *Three;

@property (nonatomic, strong) BtEight *Eight;

@property (nonatomic, strong) BtFour *Four;

@property (nonatomic, strong) BtZero *Zero;

@property (nonatomic, assign) NSInteger code;

@property (nonatomic, strong) BtFive *Five;

@property (nonatomic, strong) BtOne *One;

@property (nonatomic, copy) NSString *msg;

@property (nonatomic, strong) BtSix *Six;

@property (nonatomic, strong) BtTwo *Two;

@end

@interface BtSeven : NSObject

@property (nonatomic, copy) NSString *title;

@property (nonatomic, copy) NSString *Description;

@property (nonatomic, copy) NSString *url;

@property (nonatomic, copy) NSString *picUrl;

@end

@interface BtThree : NSObject

@property (nonatomic, copy) NSString *title;

@property (nonatomic, copy) NSString *Description;

@property (nonatomic, copy) NSString *url;

@property (nonatomic, copy) NSString *picUrl;

@end

@interface BtEight : NSObject

@property (nonatomic, copy) NSString *title;

@property (nonatomic, copy) NSString *Description;

@property (nonatomic, copy) NSString *url;

@property (nonatomic, copy) NSString *picUrl;

@end

@interface BtFour : NSObject

@property (nonatomic, copy) NSString *title;

@property (nonatomic, copy) NSString *Description;

@property (nonatomic, copy) NSString *url;

@property (nonatomic, copy) NSString *picUrl;

@end

@interface BtZero : NSObject

@property (nonatomic, copy) NSString *title;

@property (nonatomic, copy) NSString *Description;

@property (nonatomic, copy) NSString *url;

@property (nonatomic, copy) NSString *picUrl;

@end

@interface BtFive : NSObject

@property (nonatomic, copy) NSString *title;

@property (nonatomic, copy) NSString *Description;

@property (nonatomic, copy) NSString *url;

@property (nonatomic, copy) NSString *picUrl;

@end

@interface BtOne : NSObject

@property (nonatomic, copy) NSString *title;

@property (nonatomic, copy) NSString *Description;

@property (nonatomic, copy) NSString *url;

@property (nonatomic, copy) NSString *picUrl;

@end

@interface BtSix : NSObject

@property (nonatomic, copy) NSString *title;

@property (nonatomic, copy) NSString *Description;

@property (nonatomic, copy) NSString *url;

@property (nonatomic, copy) NSString *picUrl;

@end

@interface BtTwo : NSObject

@property (nonatomic, copy) NSString *title;

@property (nonatomic, copy) NSString *Description;

@property (nonatomic, copy) NSString *url;

@property (nonatomic, copy) NSString *picUrl;

@end

