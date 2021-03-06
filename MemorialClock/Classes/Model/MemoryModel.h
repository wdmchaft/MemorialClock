//
//  MemoryModel.h
//  MemorialClock
//
//  Created by プー坊 on 11/09/19.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface MemoryModel : NSObject {
    NSString *dbPath_;
    NSArray *memoryIdList_;
    int prevMemoryId_;
}

+ (MemoryModel *)sharedMemoryModel;

- (NSDictionary *)nextMemory;
- (int)addMemory:(NSString *)name message:(NSString *)message image:(UIImage *)image;
- (void)changeMemory:(int)memoryId name:(NSString *)name message:(NSString *)message image:(UIImage *)image;
- (void)removeMemory:(int)memoryId;

@end
