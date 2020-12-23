//
//  Dropit.h
//  Dropit
//
//  Created by robot on 20/12/2020.
//  Copyright © 2020 robot. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DropitBehavior : UIDynamicBehavior

- (void)addItem:(id <UIDynamicItem>)item;
- (void)removeItem:(id <UIDynamicItem>)item;
@end
