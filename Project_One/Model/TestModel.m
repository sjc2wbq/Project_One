//
//  TestModel.m
//  Project_One
//
//  Created by Tarena on 16/2/16.
//  Copyright © 2016年 shijunchuan. All rights reserved.
//

#import "TestModel.h"

@implementation TestModel


+ (NSDictionary *)objectClassInArray{
    return @{@"data" : [TestData class]};
}
@end
@implementation TestData
+(NSDictionary *)replacedKeyFromPropertyName{
    return @{@"Description":@"description"};
}
@end


