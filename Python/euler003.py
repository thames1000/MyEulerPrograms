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
    for num_check in range(2, int(number ** 0.5) + 1):
        if number % num_check == 0:
            return num_check, False
    return "None", True


def factor(big_number):
    factor_list = []
    temp_num = big_number
    temp = is_prime(temp_num)
    while not temp[1]:
        factor_list.append(temp[0])
        temp_num = temp_num // temp[0]
        temp = is_prime(temp_num)
    factor_list.append(temp_num)
    return factor_list


big_factors = factor(600851475143)
print(big_factors)
print(max(big_factors))
