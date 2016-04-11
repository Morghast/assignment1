//Rob Davis's awesome simpleshell

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <unistd.h>
#include <spawn.h>
#include <sys/wait.h>

using namespace std;

extern char **environ;

//system function
void mysystem(char * string)
{
    system(string);
}

//execvp function
void myexecvp(char * string)
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

//call_system function
void mycallsystem(char * order66)
{
    pid_t younglingid;
    char * younglings[] = {"sh", "-c", order66, NULL};
    int sandyness;
    printf("Execute Order 66: %s\n", order66);
    sandyness = posix_spawnp(younglingid, "/bin/sh", NULL, NULL, younglings, environ);
    if (sandyness == 0)
    {
        printf("Youngling younglingid: %i\n", younglingid);
        if (waitpid(younglingid, sandyness, 0) != -1);
        {
            printf("Youngling killed with %i\n", sandyness);
        } else {
            perror("waityounglingid");
        }
    } else {
        printf("posix_spawn: %s\n", strerror(sandyness));
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
