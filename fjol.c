#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

int warrstr(int a);
int warrintelle(int a);
int magestr(int a);
int mageintelle(int a);

int main() {
    char class[7],name[15];
    char ask;
    int  strvalue,a,intellevalue,coin=50,health=5;

    printf("Choose class one of the following classes:\n'mage' or 'warrior'\n>");
    scanf("%s",&class);

    if(strcmp(class,"warrior")==0) {
        printf("You have now chosen 'Warrior' as your class!\n");
        strvalue= warrstr(a);
        intellevalue= warrintelle(a);
        printf("Your strength value is %d!!\nYour intellect value is %d...\n",strvalue,intellevalue);
        printf("What is your name warrior?\n");
        scanf("%s",&name);
        printf("Ahhh... %s, a fine name for a warrior!!",name);}

    else if(strcmp(class,"mage")==0) {
        printf("You have now chosen 'Mage' as your class!\n");
        strvalue= magestr(a);
        intellevalue=mageintelle(a);
        printf("Your intellect value is %d!\n Your strength value is %d...\n",intellevalue,strvalue);
        printf("What is your name mage?\n");
        scanf("%s",&name);
        printf("Ahhh... %s, an excellent name for a mage..\n",name);
    }

    printf("You spot a shiny object in the distance..\n");
    printf("Will you check it out?\n'y' or 'n'");
    scanf(" %c", &ask);
    if(ask=='y'){
        coin += 5, health -= 1;
        printf("\nYou stub your toe on your way therefore losing 1 health\n");
        printf("When you arrive you discover that the shiny object was a pearl!\n");
        printf("You have %d health points left.. But you now have %d coins!",health, coin);
    }
    else if(ask=='n') {
        printf("You continue on your path\n");
        printf("You have %d health points and %d coins.\n",health,coin);
    }
}

int warrstr(int a){
    srand(time(NULL));
    int strength = (rand() % 8) + 1;
    int strength2 = (rand() % 6) + 1;
    a = strength+strength2;
    return a;
}
int warrintelle(int a){
    srand(time(NULL));
    int intelle = (rand() % 5) + 1;
    a=intelle;
    return a;
}
int magestr(int a){
    srand(time(NULL));
    int strength = (rand() % 5) + 1;
    a=strength;
    return a;
}
int mageintelle(int a){
    srand(time(NULL));
    int intelle1 = (rand() % 8) + 1;
    int intelle2 = (rand() % 6) + 1;
    a = intelle1+intelle2;
    return a;
}
