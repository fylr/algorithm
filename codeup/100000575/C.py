#!/usr/bin/python3
import sys


def str_to_num(str):
    num = 0
    for c in str:
        num += int(c)
    return num


while True:
    line = sys.stdin.readline()
    if not line:
        break
    a, b = [str_to_num(str) for str in line.split()]
    print(a*b)
