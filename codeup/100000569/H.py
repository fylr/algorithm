#!/usr/bin/python3
in_list = list(map(int, input().split()))

for i in range(9):
    down = i+1
    for j in range(down, 10):
        if in_list[i] > in_list[j]:
            in_list[i], in_list[j] = in_list[j], in_list[i]

for i in range(10):
    print(in_list[i])
