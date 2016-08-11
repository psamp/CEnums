//
//  main.c
//  Enum
//
//  Created by Princess Sampson on 8/11/16.
//  Copyright © 2016 Princess Sampson. All rights reserved.
//

#include <stdio.h>
#include "Color.h"

char* stringFromColor(Color color);

int main(int argc, const char * argv[]) {
    
    printf("What's your favorite color?\n\n");
    
    Color usersFavoriteColor = Null;
    int checkThatProperAmountOfItemsWereScanned = 0;
    
    while ( (checkThatProperAmountOfItemsWereScanned != 1) || (usersFavoriteColor < Red) || (usersFavoriteColor > White)) {
        
        printf("Please enter:\n");
        printf("    %d: red\n", Red);
        printf("    %d: orange\n", Orange);
        printf("    %d: yellow\n", Yellow);
        printf("    %d: green\n", Green);
        printf("    %d: blue\n", Blue);
        printf("    %d: indigo\n", Indigo);
        printf("    %d: violet\n\n", Violet);
        
        fpurge(stdin);
        checkThatProperAmountOfItemsWereScanned = scanf("%d", &usersFavoriteColor);
    }
    
    printf("");
    
    return 0;
}

char* stringFromColor(Color color){
    char *rtn;
    
    switch (color) {
        case Red: {
            rtn = "red";
            break;
        }
        case Orange: {
            rtn = "orange";
            break;
        }
        case Yellow: {
            rtn = "yellow";
            break;
        }
        case Green: {
            rtn = "green";
            break;
        }
        case Blue: {
            rtn = "blue";
            break;
        }
        case Indigo: {
            rtn = "indigo";
            break;
        }
        case Violet: {
            rtn = "violet";
            break;
        }
        case White: {
            rtn = "white";
            break;
        }
        case Black: {
            rtn = "black";
            break;
        }
        default:
            break;
    }
    
    return rtn;
    
}
