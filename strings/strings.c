#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int string_length(char *s)
{
    int i = 0;
    while(*(s+i) != '\0'){
        i++;
    }
    return i;
}

char *reverse_string(char *rv, char *s)
{
    int count = string_length(s);
    int i = 0;
    while (count >=1){
        count--;
        *(rv + i) = *(s + count);
        i++;
    }
    *(rv + i) = '\0';
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
    
