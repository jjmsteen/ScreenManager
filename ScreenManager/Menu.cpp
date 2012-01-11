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

void Menu::CheckTouchDownPoint(float x, float y)
{
    // Loop over the buttons
    for (unsigned int i = 0; i < buttonCount; ++i)
    {
        // Check if the touch down point is inside the button's rect
        if (buttons[i].GetRect().ContainsPoint(x, y))
        {
            // Select the button
            buttons[i].IsSelected = true;
        }
        else
        {
            // Ensure it's unselected if the touch isn't over it
            buttons[i].IsSelected = false;
        }
    }
}

void Menu::CheckTouchUpPoint(float x, float y)
{
    // Loop over the buttons
    for (unsigned int i = 0; i < buttonCount; ++i)
    {
        // Check whether the touch point is inside the button's rect
        if (buttons[i].GetRect().ContainsPoint(x, y))
        {
            // Call the press function
            buttons[i].Press();
            
            // Return, since if one button is pressed no others can be
            return;
        }
    }
}