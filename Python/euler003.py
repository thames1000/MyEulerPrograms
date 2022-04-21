#!/usr/bin/env python3
##############################################################################
# Program by: James Lambert                                                  #
# Date Updated: 20220421                                                     #
##############################################################################
# The prime factors of 13195 are 5, 7, 13 and 29.                            #
#                                                                            #
# What is the largest prime factor of the number 600851475143 ?              #
##############################################################################
import functions


def main():
    big_factors = functions.factor(600851475143)
    print(big_factors)       # List of all factors
    print(max(big_factors))  # Grabs largest value from list of factors


if __name__ == "__main__":
    main()
