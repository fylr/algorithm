#!/usr/bin/python3
# N数值太大，会超时
while True:
    try:
        num_list = input().split()
    except EOFError:
        break

    N = int(num_list[0])
    num_list[0] = 0
    iter = 1
    while iter <= N:
        num_list[iter] = int(num_list[iter-1]) + int(num_list[iter])
        iter += 1

    M = int(input())
    while 0 < M:
        M -= 1
        a, b = [int(x)-1 for x in input().split()]
        dst = num_list[b] - num_list[a]
        if a > b:
            dst *= -1
        deta_dst = num_list[N] - dst
        if dst > deta_dst:
            dst = deta_dst
        print(dst)
