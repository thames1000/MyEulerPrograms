
def check_multiples(max, *nums):
    """
    Finds the multiples of any number of numbers, below the positive number
    'max' and adds them together to return the list, 'list_of_multiples'
    """
    list_of_multiples = []
    for number in range(1, max):
        for param in nums:
            if number % param == 0:
                list_of_multiples.append(number)
                break
    return list_of_multiples


def is_prime(number):
    """
    Takes one paramater 'number', determines if that number is prime.
    If False, returns (int that 'number' is evenly divisible by, False).
    If True, returns (0, True).

    returns tuple(int, boolean)
    """
    result = (0, True)
    for num_check in range(2, int(number ** 0.5) + 1):
        if number % num_check == 0:
            result = (num_check, False)
            break
    return result


def factor(big_number):
    """
    Takes one paramater 'big_number', and returns a list of the prime
    factors of that number

    returns [int,**]
    """
    factor_list = []
    temp_num = big_number               # number we can change
    temp = is_prime(temp_num)           # tuple results from is_prime
    while not temp[1]:  # temp[1] is a boolean, as long as it is True
        factor_list.append(temp[0])     # adding factor to the factor_list
        temp_num = temp_num // temp[0]  # integer quotient
        temp = is_prime(temp_num)       # changing temp to is_prime of above
    factor_list.append(temp_num)
    return factor_list


def list_fibonacci_numbers(maximum):
    """
    creates a list of fibonacci numbers below variable 'maximum'
    keeps track of a total by adding numbers that are even
    """
    fib_numbers = [1, 2]   # starting fibonacci numbers
    total = 2              # starting total (accounting for the 2)
    while True:            # runs until code stops it from working
        high_num = fib_numbers[-1] + fib_numbers[-2]
        if (high_num <= maximum):
            fib_numbers.append(high_num)
        else:
            break
    return fib_numbers


def palindrome_check(string_value):
    """
    checks a string to see if it is a palindrome
    """
    result = False
    if string_value == string_value[::-1]:
        result = True
    return result


if __name__ == "__main__":
    """
    Space for testing
    """
    results = check_multiples(1000, 3, 5)
    print(sum(results))
