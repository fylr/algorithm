#!/usr/bin/python3
import sys


class student_info:
    def __init__(self, id, name, sex, age):
        self.id = id
        self.name = name
        self.sex = sex
        self.age = age


while True:
    line = sys.stdin.readline()
    if not line:
        break
    si_dist = {}
    N = int(line)
    for i in range(N):
        id, name, sex, age = input().split()
        si_dist[id] = student_info(id, name, sex, age)

    M = int(input())
    for i in range(M):
        id = input()
        if id in si_dist:
            si_rst = si_dist[id]
            print(si_rst.id, si_rst.name, si_rst.sex, si_rst.age)
        else:
            print("No Answer!")
