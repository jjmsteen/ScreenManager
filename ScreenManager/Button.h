//
//  Button.h
//  ScreenManager
//
//  Created by Jay Steen on 10/01/2012.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#ifndef ScreenManager_Button_h
#define ScreenManager_Button_h

#include "Rect.h"

class Button 
{    
    // The rect the button covers on the screen
    Rect buttonRect;
    
    // A function pointer to the function the button calls when pressed
    void (*pressAction)(void *);   
    
    
public:
    
    // A public var that identifies the button as selected or not
    bool IsSelected;
    
    // Constructor with a rect for the button and a function to execute when
    // pressed
    Button(const Rect & rect, void (*pressAction)(void*) = 0);
    
    // Getters and setters
    
    const Rect & GetRect() const { return buttonRect; }
    
    // Game loop functions
    
    virtual void Update(float elapsedTime) = 0;
    
    virtual void Draw() = 0;
    
    virtual void Press();
    
    
    
};

#endif
