#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

#include <functions.h>

/*
The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?
*/
int main(void)
{
    uint64_t number = prime_factors(600851475143);
    printf("Largest Prime Factor is %lu\n", number);
    return 0;
}