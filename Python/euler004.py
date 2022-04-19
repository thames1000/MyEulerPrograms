#!/usr/bin/env python3
##############################################################################
# Program by: James Lambert                                                  #
# Date Updated: 20220419                                                     #
##############################################################################
# A palindromic number reads the same both ways. The largest palindrome      #
# made from the product of two 2-digit numbers is 9009 = 91 × 99.            #
#                                                                            #
# Find the largest palindrome made from the product of two 3-digit numbers.  #
##############################################################################

def palindrome_check(string_value):
    if string_value == string_value[::-1]:
        return True
    return False


def determine_max_palindrome(minimum, maximum):
    numbers = []
    for first_num in range(maximum, minimum, -1):
        for second_num in range(maximum, minimum, -1):
            result = first_num * second_num
            if palindrome_check(str(result)):
                numbers.append(result)
                break
    return max(numbers)


print(determine_max_palindrome(100, 999))
