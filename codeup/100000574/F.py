#!/usr/bin/python3
import sys

while True:
    line = sys.stdin.readline()
    if not line:
        break
    num_list = [int(x) for x in line.split()]
    sum = 0
    for num in num_list[1:]:
        sum += num
    print(sum)
