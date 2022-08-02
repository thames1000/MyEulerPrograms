#include <stdio.h>
#include <stdint.h>
#include <math.h>

uint32_t sum_of_divisible(uint32_t low_num, uint32_t high_num, uint32_t divisor1, uint32_t divisor2)
{
    uint32_t total=0;
    if (low_num < 1)
    {
        fprintf(stderr,"low_num must be greater than 0");
    }
    else if (high_num < low_num)
    {
        fprintf(stderr,"high_num must be greater than low_num");
    }
    else
    {
        for (uint32_t idx = low_num; idx<high_num; idx++)
        {
            if (0==idx%divisor1 || 0==idx%divisor2)
            {
                total += idx;
            }
        }
    }
    return total;
}

uint32_t even_fibonnacci_sum (uint32_t max_num)
{
    uint32_t total = 2;
    uint32_t prior = 1;
    uint32_t current = 2;
    uint32_t temp = 0;
    while (current<max_num)
    {
        temp = current;
        current+=prior;
        prior=temp;
        if (0==current%2)
        {
            total+=current;
        }
    }
    return total;
}


int is_prime(uint64_t num)
{
    int return_val = 0;
    if (0 == num % 2)
    {
        return_val=2;
        goto END;
    }

    for(int num_check = 3; num_check < (int)(sqrt(num)) + 1; num_check += 2)
    {
        if (0 == num % num_check)
        {
            return_val=num_check;
            break;
        }
    }

    END:
    return return_val;
}



uint64_t prime_factors(uint64_t number)
{
    uint64_t answer = number;
    uint64_t factor = 2;
    printf("[");
    while (0 == answer % factor)
    {
        answer /= factor;
        printf("%lu%c%c",factor,(1 != answer)? ',':']',(1 != answer)? ' ':'\n');
    }
    if (answer == 1)
    {
        answer = 2;
    }
    factor+=1;
    while (factor < (uint64_t)(sqrt(number))+1)
    {
        if (0 == answer % factor)
        {
            answer /= factor;
            printf("%lu, ",factor);
        }
        else
        {
            factor += 2;
        }
        if (0 == is_prime(answer))
        {
            printf("%lu]\n",answer);
            break;
        }
    }
    return answer;
}


static uint32_t quick_pow10(uint32_t n)
{
    static uint32_t pow10[10] = {
        1, 10, 100, 1000, 10000, 
        100000, 1000000, 10000000, 100000000, 1000000000
    };

    return pow10[n]; 
}

static uint32_t palindrome_check(uint32_t number)
{
    uint32_t compare1 = 0;
    uint32_t compare2 = 0;
    uint32_t palindrome = 0;
    uint32_t size = log10(number)+1;
    for (uint32_t i = 1; i < (size/2)+1; i++)
    {
        compare1 = (number/(quick_pow10(size-i))) % 10;
        compare2 = (number % (quick_pow10(i))) / (quick_pow10(i-1));
        if (compare1!=compare2)
        {
            palindrome = 1;
            break;
        }
    }
    return (palindrome);
}

uint32_t palindrome_product(uint32_t maximum)
{
    for (uint32_t i = maximum; i > (maximum - (maximum / 10)); i-- )
    {
        for (uint32_t j = maximum; j > (maximum - (maximum / 10)); j--)
        {
            if (0 == palindrome_check(i * j))
            {
                return i*j;
            }
        }
    }
    return 0;
}