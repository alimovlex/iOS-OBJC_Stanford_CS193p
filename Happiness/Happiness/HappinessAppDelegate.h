//
//  AppDelegate.h
//  Happiness
//
//  Created by robot on 2/21/21.
//  Copyright © 2021 robot. All rights reserved.
//

#import <UIKit/UIKit.h>

@class HappinessViewController;

@interface HappinessAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    HappinessViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet HappinessViewController *viewController;

@end
