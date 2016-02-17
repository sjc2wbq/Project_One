//
//  TestModel.h
//  Project_One
//
//  Created by Tarena on 16/2/16.
//  Copyright © 2016年 shijunchuan. All rights reserved.
//

#import <Foundation/Foundation.h>

@class TestData;
@interface TestModel : NSObject

@property (nonatomic, assign) NSInteger pageNum;

@property (nonatomic, strong) NSArray<TestData *> *data;

@property (nonatomic, assign) NSInteger pageSize;

@property (nonatomic, assign) NSInteger totalPage;

@property (nonatomic, assign) NSInteger totalRecord;

@end
@interface TestData : NSObject

@property (nonatomic, copy) NSString *Description;

@property (nonatomic, copy) NSString *coverHeight;

@property (nonatomic, copy) NSString *galleryId;

@property (nonatomic, copy) NSString *updated;

@property (nonatomic, copy) NSString *destUrl;

@property (nonatomic, copy) NSString *coverWidth;

@property (nonatomic, copy) NSString *title;

@property (nonatomic, copy) NSString *picsum;

@property (nonatomic, copy) NSString *created;

@property (nonatomic, copy) NSString *coverUrl;

@property (nonatomic, copy) NSString *commentCount;

@property (nonatomic, copy) NSString *clicks;

@property (nonatomic, copy) NSString *modify_time;

@end

