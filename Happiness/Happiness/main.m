//
//  main.m
//  Happiness
//
//  Created by robot on 2/21/21.
//  Copyright © 2021 robot. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "HappinessAppDelegate.h"

int main(int argc, char * argv[]) {
    NSString * appDelegateClassName;
    @autoreleasepool {
        // Setup code that might create autoreleased objects goes here.
        appDelegateClassName = NSStringFromClass([HappinessAppDelegate class]);
    }
    return UIApplicationMain(argc, argv, nil, appDelegateClassName);
}
