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
            rtn = "Red";
            break;
        }
        case ColorOrange: {
            rtn = "Orange";
            break;
        }
        case ColorYellow: {
            rtn = "Yellow";
            break;
        }
        case ColorGreen: {
            rtn = "Green";
            break;
        }
        case ColorBlue: {
            rtn = "Blue";
            break;
        }
        case ColorIndigo: {
            rtn = "Indigo";
            break;
        }
        case ColorViolet: {
            rtn = "Violet";
            break;
        }
        case ColorWhite: {
            rtn = "White";
            break;
        }
        case ColorBlack: {
            rtn = "Black";
            break;
        }
        default:
            rtn = NULL;
            break;
    }
    
    return rtn;
}
