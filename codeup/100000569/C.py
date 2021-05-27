#!/usr/bin/python3
n = int(input())+1

yh = [[0 for i in range(11)] for i in range(11)]
yh[1][1] = 1
for i in range(2, n):
    up = i+1
    mid = int(up/2)
    for j in range(1, up):
        if j <= mid:
            yh[i][j] = yh[i-1][j-1]+yh[i-1][j]
        else:
            yh[i][j] = yh[i][up-j]


for i in range(1, n):
    for j in range(1, i):
        print(yh[i][j], end=' ')
    print(yh[i][i])
