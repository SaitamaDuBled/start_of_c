#include <unistd.h>
#include <string.h>
int main (){
    char nom [20] ={0};
    write(1,"Quel est ton nom ? ",19);
    read(0,nom,sizeof(nom));//sizeof(nom) or strlen(nom)
    write(1,"Bonjour ",8);
    write(1,nom,strlen(nom));
}
