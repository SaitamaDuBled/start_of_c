#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
 
int main(int argc, char* argv[]) {
   char age[3]; //l'age
   char nom[10];//nom

   sprintf(nom,"%s",argv[1]);
   write(1,"Bonjour ",8);
   write(1,nom,strlen(nom));

   sprintf(age,"%s",argv[2]);
   age[0] +=1;
   age[1] += 5;
   if(age[1] >'9'){
        age[0]=+1;
        age[1]= 'O' +(age[1] - ':');
    }
write(1, "Dans 15 ans tu auras",20);
write(1,&age,sizeof(age));
return 0;
}

