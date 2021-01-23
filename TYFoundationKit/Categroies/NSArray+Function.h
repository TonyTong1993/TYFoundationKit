//
//  NSArray+Function.h
//  Pods-TYFoundationKit_Example
//
//  Created by 童万华 on 2021/1/23.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSArray (Function)

- (NSArray *)map;

- (NSArray *)filter;

- (NSArray *)reduce;

- (NSArray *)flatMap;


@end

NS_ASSUME_NONNULL_END
