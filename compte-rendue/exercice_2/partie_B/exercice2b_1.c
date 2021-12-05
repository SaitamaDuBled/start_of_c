// C program to illustrate close system Call 
#include<stdio.h> 
#include <fcntl.h> 
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <unistd.h>
int main() 
{ 
    //creation/ouverture du fichier
    int fd = open("foo.txt", O_RDONLY | O_WRONLY); 
    if (fd < 0) 
    { 
        perror("c1"); 
        exit(1); //<---c'est un return sans rien retourner 
    } 
    //printf("Ouverture du fichier", fd); 
    //code a mettre dans le fichier
    char nom [20] ={0};
    write(1,"Quel est ton nom ? ",19);
    read(0,nom,sizeof(nom));//sizeof(nom) or strlen(nom)
    write(fd,"Bonjour ",8);
    write(fd,nom,strlen(nom));
    // fermeture du fichier
    if (close(fd) < 0) 
    { 
        perror("c1"); 
        exit(1); 
    } 
    //printf("closed the fd.\n"); 
}