//  weibo: http://weibo.com/xiaoqing28
//  blog:  http://www.alonemonkey.com
//
//  DingTalk_ToolDylib.h
//  DingTalk_ToolDylib
//
//  Created by flh on 2018/4/8.
//  Copyright (c) 2018年 flh. All rights reserved.
//

#import <Foundation/Foundation.h>

#define INSERT_SUCCESS_WELCOME @"\n               🎉!!！congratulations!!！🎉\n👍----------------insert dylib success----------------👍"

@interface CustomViewController

@property (nonatomic, copy) NSString* newProperty;

+ (void)classMethod;

- (NSString*)getMyName;

- (void)newMethod:(NSString*) output;

@end
