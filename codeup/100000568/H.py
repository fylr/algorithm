#!/usr/bin/python3

N = int(input())
if N < 3:
    f2 = 1
else:
    f1 = f2 = 1
    cnt = 3
    while True:
        if cnt > N:
            break
        f1, f2 = f2, f1+f2
        cnt += 1

print(f2)
