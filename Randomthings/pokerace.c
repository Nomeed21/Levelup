#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int randomnum() {
    srand(time(NULL));

    int numbers[] = {5, 9, 12, 13, 15};
    int weights[] = {1, 2, 3, 1, 1}; // '12' is 3x as likely.
    int size = sizeof(numbers) / sizeof(numbers[0]);

    // Calculate the total weight
    int totalWeight = 0;
    for (int i = 0; i < size; i++) {
        totalWeight += weights[i];
    }

    // Generate a random number from 0 to totalWeight-1
    int randomNumber = rand() % totalWeight;

    // Find which number the random weight corresponds to
    int selectedNumber = 0;
    for (int i = 0; i < size; i++) {
        if (randomNumber < weights[i]) {
            selectedNumber = numbers[i];
            break;
        }
        randomNumber -= weights[i];
    }
    return selectedNumber;
}

int health(int poke) {
    switch (poke) {
        case 0: 
            return 50;
            break;
        case 1:
            return 45;
            break;
        case 2:
            return 47;
            break;    
        
    }
}
int pokerace(char player[10]){
    int choice = strcmp(player, "Charnigger");
    switch (choice) {
        case 0:
            printf("You chose Charnigger\n");
            return 0;
            break;
        case 20:
            printf("You chose Whiteturtle\n");
            return 1;
            break;
        case -1:
            printf("You chose Bulbasian\n");
            return 2;
            break;
        default:
            printf("Invalid pokerace!!");
            break;
    }
}
int skills(int poke, int skill){
    switch (poke){
        case 0:
            switch (skill) {
                case 1:
                    printf("Used Black Punch!!\n");
                    printf("Dealt %d damage\n", randomnum());
                    return randomnum() +2;
                    break;
                case 2: 
                    printf("Used Dreadlocks!\n");
                    printf("Dealt %d damage\n", randomnum());
                    return randomnum() +1;
                    break;
                    
                case 3:
                    printf("Used WeedSmoke!!\n");
                    printf("Dealt %d damage\n", randomnum());
                    return randomnum()*-1;
                    break;
                case 4:
                    printf("Used Steal!\n");
                    printf("Dealt %d damage\n", randomnum());
                    return randomnum()*0;
                    break;
                default:
                printf("Not a skill!\n");
                break;
            }
            break;
        case 1:
        switch (skill) {
                case 1:
                    printf("Used Privilege!\n");
                    printf("Dealt %d damage\n", randomnum());
                    return randomnum();
                    break;
                case 2: 
                    printf("Used Karen!\n");
                    printf("Dealt %d damage\n", randomnum());
                    return randomnum();
                    break;
                case 3:
                    printf("Used Detain!\n");
                    printf("Dealt %d damage\n", randomnum());
                    return randomnum();
                    break;
                case 4:
                    printf("Used Capitalism!\n");
                    printf("Restored %d health\n", randomnum());
                    return randomnum()*-1;
                    break;
                default:
                printf("Not a skill!");
                break;
            }
            break;
        case 2:
        switch (skill) {
                case 1:
                    printf("Used Numbers!\n");
                    printf("Dealt %d damage\n", randomnum());
                    return randomnum();
                    break;
                case 2: 
                    printf("Used Monosodiumglutamate!!\n");
                    printf("Dealt %d damage\n", randomnum());
                    return randomnum()*-1;
                    break;
                case 3:
                    printf("Used Squint!\n");
                    printf("Dealt %d damage\n", randomnum());
                    return randomnum();
                    break;
                case 4:
                    printf("Used KungFu!\n");
                    printf("Dealt %d damage\n", randomnum());
                    return randomnum()+6;
                    break;
                default:
                printf("Not a skill!\n");
                break;
            }
        break;
    }
}
void skillList(int poke){
    switch (poke){
        case 0:
            printf("  BlackPunch\n  DreadLocks\n  WeedSmoke\n  Steal\n");
            break;
        case 1:
            printf("  Privilege\n  Karen\n  Detain\n  Capitalism\n");
            break;
        case 2:
            printf("  Numbers\n  Monosodiumglutamate\n  Squint\n  Kungfu\n");
            break;
        case 4:
            break;
        default:
            printf("Not a skill!");
            break;
    }
}

int healthsys(int turn, int p1, int p2, int skill) {
    if (p1 == 0 && p2 == 0) {
        if (turn == 0) {
            switch (skill) {
                case 1:
                     
                    printf("\nNot very Effective!.. \n ");
                    break;
                case 2:
                    break;
                case 3:
                    break; 
                case 4:
                    break;
            }
        }
        else if (turn == 1) {
                switch (skill) {
                case 1:
                    break;
                case 2:
                    break;
                case 3:
                    break; 
                case 4:
                    break;
        }
        }
    } 
    else if ( p1 == 0 && p2 == 1) {
        
    }
    else if ( p1 == 0 && p2 == 2){
        
    }
    else if (p1 == 1 && p2 == 2) {
        
    }
    else if (p1 == 1 && p2 == 1) {
        
    }
    else if (p1 == 2 && p2 == 2) {
        
    }
}

int main() {
    char player1[50], player2[50];
    int pr1, pr2, p1health, p2health, sdamage;
    int turn = 0;
    
    printf("Player1: Choose your Pokerace:\n");
    printf("Charnigger (Blackpunch, DreadLocks, WeedSmoke, Steal)\n");
    
    printf("Whiteturtle (Privilege, Karen, Detain, capitalism)\n");
    
    printf("Bulbasian (Numbers, Monosodiumglutamate, squint, KungFu)\n");
    
    scanf("%s", player1);
    pr1 = pokerace(player1);
    printf("\n\nPlayer2: Choose your Pokemon:\n");
    printf("Charnigger\nWhiteturtle\nBulbasian\n");
    scanf("%s", player2);
    pr2 = pokerace(player2);
    p1health = health(pr1);
    p2health = health(pr2);
    
    printf("\n\n%s vs %s", player1, player2);
    printf("\n\n\nFight!!!!\n");
    int skill;
    while (p1health > 0 || p2health > 0 ) {
        printf("Player 1 turn. Current Health:%d\n Choose a Skill:\n", p1health);
        skillList(pr1);
        scanf("%d", &skill);
        sdamage = skills(pr1, skill);
        p2health -= sdamage;
        printf("\n\n");
        turn = !turn;
        if (p2health < 0) break;
        printf("Player 2 turn. Current Health:%d\n Choose a Skill:\n", p2health);
        skillList(pr2);
        scanf("%d", &skill);
        sdamage = skills(pr2, skill);
        p1health -= sdamage;
        turn = !turn;
        printf("\n\n");
    }
    if (p1health < 0) {
        printf("Player 2 Win!!");
    }
    else {
        printf("Player 1 Win!!");
    }
    
    
    return 0;
}
