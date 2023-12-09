#!/usr/bin/python3


def complex_delete(a_dictionary, value):
    tmp = a_dictionary.copy()
    for q, v in tmp.items():
        if value == v:
            a_dictionary.pop(q)
            return a_dictionary
