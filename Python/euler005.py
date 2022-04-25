#!/usr/bin/env python3
##############################################################################
# Program by: James Lambert                                                  #
# Date Updated: 20220425                                                     #
##############################################################################
# 2520 is the smallest number that can be divided by each of the numbers     #
# from 1 to 10 without any remainder.                                        #
#                                                                            #
# What is the smallest positive number that is evenly divisible by all of    #
# the numbers from 1 to 20?                                                  #
##############################################################################

import functions


def main():
    results = False
    number = 20
    while not results:
        results = functions.num_checker(number, 20)
        number += 20
    print(number - 20)


if __name__ == "__main__":
    main()
