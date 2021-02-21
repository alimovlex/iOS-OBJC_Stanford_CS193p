//
//  ViewController.h
//  Happiness
//
//  Created by robot on 2/21/21.
//  Copyright © 2021 robot. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "FaceView.h"

@interface HappinessViewController : UIViewController <FaceViewDelegate>
{
    int happiness; // 0 to 100
    UISlider *slider;
    FaceView *faceView;
}

@property int happiness;

@property (retain) IBOutlet UISlider *slider;
@property (retain) IBOutlet FaceView *faceView;

- (IBAction)happinessChanged:(UISlider *)sender;

@end

