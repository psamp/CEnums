//
//  Color.c
//  Enum
//
//  Created by Princess Sampson on 8/11/16.
//  Copyright © 2016 Princess Sampson. All rights reserved.
//

#include "Color.h"

char* ColorToString(Color color){
    char* rtn;
    
    switch (color) {
        case ColorRed: {
            rtn = "red";
            break;
        }
        case ColorOrange: {
            rtn = "orange";
            break;
        }
        case ColorYellow: {
            rtn = "yellow";
            break;
        }
        case ColorGreen: {
            rtn = "green";
            break;
        }
        case ColorBlue: {
            rtn = "blue";
            break;
        }
        case ColorIndigo: {
            rtn = "indigo";
            break;
        }
        case ColorViolet: {
            rtn = "violet";
            break;
        }
        case ColorWhite: {
            rtn = "white";
            break;
        }
        case ColorBlack: {
            rtn = "black";
            break;
        }
        default:
            rtn = NULL;
            break;
    }
    
    return rtn;
}
