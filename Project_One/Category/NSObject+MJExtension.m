//
//  NSObject+MJExtension.m
//  Project_One
//
//  Created by Tarena on 16/2/16.
//  Copyright © 2016年 shijunchuan. All rights reserved.
//

#import "NSObject+MJExtension.h"

@implementation NSObject (MJExtension)

+(NSDictionary *)mj_replacedKeyFromPropertyName{
    return [self replacedKeyFromPropertyName];
}
+(NSDictionary *)replacedKeyFromPropertyName{
    return nil;
}


+(NSString *)mj_replacedKeyFromPropertyName121:(NSString *)propertyName{
    return [self replacedKeyFromPropertyName:propertyName];
}
+(NSString *)replacedKeyFromPropertyName:(NSString *)propertyName{
    return nil;
}




+(id)parse:(id)responseObj{
    if ([responseObj isKindOfClass:[NSArray class]]) {
        return [self mj_keyValuesArrayWithObjectArray:responseObj];
    }
    if ([responseObj isKindOfClass:[NSDictionary class]]) {
        return  [self mj_objectWithKeyValues:responseObj];
    }
    return responseObj;
}
@end
