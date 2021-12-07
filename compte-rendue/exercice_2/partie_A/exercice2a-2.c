#include <stdio.h>
#include <string.h>
#include <unistd.h>


void main(){

    char nom[20];
    char age[3];
    write (1, "Quel est ton nom ? ", 20); 
    //read (0, nom, 20);
    nom[read (0, nom, 20)-1] = 0;

    write (1, "Quel est ton age ? ", 20); 
    //read (0, age, sizeof(age)+1);
    age[read (0, age, sizeof(age)+1) -1] = 0;
    age[0]+=1;
    age[1]+=5;
    if(age[1] > '9'){
        age[0]+=1;
        age[1]-=10;
    }  

    write (1, "Bonjour ", 9); 
    write (1, nom, strlen(nom));
    write (1, " dans 15 ans tu auras ", 23); 
    write (1, age, strlen(age));
    write (1, " ans\n", 6); 

}
