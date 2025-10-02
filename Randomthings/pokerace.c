#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int randomnum() {
    srand(time(NULL));

    int numbers[] = {1, 5, 9, 12, 13, 15, 20};
    int weights[] = {1, 1, 2, 3, 2, 1, 1}; // '12' is 3x as likely.
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
    int damage = randomnum();
    switch (poke){
        case 0:
            switch (skill) {
                case 1:
                damage += 2;
                    printf("Used Black Punch!!\n");
                    if (damage > 15) printf("You now have a black eye\n\n"); else if ( damage == 1) printf("You gay\n\n");
                    printf("Dealt %d damage\n", damage);
                    return damage;
                    break;
                case 2: 
                damage += 1;
                    printf("Used Dreadlocks!\n");
                    if (damage > 10) printf("You've been stunned\n\n"); else if ( damage == 1) printf("You need to wash your hair bro\n\n");
                    printf("Dealt %d damage\n", damage);
                    return damage ;
                    break;
                    
                case 3:
                    printf("Used WeedSmoke!!\n");
                     if (damage > 10) printf("Snoop joins\n\n"); else if ( damage == 1) printf("Your bong broke\n\n");
                    printf("Restored %d health\n", damage);
                    return damage*-1;
                    break;
                case 4:
                    printf("Used Steal!\n");
                     if (damage > 10) printf("Stole 1000$\n\n"); else if ( damage == 1) printf("Your oponent is broke\n\n");
                    printf("Dealt %d damage\n", damage);
                    return damage;
                    break;
                default:
                printf("Not a skill! Bro can't read numbers\nNext player's turn\n");
                return 0;
                break;
            }
            break;
        case 1:
        switch (skill) {
                case 1:
                    printf("Used Privilege!\n");
                     if (damage > 10) printf("Supreme White privelege\n\n"); else if ( damage == 1) printf("Your oponent doesn't care\n\n");
                    printf("Dealt %d damage\n", damage);
                    return damage;
                    break;
                case 2: 
                    printf("Used Karen!\n");
                     if (damage > 10) printf("The manager comes in\n\n"); else if ( damage == 1) printf("No manager for you\n\n");
                    printf("Dealt %d damage\n", damage);
                    return damage;
                    break;
                case 3:
                    printf("Used Detain!\n");
                     if (damage > 10) printf("Justice!!\n\n"); else if ( damage == 1) printf("The police laughed at you\n\n");
                    printf("Dealt %d damage\n", damage);
                    return damage;
                    break;
                case 4:
                    printf("Used Capitalism!\n");
                     if (damage > 10) printf("MONEY MONEY MONEH!\n\n"); else if ( damage == 1) printf("broke\n\n");
                    printf("Restored %d health\n", damage);
                    return damage*-1;
                    break;
                default:
                printf("Not a skill! Bro can't read numbers\nNext player's turn\n");
                return 0;
                break;
            }
            break;
        case 2:
        switch (skill) {
                case 1:
                    printf("Used Numbers!\n");
                     if (damage > 10) printf("CALCULUS!!!\n\n"); 
                    printf("Dealt %d damage\n", damage);
                    return damage;
                    break;
                case 2: 
                    printf("Used Monosodiumglutamate!!\n");
                     if (damage > 10) printf("Haiyaaah\n\n"); else if ( damage == 1) printf("Your cholesterol has risen\n\n");
                    printf("Dealt %d damage\n", damage);
                    return damage;
                    break;
                case 3:
                    printf("Used Squint!\n");
                     if (damage > 10) printf("chingchong\n\n"); else if ( damage == 1) printf("bro is blind\n\n");
                    printf("Dealt %d damage\n", damage);
                    return damage;
                    break;
                case 4:
                    printf("Used KungFu!\n");
                     if (damage > 10) printf("Dragon warrior\n\n"); else if ( damage == 1) printf("are you drunk?\n\n");
                    printf("Dealt %d damage\n", damage);
                    return damage;
                    break;
                default:
                printf("Not a skill Bro can't read numbers\nNext player's turn\n!\n");
                return 0;
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
        if (sdamage < 0) {
        p1health -= sdamage;
        } else { p2health -= sdamage;} 
        printf("\n\n");
        turn = !turn;
        if (p2health < 0) break;
        printf("Player 2 turn. Current Health:%d\n Choose a Skill:\n", p2health);
        skillList(pr2);
        scanf("%d", &skill);
        sdamage = skills(pr2, skill);
        if (sdamage < 0) {
        p2health -= sdamage;
        } else { p1health -= sdamage;} 
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
