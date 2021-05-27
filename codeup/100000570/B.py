#!/usr/bin/python3
def vowels(in_str):
    out_str = ""
    for c in in_str:
        if c.lower() in ['a', 'e', 'i', 'o', 'u']:
            out_str += c
    return out_str


in_str = input()
print(vowels(in_str))
