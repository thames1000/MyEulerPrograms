#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

#include <functions.h>

/**
 * @brief A palindromic number reads the same both ways. The largest palindrome
 * made from the product of two 2-digit numbers is 9009 = 91 × 99.
 *
 * Find the largest palindrome made from the product of two 3-digit numbers.
 */
int main(void)
{
    uint32_t number = palindrome_product(999);
    printf("Largest Palindrome is %u\n", number);
    return 0;
}