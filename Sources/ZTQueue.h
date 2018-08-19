//
//  ZTQueue.h
//  Component
//
//  Created by wjc on 8/19/18.
//  Copyright © 2018 Apple. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ZTNode : NSObject

@property (strong,nonatomic) NSString *value;

@property (strong,nonatomic) ZTNode *next;

@end

@interface ZTQueue : NSObject



//最先入列的元素
@property (strong,nonatomic) ZTNode *first;

//最后入列的元素
@property (strong,nonatomic) ZTNode *last;

@property (assign,nonatomic) NSInteger count;

- (BOOL)isEmpty;

- (NSInteger)size;

- (void)enqueue:(NSString *)value;

- (NSString *)dequeue;

- (void)remove:(NSString *)value;


@end
