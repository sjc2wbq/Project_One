//
//  TestNetManager.m
//  Project_One
//
//  Created by Tarena on 16/2/16.
//  Copyright © 2016年 shijunchuan. All rights reserved.
//

#import "TestNetManager.h"
#import "TestModel.h"
#import "BeautyModel.h"
@implementation TestNetManager
+(id)getDataFromPath:(NSString *)path completionHandle:(void (^)(id, NSError *))completionHandle{
//    ?appid=15813&secret=82494983a8e142f0b9cd3a4307513086
//    http://route.showapi.com/197-1?showapi_appid=15813&showapi_sign=82494983a8e142f0b9cd3a4307513086&showapi_timestamp=20160216202822&num=10
    NSMutableDictionary *dic = [NSMutableDictionary new];
    [dic setObject:@"15813" forKey:@"showapi_appid"];
    [dic setObject:@"82494983a8e142f0b9cd3a4307513086" forKey:@"showapi_sign"];
    [dic setObject:@"20160216211222" forKey:@"showapi_timestamp"];
    [dic setObject:@"10" forKey:@"num"];
//    [dic setObject:@"" forKey:@"showapi_res_gzip"];
    return  [self GET:path parameters:dic progress:nil completionHandle:^(id responseObj, NSError *error) {
        
        completionHandle([BeautyModel parse:responseObj],error);
    }];
}
@end
