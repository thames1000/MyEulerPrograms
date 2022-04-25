#!/usr/bin/env python3
"""
Euler Problem 6

Code by: James Lambert
Last Updated: 20220425

The sum of the squares of the first ten natural numbers is,
          1 ** 2 + 2 ** 2 + ... + 10 ** 2 = 385
The square of the sum of the first ten natural numbers is,
          (1 + 2 + ... + 10) ** 2 = 55 ** 2 = 3025
Hence the difference between the sum of the squares of the first ten
natural numbers and the square of the sum is .
          3025 - 385 = 2640
Find the difference between the sum of the squares of the first one
hundred natural numbers and the square of the sum.
"""
import functions


def main():
    sum_of_square = functions.sum_of_squares(100)
    square_of_sum = functions.square_of_sum(100)
    result = square_of_sum - sum_of_square
    print(result)


main()
