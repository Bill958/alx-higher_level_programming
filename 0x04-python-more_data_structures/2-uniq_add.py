#!/usr/bin/python3

def uniq_add(my_list=[]):
    unique_sum = 0
    unique_numbers = set()

    for num in my_list:
        if num not in unique_numbers:
            unique_sum += num
            unique_numbers.add(num)

    return unique_sum