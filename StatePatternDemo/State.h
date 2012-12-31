//
//  State.h
//  StatePatternDemo
//
//  Created by LARRY FRISSELL on 12/31/12.
//  Copyright (c) 2012 LARRY FRISSELL. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol State <NSObject>
@required
-(void)nextStep;

@end
