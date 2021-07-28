#!/usr/bin/python3
import sys

days_in_month = [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]

while True:
    line = sys.stdin.readline()
    if not line:
        break
    y, n = [int(x) for x in line.split()]

    if y % 4 == 0 and (y % 100 != 0 or y % 400 == 0):
        days_in_month[1] = 29
    else:
        days_in_month[1] = 28
    m = d = 1
    for i in range(12):
        if n > days_in_month[i]:
            n -= days_in_month[i]
            m += 1
        else:
            d = n
            break

    print("{:04d}-{:02d}-{:02d}".format(y, m, d))
