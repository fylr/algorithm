#!/usr/bin/python3
m = int(input())
for cnt in range(m):
    h = int(input())
    str = "*" * h
    str_len = 3 * h - 2
    for i in range(h):
        out_str = str + "*" * 2 * i
        print(out_str.center(str_len))
