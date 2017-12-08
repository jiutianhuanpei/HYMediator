//
//  HYMediator.h
//  HYGeneralMediator
//
//  Created by xuxue on 16/10/24.
//  Copyright © 2016年 xuxue. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface HYMediator : NSObject

+ (instancetype)sharedInstance;

/**
 远程APP调用入口

 @param url        NSURL
 URL[scheme://host/path?query]
 host->target
 path->action
 query->params
 @param completion block回调

 @return id
 */
- (id)performActionWithUrl:(NSURL *)url completion:(void(^)(NSDictionary *resultInfo))completion;

/**
 本地组件调用入口

 @param targetName target名，文件必须以Target_开始，如"Target_xxx"， target = @"xxx"
 @param actionName action名，方法名必须以Action_开始，如"Action_fetData"， actionName = @"fetchData"
 @param params     参数， 如果为nil，方法名不以":"结尾，否则则以":"结尾

 @return id
 */
- (id)performTarget:(NSString *)targetName action:(NSString *)actionName params:(NSDictionary *)params;
                                                   
@end
