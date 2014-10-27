//
//  CCSprite+Grid.h
//  GameOfLife
//
//  Created by Magreth de Graaf on 27/10/2014.
//  Copyright (c) 2014 Apportable. All rights reserved.
//

#import "CCSprite.h"

@interface Grid : CCSprite

@property (nonatomic, assign) int totalAlive;
@property (nonatomic, assign) int generation;

@end
