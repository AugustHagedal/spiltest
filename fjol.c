#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

int warrstr(int a);
int mageclass(int value);

int main() {
    char class[7];

    printf("Choose class\nMage or Warrior?");
    scanf("%s",&class);

    if(strcmp(class,"warrior")==0) {
        int strvalue,a,b, intellevalue;
        printf("You have chosen 'Warrior' as your class\n");
        strvalue= warrstr(a);
        printf("Your strength value is %d out of 12",strvalue);
        return 0;
    }

    else if(strcmp(class,"mage")==0)
        printf("You have chosen 'Mage' as your class\n");
    else
        printf("Lortet virker ikke");
    return 0;
}

int warrstr(int a){
    srand(time(NULL));
    int strength = (rand() % 6) + 1;
    int strength2 = (rand() % 6) + 1;
    a = strength+strength2;
    return a;
}
