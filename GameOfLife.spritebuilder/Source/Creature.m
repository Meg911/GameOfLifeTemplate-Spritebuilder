//
//  Creature.m
//  GameOfLife
//
//  Created by Magreth de Graaf on 28/10/2014.
//  Copyright (c) 2014 Software Rebel. All rights reserved.
//

#import "Creature.h"



BOOL _isAlive;

@implementation Creature

- (instancetype)initCreature {
    // since we made Creature inherit from CCSprite, 'super' below refers to CCSprite
    //self = [super initWithImageNamed:@"bubble.png"];
    //DEBUG self = [super initWithImageNamed:@"GameOfLifeAssets/Assets/resources-phone/bubble.png"];
    
    if (self) {
        self.isAlive = NO;
    }
    
    return self;
}
- (void)setIsAlive:(BOOL)newState {
    //when you create an @property as we did in the .h, an instance variable with a leading underscore is automatically created for you
    _isAlive = newState;
    
    // 'visible' is a property of any class that inherits from CCNode. CCSprite is a subclass of CCNode, and Creature is a subclass of CCSprite, so Creatures have a visible property
    self.visible = _isAlive;
}
@end

