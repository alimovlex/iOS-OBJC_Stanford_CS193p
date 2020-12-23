//
//  PlayingCardView.h
//  SuperCard
//
//  Created by robot on 19/12/2020.
//  Copyright © 2020 robot. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PlayingCardView : UIView

@property (nonatomic) NSUInteger rank;
@property (strong, nonatomic) NSString *suit;
@property (nonatomic) BOOL faceUp;



@end
