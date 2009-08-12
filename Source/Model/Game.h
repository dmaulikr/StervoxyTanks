//
//  Game.h
//  StervoxyTanks
//
//  Created by Patrik Sjöberg on 2009-08-12.
//  Copyright 2009 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@class Level;

@interface Game : NSObject {
  Level *currentLevel;
}

@property (nonatomic, retain) Level *currentLevel;

+ (Game*)sharedGame;

@end
