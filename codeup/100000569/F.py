#!/usr/bin/python3

in_list = list(map(int, input().split()))
l_len = len(in_list)
for i in range(l_len):
    print(in_list[l_len-i-1])
