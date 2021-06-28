#!/usr/bin/python3

n = int(input())
cnt = n
while cnt > 0:
    str = " "*(n-cnt) + "* "*(cnt-1) + "*"
    print(str)
    cnt -= 1

cnt = 2
while cnt <= n:
    str = " "*(n-cnt) + "* "*(cnt-1) + "*"
    print(str)
    cnt += 1
