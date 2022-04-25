#!/usr/bin/env python3
"""
Euler Problem 1: Multiples of 3 or 5

Code by: James Lambert
Date Updated: 20220419

If we list all the natural numbers below 10 that are multiples of 3 or 5,
we get 3, 5, 6 and 9. The sum of these multiples is 23.
Find the sum of all the multiples of 3 or 5 below 1000.

"""
import functions


def main():
    """
    Determines all numbers divisible by 3 or 5 below 1000
    and prints the sum of them
    """
    answer = functions.check_multiples(1000, 3, 5)
    print(sum(answer))


main()
