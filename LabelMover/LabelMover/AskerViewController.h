//
//  AskerViewController.h
//  LabelMover
//
//  Created by robot on 2/22/21.
//  Copyright © 2021 robot. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol AskerViewControllerDelegate;

@interface AskerViewController : UIViewController <UITextFieldDelegate>
{
@private
    NSString *question;
    IBOutlet UILabel *questionLabel;
    IBOutlet UITextField *answerField;
    __weak id <AskerViewControllerDelegate> delegate;
}

@property (copy) NSString *question;

@property (retain) IBOutlet UILabel *questionLabel;
@property (retain) IBOutlet UITextField *answerField;

@property (nonatomic, weak) id <AskerViewControllerDelegate> delegate;

@end

@protocol AskerViewControllerDelegate
- (void)askerViewController:(AskerViewController *)sender didAskQuestion:(NSString *)question andGotAnswer:(NSString *)answer;
@end
