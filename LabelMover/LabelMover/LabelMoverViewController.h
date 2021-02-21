//
//  ViewController.h
//  LabelMover
//
//  Created by robot on 2/22/21.
//  Copyright © 2021 robot. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AskerViewController.h"

@interface LabelMoverViewController : UIViewController <AskerViewControllerDelegate, UIActionSheetDelegate>
{
@private
    IBOutlet UILabel *myLabel;
    NSTimer *marqueeTimer;
}

@property (retain) IBOutlet UILabel *myLabel;

@end

