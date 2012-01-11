//
//  Game.h
//  ScreenManager
//
//  Created by Jay Steen on 10/01/2012.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

// A class that manages a stack of active screens, updating and drawing the top-most screen

// Subclass to define a game. Include all screens and game data, and define game logic
// on a screen-by-screen basis. 

#ifndef ScreenManager_Game_h
#define ScreenManager_Game_h

#include <stack>

class Screen;

class Game 
{
    
protected:
    
    // A stack of active screens
    std::stack<Screen *> activeScreens;
    
public:
    
    // Constructors and destructor
    Game();
    
    virtual ~Game();
    
    // Game loop functions
    
    virtual void Setup();
    
    virtual void Update(float elapsedTime);
    
    virtual void Draw();
};

#endif
