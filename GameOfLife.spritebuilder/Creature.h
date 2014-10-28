//
//  Creature.h
//  GameOfLife
//
//  Created by Magreth de Graaf on 28/10/2014.
//  Copyright (c) 2014 Software Rebel. All rights reserved.
//

#ifndef GameOfLife_Creature_h
#define GameOfLife_Creature_h
#endif

#import "CCSprite.h"

@interface Creature : CCSprite

// stores the current state of the creature
@property (nonatomic, assign) BOOL isAlive;

// stores the amount of living neighbors
@property (nonatomic, assign) NSInteger livingNeighbors;

- (id)initCreature;


@end

