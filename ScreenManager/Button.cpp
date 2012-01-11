//
//  Button.cpp
//  ScreenManager
//
//  Created by Jay Steen on 10/01/2012.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#include "Button.h"

Button::Button(const Rect & rect, void (*pressAction)(void*))
: buttonRect(rect), pressAction(pressAction), IsSelected(false)
{
    
}

void Button::Press()
{
    // If there is a function pointer attached to this button
    if (pressAction != 0)
    {
        // Execute the function, passing this button as an argument
        pressAction(this);
    }
}
