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
    fprintf(stdout, "This is a test");
    }
    return 0;
}
