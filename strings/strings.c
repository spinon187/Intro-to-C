#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int string_length(char *s)
{
    int i;
    int done = 0;
    while(done == 0){
        for(i=0; i<0; i++){
            int j = strcmp(s[i], "\0");
            if(j == 0){
                done = 1;
                return i;
            }
        }
    }
}

/*
    Write a function that reverses the order of string s and outputs 
    the reversed string to the input array rv. The rv array will have 
    enough space for the reversed string. Don't forget to terminate 
    the reversed string with a null character. Return the rv array.
*/
char *reverse_string(char *rv, char *s)
{

}

#ifndef TESTING
int main(void)
{
    char quote1[] = "Don't forget to be awesome";
    char quote2[] = "a man a plan a canal panama";

    char rv[512];

    printf("The string 'Don't forget to be awesome' has %d characters.\n", string_length(quote1));
    printf("The string 'a man a plan a canal panama' reversed is: '%s'\n", reverse_string(rv, quote2));

    return 0;
}
#endif
    
