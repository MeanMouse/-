//
//  VIPERInteractorOutput.h
//  架构模式学习
//
//  Created by mo2323 on 2018/11/13.
//  Copyright © 2018年 com.developer.meanmouse. All rights reserved.
//

#import <Foundation/Foundation.h>
@class VIPERAnimal;

NS_ASSUME_NONNULL_BEGIN

@protocol VIPERDataOutput <NSObject>

- (void)receiverAnimalData:(VIPERAnimal *)animal;

- (void)receiverPromptText:(NSString *)text isError:(BOOL)isError;

@end

NS_ASSUME_NONNULL_END
