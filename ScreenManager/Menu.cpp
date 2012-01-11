//
//  Menu.cpp
//  ScreenManager
//
//  Created by Jay Steen on 10/01/2012.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#include "Menu.h"
#include "Button.h"

void Menu::Update(float elapsedTime)
{
    // Loop over buttons
    for (unsigned int i = 0; i < buttonCount; ++i)
    {
        // Update this button
        buttons[i].Update(elapsedTime);
    }
}

void Menu::Draw()
{
    // Loop over buttons
    for (unsigned int i = 0; i < buttonCount; ++i)
    {
        // Update this button
        buttons[i].Draw();
    }
}