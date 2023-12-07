#!/usr/bin/python3


def print_sorted_dictionary(a_dictionary):
    for q in sorted(a_dictionary.keys()):
        print("{}: {}".format(q, a_dictionary[q]))
