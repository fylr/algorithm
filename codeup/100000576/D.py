#!/usr/bin/python3
import sys

while True:
    line = sys.stdin.readline()
    if not line:
        break
    N = int(line)
    num_list = [int(x) for x in input().split()]

    M = int(input())
    for num in input().split():
        find_flag = False
        for x in num_list:
            if x == int(num):
                print("YES")
                find_flag = True
                break
        if not find_flag:
            print("NO")
