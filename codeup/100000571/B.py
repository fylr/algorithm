#!/usr/bin/python3
a, b, c = list(map(int, input().split()))
if a < b:
    a, b = b, a
if a < c:
    a, c = c, a
if b < c:
    b, c = c, b
print(a, b, c)
