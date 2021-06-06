#!/usr/bin/python3
import sys

while True:
    line = sys.stdin.readline()
    if not line:
        break
    N = int(line)
    if N == 0:
        break
    score_list = [0 for x in range(101)]
    for score in input().split():
        score_list[int(score)] += 1
    M = int(input())
    print(score_list[M])
