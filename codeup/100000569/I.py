#!/usr/bin/python3

in_mutex = [[0 for i in range(3)] for i in range(2)]
out_mutex = [[0 for i in range(2)] for i in range(3)]


for i in range(2):
    in_mutex[i] = list(map(int, input().split()))

for i in range(2):
    for j in range(3):
        out_mutex[j][i] = in_mutex[i][j]

for i in range(3):
    print("{0} {1}".format(out_mutex[i][0], out_mutex[i][1]))
