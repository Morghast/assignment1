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
    
    if(string = "exit"){
        exit(0);
    }
    else{
    exit(EXIT_1);    
    }
    
    }
    return 0;
    
}
