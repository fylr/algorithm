#!/usr/bin/python3
while True:
    num_list = [int(x) for x in input().split()]
    if num_list[0] == 0:
        break
    sum = 0
    for num in num_list[1:]:
        sum += num
    print(sum)
