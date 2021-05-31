#!/usr/bin/python3
import sys


def str_to_num(str):
    num = 0
    flag = 1
    if str[0] == '-':
        flag = -1
        str = str[1:]
    for iter in str.split(','):
        num = num*1000+int(iter)

    return num*flag


while True:
    line = sys.stdin.readline()
    if not line:
        break
    a_str, b_str = line.split()

    a = str_to_num(a_str)
    b = str_to_num(b_str)
    print(a+b)
