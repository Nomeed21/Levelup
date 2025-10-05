#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int difficulty(int diff){
    srand(time(NULL));
    int random;
    switch(diff) {
        case 1: 
            printf("\n*************\nEasy Mode!!\n***************\n\n Round 1\n");
            random = (rand() % (5 - 1 + 1) + 1);
            return random;
            break;
        case 2:
            printf("\n*************\nMedium Mode!\n***************\n\n Round 1\n");
            random = (rand() % (10 - 1 + 1) + 1);
            return random;
            break;
        case 3:
            printf("\n*************\nHard Mode!\n***************\n\n Round 1\n");
            random = (rand() % (20 - 1 + 1) + 1);
            return random;
            break;
        case 4:
            printf("\n*************\nExtra Hard Mode!\n***************\n\n Round 1\n");
            random = (rand() % (50 - 1 + 1) + 1);
            return random;
            break;
        case 5:
            printf("\n*************\nIMPPPOOOSSSIBLE You are very smart after solving this!\n***************\n\n Round 1\n");
            random = (rand() % (100 - 1 + 1) + 1);
            return random;
            break;
    }
}
int mainMenu(int selected) {
    int diff;
    switch (selected) {
        case 1:
            printf("Choose a difficulty[1-5]\n");
            printf("[1]Easy Mode (1-5) (Lives 3)\n");
            printf("[2]Medium Mode (1-10)(Lives 4)\n");
            printf("[3]Hard Mode (1-20) (Lives 5)\n");
            printf("[4]Extra Hard Mode (1-50) (Lives 6)\n");
            printf("[5]Impossible Mode (1-100) (Lives 7)\n  Choose:\n");
            scanf("%d", &diff);
            return diff;
            break;
        case 2:
            printf("Rules of the game\n");
            printf("There will be a random number generated and\n");
            printf("your task is to guess the number.");
            printf("If your guess is close it will say \"HOT\" if not \"COLD\"\n\n\n\n\n");
            return mainMenu(1);
            break;
        case 3:
            exit(0);
            
    }
}

int hotCold(int randnum, int diff) {
    int num, finalnum;
    
    if (diff == 1){
    for (int i = 0; i < 3; i++) {
    printf(" Enter a number:");
    scanf("%d", &num);
    finalnum = randnum - num;
    if (finalnum == 0) {
        printf("You win!!\n\n");
        return 0;
    }
    else if ( -1 < finalnum < 1 ) {
        printf("Hot\n");
    }
    else{
        printf("Cold\n");
    }
    }
    printf("You Lose?? How?! You dum.. The number is: %d\n\n", randnum);
    return 0;
    }
    
    else {
    for (int i = 0; i < 5; i++) {
    printf(" Enter a number:");
    scanf("%d", &num);
    finalnum = randnum - num;
    if (finalnum == 0) {
        printf("You win!!");
        return 0;
    }
    else if ( -2 < finalnum < 2 ) {
        printf("SUPERHOT\n");
        if (finalnum < 0) printf("Lower\n");
        else printf("Higher\n");
    }
    else if (-5 < finalnum < 5 ) {
        printf("HOT\n");
    }
    else if (-10 < finalnum < 10) {
        printf("Mehhh...\n");
    }
    else if (-20 < finalnum < 20) {
        printf("COLD\n");
    }
    else {
        printf("Bruh are you even for real?!\n");
    }
    }
    printf("You Lose!! The number is: %d\n\n", randnum);
    return 0;
    }
}

int main() {
    int menu, randomnum, diff;
    do {
    printf("*****************************************\n");
    printf("\t\t Guess The Number!!\n");
    printf("*****************************************\n");
    printf("\n[1]Start\n[2]Rules\n[3]Exit\n");
    scanf("%d", &menu);
    diff = mainMenu(menu);
    randomnum = difficulty(diff);
    hotCold(randomnum, diff);
    } while (1);

    return 0;
}
