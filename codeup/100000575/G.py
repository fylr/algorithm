#!/usr/bin/python3
import sys

while True:
    line = sys.stdin.readline()
    if not line:
        break
    A = [0 for i in range(6)]
    num_list = [int(x) for x in line.split()]
    my_flag = 1
    A4_cnt = 0
    A2_flag = 0
    for num in num_list[1:]:
        temp = num % 5
        if temp == 0:
            if num % 2 == 0:
                A[1] += num
        elif temp == 1:
            A[2] += num*my_flag
            my_flag *= -1
            A2_flag = 1
        elif temp == 2:
            A[3] += 1
        elif temp == 3:
            A[4] += num
            A4_cnt += 1
        elif temp == 4:
            if A[5] < num:
                A[5] = num

    for i in range(1, 6):
        if A[i] and i == 4:
            print("{:.1f}".format(1.0 * A[4] / A4_cnt), end=' ')
        elif i == 5:
            if A[i] == 0:
                print("N")
            else:
                print(A[i])
        elif i == 2:
            if A2_flag == 0:
                print("N", end=' ')
            else:
                print(A[i], end=' ')
        else:
            if A[i] == 0:
                print("N", end=' ')
            else:
                print(A[i], end=' ')
