//
//  AppDelegate.h
//  Happiness
//
//  Created by robot on 2/21/21.
//  Copyright © 2021 robot. All rights reserved.
//

#import <UIKit/UIKit.h>

@class HappinessViewController;

@interface HappinessAppDelegate : UIResponder <UIApplicationDelegate> {
    UIWindow *window;
    HappinessViewController *viewController;
}

@property (strong, nonatomic) IBOutlet UIWindow *window;
@property (strong, nonatomic) IBOutlet HappinessViewController *viewController;

@end
