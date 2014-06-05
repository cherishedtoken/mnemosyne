//
//  MNEToDoItem.h
//  Mnemosyne
//
//  Created by Chris Gonzalez on 6/4/14.
//  Copyright (c) 2014 Christopher Gonzalez. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MNEToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end
