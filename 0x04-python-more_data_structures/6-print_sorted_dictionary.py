#!/usr/bin/python3

def print_sorted_dictionary(my_dictionary):
    list_ord = list(my_dictionary.keys())
    list_ord.sort()
    for i in list_ord:
        print("{}: {}".format(i, my_dictionary.get(i)))
