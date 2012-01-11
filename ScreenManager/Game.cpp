//
//  Game.cpp
//  ScreenManager
//
//  Created by Jay Steen on 10/01/2012.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#include "Game.h"
#include "Screen.h"

Game::Game()
{
    
}

Game::~Game()
{
    
}

void Game::Setup()
{
    
}

void Game::Update(float elapsedTime)
{
    // Get a pointer to the top screen
    Screen * topScreen = activeScreens.top();
    
    // Update the screen
    topScreen->Update(elapsedTime);
}

void Game::Draw()
{
    // Get a pointer to the top screen
    Screen * topScreen = activeScreens.top();
    
    // Draw the screen
    topScreen->Draw();
}