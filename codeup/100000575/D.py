#!/usr/bin/python3
import sys
while True:
    line = sys.stdin.readline()
    if not line:
        break
    n = int(line)
    even_cnt = odd_cnt = 0
    for num in list(map(int, input().split())):
        if num % 2:
            odd_cnt += 1
        else:
            even_cnt += 1

    if even_cnt > odd_cnt:
        print("NO")
    else:
        print("YES")
