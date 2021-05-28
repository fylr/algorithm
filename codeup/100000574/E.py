#!/usr/bin/python3
N = int(input())
for i in range(N):
    num_list = [int(x) for x in input().split()]
    sum = 0
    for num in num_list[1:]:
        sum += num
    print(sum)
