//
//  AppDelegate.h
//  Tetris by ihsanerdem
//
//  Created by Erdem Meral on 2/27/19.
//  Copyright © 2019 Ahmed Ihsan Erdem. All rights reserved.
//

#import <UIKit/UIKit.h>
#include "Cell.h"

@interface ViewController : UIViewController

@property (strong, nonatomic) IBOutlet UIView *gameView;
@property (strong, nonatomic) IBOutlet UIButton *upButton;
@property (strong, nonatomic) IBOutlet UIButton *rightButton;
@property (strong, nonatomic) IBOutlet UIButton *leftButton;
@property (strong, nonatomic) IBOutlet UIButton *downButton;
@property (strong, nonatomic) IBOutlet UIButton *goLeftButton;
@property (strong, nonatomic) IBOutlet UIButton *goRightButton;
@property (strong, nonatomic) IBOutlet UILabel *scoreLabel;
@property (strong, nonatomic) IBOutlet UIButton *pauseButton;
@property (nonatomic, strong) CADisplayLink *displayLink;
@property (nonatomic, strong) NSMutableArray *cells;
@property (nonatomic, strong) NSMutableArray *tetromino;
@property (nonatomic) int type;
@property (nonatomic) Cell *tetroCenter;
@property (nonatomic) NSInteger highScore;
@property (nonatomic) NSInteger currentScore;
-(void)simulate:(CADisplayLink *)sender;
@end

