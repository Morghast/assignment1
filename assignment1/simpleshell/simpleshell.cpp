//Rob Davis's awesome simpleshell

#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <unistd.h>

using namespace std;

//system method
void mysystem(char*string)
{
    system(string);
}

//execvp method
void myexecvp(const char*string)
{
    char * arraystring[200];
    char * chunk;
    chunk = strtok(string, " ");
    int index = 0;
    while(chunk != NULL){
        index++;
        chunk = strtok(NULL, " ");
    }
}

int main ()
{
    char string[200];
    while(true){
        fgets(string, 200, stdin);
        fprintf(stdout, string);
        
        if(strncmp(string, "exit", 4) == 0){
            _exit(0);
        }
        else{
            mysystem(string);    
        }
        
    }
    return 0; 
}
