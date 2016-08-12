//
//  main.c
//  Enum
//
//  Created by Princess Sampson on 8/11/16.
//  Copyright © 2016 Princess Sampson. All rights reserved.
//

#include <stdio.h>
#include "Color.h"
#include <string.h>

void getWordFromUser(char *destination, char prompt[]);

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
        printf("    %d: violet\n", ColorViolet);
        printf("    %d: black\n", ColorBlack);
        printf("    %d: white\n\n", ColorWhite);
        
        fpurge(stdin);
        checkThatProperAmountOfItemsWereScanned = scanf("%d", &usersFavoriteColor);
    }
    
    char *colorString = ColorToString(usersFavoriteColor);
    
    if (colorString == NULL) {
        return 1;
    }
    
    printf("You like %s\n\n", colorString);
    
    char word[100] = {'\0'};
    
    getWordFromUser(word, "Enter your first name (without any spaces):\n\n");
    printf("Hello, %s\n\n", word);
    
    return 0;
}

void getWordFromUser(char *destination, char prompt[]) {
    
    int numberOfItemsScanned = 0;
    unsigned long stringLength = 0;
    
    while (numberOfItemsScanned != 1 || stringLength <= 0) {
        printf("%s", prompt);
        fpurge(stdin);
        
        numberOfItemsScanned = scanf("%s", destination);
        stringLength = strlen(destination);
    }
    
}
