#!/usr/bin/python3

import sys

while True:
    line = sys.stdin.readline()
    if not line:
        break
    N = int(line)
    num_list = [int(x) for x in input().split()]
    M = int(input())
    iter = -1
    for i in range(N):
        if M == num_list[i]:
            iter = i
            break
    print(iter)
