#!/usr/bin/python3

def complex_delete(my_dictionary, value):
    tmp = my_dictionary.copy()
    for key, val in tmp.items():
        if value == val:
            my_dictionary.pop(key)
    return my_dictionary
