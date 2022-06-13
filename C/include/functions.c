#include <stdio.h>

int sum_of_divisible(int low_num, int high_num, int divisor1, int divisor2)
{
    int total=0;
    if (low_num <=0)
    {
        fprintf(stderr,"low_num must be greater than 0");
    }
    else if (high_num<low_num)
    {
        fprintf(stderr,"high_num must be greater than low_num");
    }
    else
    {
        for (int idx = low_num; idx<high_num; idx++)
        {
            if (idx%divisor1==0 || idx%divisor2==0)
            {
                total += idx;
            }
        }
    }
    return total;
}

int even_fibonnacci_sum (int max_num)
{
    int total = 2;
    int prior = 1;
    int current = 2;
    int temp = 0;
    while (current<max_num)
    {
        temp = current;
        current+=prior;
        prior=temp;
        if (current%2==0)
        {
            total+=current;
        }
    }
    return total;
}