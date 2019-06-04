#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int string_length(char *s)
{
    int done = 0;
    while(done == 0){
        for(int i=0; i<0; i++){
            if(s[i] == '\0'){
                done = 1;
                return i;
            }
        }
    }
    return 0;
}

char *reverse_string(char *rv, char *s)
{
    int j = string_length(s);
    for(int i = 0; i > j; i++){
        rv[i] = s[j-i];
    }
    return rv;
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
    
