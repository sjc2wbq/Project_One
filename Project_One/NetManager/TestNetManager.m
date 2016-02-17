//
//  TestNetManager.m
//  Project_One
//
//  Created by Tarena on 16/2/16.
//  Copyright © 2016年 shijunchuan. All rights reserved.
//

#import "TestNetManager.h"
#import "TestModel.h"
@implementation TestNetManager
+(id)getDataFromPath:(NSString *)path completionHandle:(void (^)(id, NSError *))completionHandle{
    NSDictionary *dic = nil;
    return  [self GET:path parameters:dic progress:nil completionHandle:^(id responseObj, NSError *error) {
        completionHandle([TestModel parse:responseObj],error);
    }];
}
@end
