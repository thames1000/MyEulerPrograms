#include <math.h>
#include <stdint.h>
#include <stdio.h>

/**
 * @brief Adds all numbers divisible by either divisor1 or divisor 2 between
 * low_num and high_num
 *
 * @param low_num minimum value
 * @param high_num maximum value
 * @param divisor1 one of the divisors
 * @param divisor2 the other divisor
 * @return uint32_t (sum of all evenly divisible numbers)
 */
uint32_t sum_of_divisible(uint32_t low_num, uint32_t high_num,
                          uint32_t divisor1, uint32_t divisor2)
{
    uint32_t total = 0;
    if (low_num < 1)
    {
        fprintf(stderr, "low_num must be greater than 0");
    }
    else if (high_num < low_num)
    {
        fprintf(stderr, "high_num must be greater than low_num");
    }
    else
    {
        for (uint32_t idx = low_num; idx < high_num; idx++)
        {
            if (0 == idx % divisor1 || 0 == idx % divisor2)
            {
                total += idx;
            }
        }
    }
    return total;
}

/**
 * @brief Adds all fibonnacci numbers below max_num
 *
 * @param max_num - maximum number to be added
 * @return uint32_t (sum of fibonnacci numbers below max_num)
 */
uint32_t even_fibonnacci_sum(uint32_t max_num)
{
    uint32_t total = 2;
    uint32_t prior = 1;
    uint32_t current = 2;
    uint32_t temp = 0;
    while (current < max_num)
    {
        temp = current;
        current += prior;
        prior = temp;
        if (0 == current % 2)
        {
            total += current;
        }
    }
    return total;
}

/**
 * @brief Checks if a number is prime
 *
 * @param num - number to check
 * @return int (returns 0 if True, otherwise returns number that num is evenly
 * divisible by)
 */
int is_prime(uint64_t num)
{
    int return_val = 0;
    if (0 == num % 2)
    {
        return_val = 2;
        goto END;
    }

    for (int num_check = 3; num_check < (int)(sqrt(num)) + 1; num_check += 2)
    {
        if (0 == num % num_check)
        {
            return_val = num_check;
            break;
        }
    }

END:
    return return_val;
}

/**
 * @brief Prints all prime factors of a number
 *
 * @param number - number wanting to be factored
 * @return uint64_t (Largest Prime Factor returned)
 */

uint64_t prime_factors(uint64_t number)
{
    uint64_t answer = number;
    uint64_t factor = 2;
    printf("[");
    while (0 == answer % factor)
    {
        answer /= factor;
        printf("%lu%c%c", factor, (1 != answer) ? ',' : ']',
               (1 != answer) ? ' ' : '\n');
    }
    if (answer == 1)
    {
        answer = 2;
    }
    factor += 1;
    while (factor < (uint64_t)(sqrt(number)) + 1)
    {
        if (0 == answer % factor)
        {
            answer /= factor;
            printf("%lu, ", factor);
        }
        else
        {
            factor += 2;
        }
        if (0 == is_prime(answer))
        {
            printf("%lu]\n", answer);
            break;
        }
    }
    return answer;
}

/**
 * @brief Easy way of getting powers of 10
 *
 * @param exponent exponent (max is 9)
 * @return uint32_t (10 ^ n)
 */
static uint32_t quick_pow10(uint32_t exponent)
{
    if (exponent > 9)
    {
        fprintf(stderr, "exponent must be less than 10");
        return 1;
    }
    static uint32_t pow10[10] = {1,         10,        100,     1000,
                                 10000,     100000,    1000000, 10000000,
                                 100000000, 1000000000};

    return pow10[exponent];
}

/**
 * @brief Checks if a number is a palindrome
 *
 * @param number
 * @return uint32_t (0 if True, 1 if False)
 */
static uint32_t palindrome_check(uint32_t number)
{
    /**
     * compare1 - Used to keep one digit of number starting from the front.
     * compare2 - Used to keep one digit of number starting from the end.
     */
    uint32_t compare1 = 0;
    uint32_t compare2 = 0;

    uint32_t palindrome = 0;           // 0 if true, 1 if false
    uint32_t size = log10(number) + 1; // Gets length of number
    for (uint32_t i = 1; i < (size / 2) + 1; i++)
    {
        /**
         * Mathematical Proof for checking if a number is a palindrome
         */
        compare1 = (number / (quick_pow10(size - i))) % 10;
        compare2 = (number % (quick_pow10(i))) / (quick_pow10(i - 1));

        if (compare1 != compare2)
        {
            palindrome = 1;
            break;
        }
    }
    return (palindrome);
}

/**
 * @brief Find the largest palindrome made from the product of two numbers
 * below maximum. Only checks top 10% of maximum for simplicity, can be changed
 * to include more, but this is faster and gets the correct answer most of the
 * time.
 *
 * @param maximum
 * @return uint32_t (0 if True, 1 if False)
 */
uint32_t palindrome_product(uint32_t maximum)
{
    for (uint32_t i = maximum; i > (maximum - (maximum / 10)); i--)
    {
        for (uint32_t j = maximum; j > (maximum - (maximum / 10)); j--)
        {
            if (0 == palindrome_check(i * j))
            {
                return i * j;
            }
        }
    }
    return 0;
}