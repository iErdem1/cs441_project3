//
//  AppDelegate.h
//  Tetris by ihsanerdem
//
//  Created by Erdem Meral on 2/27/19.
//  Copyright © 2019 Ahmed Ihsan Erdem. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface Cell : UIView

@property (nonatomic) int xIndex;
@property (nonatomic) int yIndex;
@property (nonatomic) BOOL full;

@end
