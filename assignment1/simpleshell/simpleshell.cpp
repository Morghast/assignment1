//

#include <stdlib.h>
#include <stdio.h>
#include <iostream>

using namespace std;

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
            _exit(1);    
        }
        
        }
        return 0; 
}
