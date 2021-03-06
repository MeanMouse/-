//
//  VIPERViewEventHandler.h
//  架构模式学习
//
//  Created by mo2323 on 2018/11/13.
//  Copyright © 2018年 com.developer.meanmouse. All rights reserved.
//

#import <Foundation/Foundation.h>
@class VIPERView;

NS_ASSUME_NONNULL_BEGIN

@protocol VIPERViewEventHandler <NSObject>

- (void)attackAnimalButtonAction;

- (void)viperViewIsAlready:(VIPERView *)view;

- (void)viewDidLoadLifeMethod;

@end

NS_ASSUME_NONNULL_END
