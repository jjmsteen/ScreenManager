//
//  Menu.h
//  ScreenManager
//
//  Created by Jay Steen on 10/01/2012.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#ifndef ScreenManager_Menu_h
#define ScreenManager_Menu_h

class Button;

class Menu 
{
    // Array of buttons
    Button * buttons;
    unsigned int buttonCount;
    
    // The selected button (ie highlighted when touched)
    Button * selectedButton;
    
public:
    
    // Game loop functions
    
    virtual void Update(float elapsedTime);
    
    virtual void Draw();
    
    // Mouse or finger touch functions
    
    // Check a touch down point against the menu
    virtual void CheckTouchDownPoint(float x, float y);
    
    // Check a touch up point against the menu
    virtual void CheckTouchUpPoint(float x, float y);
    
};

#endif
