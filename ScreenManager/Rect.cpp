//
//  Rect.cpp
//  ScreenManager
//
//  Created by Jay Steen on 10/01/2012.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#include "Rect.h"

Rect::Rect(float x, float y, float width, float height)
: x(x), y(y), width(width), height(height)
{
    
}

Rect::~Rect()
{
    
}

bool Rect::ContainsPoint(float x, float y)
{
    // Check if x isn't within rect
    if ((x < this->x) || (x > (this->x + this->width)))
        return false;
    
    // Check if y isn't within rect
    if ((y < this->y) || (y > (this->y + this->height)))
        return false;
    
    return true;
        
}

bool Rect::ContainsRect(const Rect & r)
{
    throw "Not implemented";
}