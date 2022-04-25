#!/usr/bin/env python3
"""
Euler Problem 5: Smallest Multiple

Code by: James Lambert
Date Updated: 20220425

2520 is the smallest number that can be divided by each of the numbers
From 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of
the numbers from 1 to 20?
"""

import functions


def main():
    """Determines smallest multiple of numbers below 20, prints the result"""
    results = False
    number = 0
    while not results:
        number += 20
        results = functions.num_checker(number, 20)
    print(number)


if __name__ == "__main__":
    main()
