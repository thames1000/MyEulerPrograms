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
    # checks a string to see if it is a palindrome
    if string_value == string_value[::-1]:
        return True
    return False


def determine_max_palindrome(minimum, maximum):
    # creates a list of palindrome numbers from products of numbers
    # starting at the maximum, counting down until it finds a palindrome
    # multiplying by a seperate count down, starting at maximum
    numbers = []
    for first_num in range(maximum, minimum, -1):
        for second_num in range(maximum, minimum, -1):
            result = first_num * second_num
            if palindrome_check(str(result)):
                # if product is a palidrome does not need to continue counting
                # Any further number will be smaller than highest palindrome
                numbers.append(result)
                break
    return max(numbers)


print(determine_max_palindrome(100, 999))
