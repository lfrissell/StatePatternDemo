//
//  StateMachine.h
//  StatePatternDemo
//
//  Created by Larry Frissell on 12/31/12.
//  Copyright (c) 2012 LARRY FRISSELL. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "State.h"
@interface StateMachine : NSObject{
    NSObject<State> *state;
    
}
@property NSObject *state;
@end
