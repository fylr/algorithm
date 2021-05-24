#!/usr/bin/python3
N = int(input())

sum, i = 0, 1
while True:
    sum += i
    if i == N:
        break
    i += 1

print(sum)
