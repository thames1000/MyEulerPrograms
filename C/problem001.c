#include <stdio.h>
#include <stdint.h>

#include <functions.h>

/*
If we list all the natural numbers below 10 that are multiples of 3 or 5, 
we get 3, 5, 6 and 9. The sum of these multiples is 23.

Find the sum of all the multiples of 3 or 5 below 1000.
*/
int main(void)
{
    uint32_t answer;
    answer = sum_of_divisible(1,1000,3,5);
    printf("%d\n",answer);
    return 0;
}