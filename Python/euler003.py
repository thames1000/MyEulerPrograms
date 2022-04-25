#!/usr/bin/env python3
"""
Euler Problem 3: Larget Prime Factor

Code by: James Lambert
Date Updated: 20220421

The prime factors of 13195 are 5, 7, 13 and 29.
What is the largest prime factor of the number 600851475143 ?
"""
import functions


def main():
    """
    creates a list of prime factors of 600,851,475,143
    print all prime factors, and prints the largest prime factor
    """
    big_factors = functions.factor(600851475143)
    print(big_factors)       # List of all factors
    print(max(big_factors))  # Grabs largest value from list of factors


main()
