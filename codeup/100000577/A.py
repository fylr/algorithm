#!/usr/bin/python3
import sys

while True:
    line = sys.stdin.readline()
    if not line:
        break
    h = int(line)
    str = "*" * h
    str_len = 3 * h - 2
    for i in range(h):
        out_str = str + "*" * 2 * i
        print(out_str.rjust(str_len))
