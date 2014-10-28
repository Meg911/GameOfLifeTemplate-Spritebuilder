//
//  CCSprite+Creature.h
//  GameOfLife
//
//  Created by Magreth de Graaf on 28/10/2014.
//  Copyright (c) 2014 Apportable. All rights reserved.
//

#import "CCSprite.h"

//@interface CCSprite (Creature)
@interface Creature : CCSprite

// stores the current state of the creature
@property (nonatomic, assign) BOOL isAlive;

// stores the amount of living neighbors
@property (nonatomic, assign) NSInteger livingNeighbors;

- (id)initCreature;


@end
