#!/usr/bin/python3
while True:
    L, M = [int(x) for x in input().split()]
    if L == 0 and M == 0:
        break
    tree_list = [1 for i in range(L+1)]
    for i in range(M):
        a, b = [int(x) for x in input().split()]
        for iter in range(a, b+1):
            tree_list[iter] = 0
    sum = 0
    for num in tree_list:
        sum += num
    print(sum)
