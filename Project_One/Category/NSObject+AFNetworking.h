//
//  NSObject+AFNetworking.h
//  Project_One
//
//  Created by Tarena on 16/2/16.
//  Copyright © 2016年 shijunchuan. All rights reserved.
//

#import <Foundation/Foundation.h>
#define kCompletionHandle (void(^)(id model,NSError *error))completionHandle
@interface NSObject (AFNetworking)
+(id)GET:(NSString *)path parameters:(id)parameters progress:(void(^)(NSProgress *))downloadProgress completionHandle:(void(^)(id responseObj,NSError *error))completionHandle;
+(id)POST:(NSString *)path parameters:(id)parameters progress:(void(^)(NSProgress *))downloadProgress completionHandle:(void(^)(id responseObj,NSError *error))completionHandle;

@end
