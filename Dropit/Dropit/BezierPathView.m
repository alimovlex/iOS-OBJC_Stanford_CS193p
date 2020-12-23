//
//  BezierPathView.m
//  Dropit
//
//  Created by robot on 20/12/2020.
//  Copyright © 2020 robot. All rights reserved.
//

#import "BezierPathView.h"

@implementation BezierPathView

- (void)setPath:(UIBezierPath *)path
{
    _path = path;
    [self setNeedsDisplay];
}

- (void)drawRect:(CGRect)rect
{
    [self.path stroke];
}

@end
