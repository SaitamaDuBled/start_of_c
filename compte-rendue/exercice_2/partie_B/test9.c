#include<stdio.h> 
#include <fcntl.h> 
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <unistd.h>

int main() {
    char nom [20] ={0};
    char age[3]={0};
    char premierPHRASE[]="bonjour ";
    char deuxiemPHRASE[]="dans 15 ans tu auras ";
    
    write(1,"Quel est ton nom ? ",19);
    read(0,nom,sizeof(nom));

    write(1, "Quel age as tu ? ",17);
    read(0,age,sizeof(age));
    //CODAGE
    if (age[1]>9){// quand premier charactere >9
        age[0] = age[0]+1; //ajouter 1 au charactere 0
        age[1] = age[1]+5; //ajouter 5 au charactere 1
        
    }
    //CORRECTION D'ERREUR 
    if (age[1]==':'|age[1]==';'|
    age[1]=='<'|age[1]=='>'|
    age[1]==':'|age[1]=='='|
    age[1]=='/') {//Si dépassement éffectué alors        
            age[0]++;     
            if (age[1]=='=') {
                age[1]='4';
            }
            if (age[1]==':') {
                age[1]= '0';
            }
            if (age[1]==';') {
                age[1]='2';
            }
            if (age[1]=='<') {
                age[1]='3';
            }
            if (age[1]=='>') {
                age[1]='5';
            }
            if (age[1]==':') {
                age[1]='1';
            }
            if (age[1]>5) {
                age[1]--;
            }
            if (age[1]=='/') {
                age[1]='0';
            }
        }
    //afficher la phrase
    
    write(1,premierPHRASE, sizeof(premierPHRASE));
    write(1,nom,sizeof(nom));
    write(1,deuxiemPHRASE,sizeof(deuxiemPHRASE));
    //afficher la chaine de charactere age
    write(1,age, sizeof(age));
}