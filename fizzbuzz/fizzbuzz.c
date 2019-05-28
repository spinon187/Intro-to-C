#include <stdio.h>


int fizzbuzz(int n)
{
    int i;
    for(i=1; i<=n; i++)
    {
        if ((i % 3 == 0) && (i % 5 != 0))
            printf("Fizz\n");
        else if ((i % 5 == 0) && (i % 3 != 0))
            printf("Buzz\n");
        else if ((i % 3 == 0) && (i % 5 == 0))
            printf("FizzBuzz\n");
    }

    return 0;
}

#ifndef TESTING
int main(void)
{
    fizzbuzz(20);

    return 0;
}
#endif
