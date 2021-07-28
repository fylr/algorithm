#!/usr/bin/python3

days_in_month = [0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]


M = int(input())

for i in range(M):
    y, m, d, n = [int(x) for x in input().split()]

    d += n
    while True:
        if y % 4 == 0 and (y % 100 != 0 or y % 400 == 0):
            days_in_month[2] = 29
        else:
            days_in_month[2] = 28

        if d > days_in_month[m]:
            d -= days_in_month[m]
            m += 1
            if m > 12:
                m = 1
                y += 1
        else:
            break

    print("{:04d}-{:02d}-{:02d}".format(y, m, d))
