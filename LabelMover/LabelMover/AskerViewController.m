//
//  AskerViewController.m
//  LabelMover
//
//  Created by robot on 2/22/21.
//  Copyright © 2021 robot. All rights reserved.
//

#import "AskerViewController.h"

@implementation AskerViewController

@synthesize question;
@synthesize questionLabel, answerField;
@synthesize delegate;

- (void)viewDidLoad
{
    self.answerField.delegate = self;
    self.answerField.autocapitalizationType = UITextAutocapitalizationTypeWords;
}

- (void)viewWillAppear:(BOOL)animated
{
    [super viewWillAppear:animated];
    self.questionLabel.text = self.question;
    self.answerField.text = nil;
    [self.answerField becomeFirstResponder];
}

- (BOOL)textFieldShouldReturn:(UITextField *)textField
{
    if (textField.text.length) {
        [textField resignFirstResponder];
        return YES;
    } else {
        return NO;
    }
}

- (void)textFieldDidEndEditing:(UITextField *)textField
{
    [self.delegate askerViewController:self didAskQuestion:self.questionLabel.text andGotAnswer:self.answerField.text];
}

- (void)viewDidUnload {
    [super viewDidUnload];
    // Release any retained subviews of the main view.
    // e.g. self.myOutlet = nil;
    self.questionLabel = nil;
    self.answerField = nil;
}

@end
