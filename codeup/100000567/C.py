#!/usr/bin/python3
a, b, c = input().split()
a = float(a)
b = float(b)
c = float(c)

if a > b:
    a, b = b, a
if a > c:
    a, c = c, a
if b > c:
    b, c = c, b

print("{0:.2f} {1:.2f} {2:.2f}".format(a, b, c))
