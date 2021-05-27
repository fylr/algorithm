#!/usr/bin/python3

in_str = input()


def reverse(in_str):
    len1 = len(in_str)
    out_str = ""
    for i in range(len1):
        out_str = in_str[i] + out_str
    return out_str


print(reverse(in_str))
