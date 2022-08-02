#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <math.h>

#include <functions.h>

/*
A palindromic number reads the same both ways. The largest palindrome
made from the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.
*/
int main(void)
{
    uint32_t number = palindrome_product(999);
    printf("Largest Prime Factor is %u\n",number);
    return 0;
}