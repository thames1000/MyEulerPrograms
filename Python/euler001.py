#!/usr/bin/env python3
#############################################################################
# Program by: James Lambert                                                 #
# Date Updated: 20220419                                                    #
#############################################################################
# Euler Problem 1 in Python                                                 #
# Multiples of 3 or 5                                                       #
# If we list all the natural numbers below 10 that are multiples of 3 or 5, #
# we get 3, 5, 6 and 9. The sum of these multiples is 23.                   #
# Find the sum of all the multiples of 3 or 5 below 1000.                   #
#############################################################################

def sum_of_multiples(max):
    # Finds the multiples of 3 or 5, below the variable 'max'
    # and adds them together to return variable 'total'
    total = 0
    for number in range(max):
        if number % 3 == 0:  # multiple of 3
            total += number
        elif number % 5 == 0:  # multiple of 5
            total += number
    return total


answer = sum_of_multiples(1000)
print(answer)
