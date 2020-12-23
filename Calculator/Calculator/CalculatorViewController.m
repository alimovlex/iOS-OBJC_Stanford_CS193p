//
//  ViewController.m
//  Calculator
//
//  Created by robot on 07/12/2020.
//  Copyright © 2020 robot. All rights reserved.
//

#import "CalculatorViewController.h"

@interface CalculatorViewController ()
@property (readonly) CalculatorBrain *brain;

@end

@implementation CalculatorViewController

- (CalculatorBrain *)brain
{
    if (!brain){
        brain = [[CalculatorBrain alloc] init];
    }
    return brain;
}

- (IBAction)digitPressed:(UIButton *)sender
{
    NSString *digit = sender.titleLabel.text;
    if (userIsInTheMiddleOfTypingANumber) {
        display.text = [display.text stringByAppendingString:digit];
    }
    else {
        display.text = digit;
        userIsInTheMiddleOfTypingANumber = YES;
    }
}

- (IBAction)operationPressed:(UIButton *)sender
{
    if (userIsInTheMiddleOfTypingANumber) {
        self.brain.operand = [display.text doubleValue];
         userIsInTheMiddleOfTypingANumber = NO;
    }
    NSString *operation = [[sender titleLabel] text];
    [self.brain performOperation:operation];
    display.text = [NSString stringWithFormat:@"%g", self.brain.operand];
}

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
}


@end
