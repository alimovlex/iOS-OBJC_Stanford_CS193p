//
//  ViewController.m
//  SuperCard
//
//  Created by robot on 19/12/2020.
//  Copyright © 2020 robot. All rights reserved.
//

#import "ViewController.h"
#import "PlayingCardView.h"
@interface ViewController ()
@property (weak, nonatomic) IBOutlet PlayingCardView *playingCardView;

@end

@implementation ViewController
- (IBAction)swipe:(UISwipeGestureRecognizer *)sender
{
    self.playingCardView.faceUp = !self.playingCardView.faceUp;
}

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    self.playingCardView.suit = @"♥️";
    self.playingCardView.rank = 13;
}


@end
