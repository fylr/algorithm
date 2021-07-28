#!/usr/bin/python3

days_in_month = [0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]


class my_date:
    def __init__(self, y, m, d):
        self.y = y
        self.m = m
        self.d = d

    def next_day_print(self):
        if days_in_month[self.m] != self.d:
            self.d += 1
        else:
            self.d = 1
            if self.m != 12:
                self.m += 1
            else:
                self.m = 1
                self.y += 1

        print("{:04d}-{:02d}-{:02d}".format(self.y, self.m, self.d))


M = int(input())

for i in range(M):
    y, m, d = [int(x) for x in input().split()]
    md = my_date(y, m, d)
    md.next_day_print()
