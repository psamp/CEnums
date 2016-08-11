//
//  main.c
//  Enum
//
//  Created by Princess Sampson on 8/11/16.
//  Copyright © 2016 Princess Sampson. All rights reserved.
//

#include <stdio.h>
#include <limits.h>

typedef enum {
    Red = 1,
    Orange,
    Yellow,
    Green,
    Blue,
    Indigo,
    Violet,
    Black,
    White,
    Null = INT_MIN
}Color;

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
    
    switch (usersFavoriteColor) {
        case Red: {
            printf("You like red\n");
            break;
        }
        case Orange: {
            printf("You like orange\n");
            break;
        }
        case Yellow: {
            printf("You like yellow\n");
            break;
        }
        case Green: {
            printf("You like green\n");
            break;
        }
        case Blue: {
            printf("You like blue\n");
            break;
        }
        case Indigo: {
            printf("You like indigo\n");
            break;
        }
        case Violet: {
            printf("You like violet\n");
            break;
        }
        case White: {
            printf("You like white\n");
            break;
        }
        case Black: {
            printf("You like black\n");
            break;
        }
        default:
            break;
    }
    
    return 0;
}
