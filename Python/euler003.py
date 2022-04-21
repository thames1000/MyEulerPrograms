#!/usr/bin/env python3
##############################################################################
# Program by: James Lambert                                                  #
# Date Updated: 20220421                                                     #
##############################################################################
# The prime factors of 13195 are 5, 7, 13 and 29.                            #
#                                                                            #
# What is the largest prime factor of the number 600851475143 ?              #
##############################################################################
def is_prime(number):
    """
    Takes one paramater 'number', determines if that number is prime.
    If False, returns (int that 'number' is evenly divisible by, False).
    If True, returns (0, True).

    returns tuple(int, boolean)
    """
    result = (0, True)
    for num_check in range(2, int(number ** 0.5) + 1):
        if number % num_check == 0:
            result = (num_check, False)
            break
    return result


def factor(big_number):
    """
    Takes one paramater 'big_number', and returns a list of the prime
    factors of that number

    returns [int,**]
    """
    factor_list = []
    temp_num = big_number               # number we can change
    temp = is_prime(temp_num)           # tuple results from is_prime
    while not temp[1]:  # temp[1] is a boolean, as long as it is True
        factor_list.append(temp[0])     # adding factor to the factor_list
        temp_num = temp_num // temp[0]  # integer quotient
        temp = is_prime(temp_num)       # changing temp to is_prime of above
    factor_list.append(temp_num)
    return factor_list


big_factors = factor(600851475143)
print(big_factors)       # List of all factors
print(max(big_factors))  # Grabs largest value from list of factors
