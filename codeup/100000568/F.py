#!/usr/bin/python3
for i in range(1, 5):
    for j in range(i, i*5+1, i):
        print(repr(j).rjust(3), end='')
    print()
