//
//  main.c
//  Enum
//
//  Created by Princess Sampson on 8/11/16.
//  Copyright © 2016 Princess Sampson. All rights reserved.
//

#include <stdio.h>
#include "Color.h"

int main(int argc, const char * argv[]) {
    
    printf("What's your favorite color?\n\n");
    
    Color usersFavoriteColor = Null;
    int checkThatProperAmountOfItemsWereScanned = 0;
    
    while ( (checkThatProperAmountOfItemsWereScanned != 1) || (usersFavoriteColor < FirstColor) || (usersFavoriteColor > LastColor)) {
        
        printf("Please enter:\n");
        printf("    %d: red\n", ColorRed);
        printf("    %d: orange\n", ColorOrange);
        printf("    %d: yellow\n", ColorYellow);
        printf("    %d: green\n", ColorGreen);
        printf("    %d: blue\n", ColorBlue);
        printf("    %d: indigo\n", ColorIndigo);
        printf("    %d: violet\n\n", ColorViolet);
        
        fpurge(stdin);
        checkThatProperAmountOfItemsWereScanned = scanf("%d", &usersFavoriteColor);
    }
    
    char *colorString = stringFromColor(usersFavoriteColor);
    
    printf("You like %s\n\n", colorString);
    
    return 0;
}

