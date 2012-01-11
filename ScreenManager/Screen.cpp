//
//  Screen.cpp
//  ScreenManager
//
//  Created by Jay Steen on 10/01/2012.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#include "Screen.h"
#include "Menu.h"

Screen::Screen(Game * game, Menu * menu)
: game(game), menu(menu)
{
    
}

Screen::~Screen()
{
    // Nullify the game pointer explicitly
    game = 0;
    
    // Delete the menu
    delete menu;
}