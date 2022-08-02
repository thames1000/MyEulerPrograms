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
