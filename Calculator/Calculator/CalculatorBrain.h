//
//  CalculatorBrain.h
//  Calculator
//
//  Created by robot on 07/12/2020.
//  Copyright © 2020 robot. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CalculatorBrain : NSObject {
    double operand;
    NSString *waitingOperation;
    double waitingOperand;
}
@property double operand;

- (double)performOperation:(NSString *)operation;

@end
