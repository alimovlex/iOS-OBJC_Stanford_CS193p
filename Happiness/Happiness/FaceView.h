//
//  FaceView.h
//  Happiness
//
//  Created by robot on 2/21/21.
//  Copyright © 2021 robot. All rights reserved.
//

#import <UIKit/UIKit.h>

@class FaceView;

@protocol FaceViewDelegate
- (float)smileForFaceView:(FaceView *)requestor;  // -1.0 (frown) to 1.0 (smile)
@end

@interface FaceView : UIView {
   __weak id <FaceViewDelegate> delegate;
}

@property (nonatomic, weak) id <FaceViewDelegate> delegate;

@end
