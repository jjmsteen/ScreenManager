//
//  Quad.h
//  ScreenManager
//
//  Created by Jay Steen on 10/01/2012.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#ifndef ScreenManager_Rect_h
#define ScreenManager_Rect_h

class Rect 
{
protected:
    // Numbers defining the topleft point and dimensions of the quad
    float x, y, width, height;
    
public:
    
    // Constructors and destructor
    
    Rect(float x, float y, float width, float height);
    
    virtual ~Rect();
    
    // Containment functions
    
    bool ContainsPoint(float x, float y) const;
    
    bool ContainsRect(const Rect & r) const;
    
};

#endif
