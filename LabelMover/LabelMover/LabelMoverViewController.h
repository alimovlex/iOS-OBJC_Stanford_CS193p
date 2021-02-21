//
//  ViewController.h
//  LabelMover
//
//  Created by robot on 2/22/21.
//  Copyright © 2021 robot. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AskerViewController.h"

@interface LabelMoverViewController : UIViewController <AskerViewControllerDelegate>
{
@private
    IBOutlet UILabel *myLabel;
}

@property (retain) IBOutlet UILabel *myLabel;

@end

