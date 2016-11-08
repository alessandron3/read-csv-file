#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#ifndef _WIN32
#include<curses.h> //Biblioteca para linux
#else
#include <conio.h> //Biblioteca para windows
#endif

void readFile();

int main(){
    readFile();
    return 1;
}

void readFile() {
   char buffer[1024] ;
   char *record,*line;
   int i=0,j=0;
   int mat[5][3];
   FILE *fstream = fopen("input","r");

   while((line=fgets(buffer,sizeof(buffer),fstream))!=NULL)
   {
     record = strtok(line,",");
     while(record != NULL) {
         printf("%s",record) ;    //here you can put the record into the array as per your requirement.
         mat[i][j++] = atoi(record) ;
         record = strtok(NULL,",");
     }
     ++i ;
   }
}
