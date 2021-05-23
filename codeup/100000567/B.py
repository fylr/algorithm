#!/usr/bin/python3
a, b = input().split()
a = float(a)
b = float(b)

if a > b:
    c = a
    a = b
    b = c
print("{0:.2f} {1:.2f}".format(a, b))
