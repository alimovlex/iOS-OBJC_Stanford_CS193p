//
//  CalculatorBrain.m
//  Calculator
//
//  Created by robot on 07/12/2020.
//  Copyright © 2020 robot. All rights reserved.
// The C++ version will come soon

#import <Foundation/Foundation.h>
#import "CalculatorBrain.h"
@implementation CalculatorBrain

@synthesize operand;

- (void)performWaitingOperation
{
    if ([@"+" isEqual:waitingOperation])
    {
        operand = waitingOperand + operand;
    }
    else if ([@"*" isEqual:waitingOperation])
    {
        operand = waitingOperand * operand;
    }
    else if ([@"-" isEqual:waitingOperation])
    {
        operand = waitingOperand - operand;
    }
    else if ([@"/" isEqual:waitingOperation])
    {
        if (operand) {
            operand = waitingOperand / operand;
        }
    }
}

- (double)performOperation:(NSString *)operation
{
    if ([operation isEqual:@"√"]) {
        operand = sqrt(operand);
    }
    else {
       [self performWaitingOperation];
        waitingOperation = operation;
        waitingOperand = operand;
    }
    return operand;
}

@end
