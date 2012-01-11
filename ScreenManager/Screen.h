//
//  Screen.h
//  ScreenManager
//
//  Created by Jay Steen on 10/01/2012.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#ifndef ScreenManager_Screen_h
#define ScreenManager_Screen_h

class Game;
class Menu;

class Screen 
{
    
protected:
    
    // The parent game
    Game * game;
    
    // A menu (may be null)
    Menu * menu;
    
public:
    
    // Constructors
    
    Screen(Game * game, Menu * menu);
    
    // Destructor
    virtual ~Screen();
    
    
    // Run loop functions
    
    virtual void Update(float elapsedTime) = 0;
    
    virtual void Draw() = 0;
    
};

#endif
