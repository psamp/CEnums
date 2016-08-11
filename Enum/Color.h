//
//  Color.h
//  Enum
//
//  Created by Princess Sampson on 8/11/16.
//  Copyright © 2016 Princess Sampson. All rights reserved.
//

#ifndef Color_h
#define Color_h

#include <stdio.h>
#include <limits.h>

typedef enum {
    ColorRed = 1,
    ColorOrange,
    ColorYellow,
    ColorGreen,
    ColorBlue,
    ColorIndigo,
    ColorViolet,
    ColorBlack,
    ColorWhite,
    Null = INT_MIN,
    FirstColor = ColorRed,
    LastColor = ColorWhite
}Color;

char* stringFromColor(Color color);

#endif /* Color_h */
