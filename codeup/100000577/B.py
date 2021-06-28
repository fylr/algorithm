#!/usr/bin/python3
# 提交到codeup报错，在pat上面是正确的
import sys

while True:
    str = sys.stdin.readline()
    if not str:
        break
    N = len(str) - 1
    n1 = (N+2) // 3
    n2 = N+2 - 2*n1
    mid_apd = n2 - 2
    for i in range(n1-1):
        print(str[i] + ' '*mid_apd + str[N-1 - i])
    print(str[n1-1:n1+n2-1])
