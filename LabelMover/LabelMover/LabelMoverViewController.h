//
//  ViewController.h
//  LabelMover
//
//  Created by robot on 2/22/21.
//  Copyright © 2021 robot. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AskerViewController.h"

@interface LabelMoverViewController : UIViewController <AskerViewControllerDelegate, UIActionSheetDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate>
{
@private
    IBOutlet UILabel *myLabel;
    NSTimer *marqueeTimer;
    AVAudioPlayer *audio;
}

@property (retain) IBOutlet UILabel *myLabel;
@property (retain) UIImage *backgroundImage;

@property (retain) AVAudioPlayer *audio;

@end

