//
//  NSObject+MJExtension.h
//  Project_One
//
//  Created by Tarena on 16/2/16.
//  Copyright © 2016年 shijunchuan. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSObject (MJExtension)
+(id)parse:(id)responseObj;
+(NSDictionary *)replacedKeyFromPropertyName;
+(NSString *)replacedKeyFromPropertyName:(NSString *)propertyName;
@end
