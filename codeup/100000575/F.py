#!/usr/bin/python3
T = int(input())
cnt = 1
while cnt <= T:
    a, b, c = [int(x) for x in input().split()]
    if a+b > c:
        print("Case #{}: true".format(cnt))
    else:
        print("Case #{}: false".format(cnt))
    cnt += 1
