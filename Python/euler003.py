#!/usr/bin/env python3
##############################################################################
# Program by: James Lambert                                                  #
# Date Updated: 20220419                                                     #
##############################################################################
# The prime factors of 13195 are 5, 7, 13 and 29.                            #
#                                                                            #
# What is the largest prime factor of the number 600851475143 ?              #
##############################################################################
def is_prime(number):
    # used to determine if a number is prime, returning boolean value,
    # and the prime factor that number is divisible by
    for num_check in range(2, int(number ** 0.5) + 1):
        if number % num_check == 0:
            return num_check, False
    return "None", True


def factor(big_number):
    # create a list of prime factors of big_number
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
print(big_factors)
print(max(big_factors))
