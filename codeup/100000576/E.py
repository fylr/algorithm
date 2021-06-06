#!/usr/bin/python3
import sys


class student_info:
    def __init__(self, id, name, sex, age):
        self.id = id
        self.name = name
        self.sex = sex
        self.age = age


M = int(input())
for i in range(M):
    N = int(input())
    si_dist = {}
    for i in range(N):
        id, name, sex, age = input().split()
        si_dist[id] = student_info(id, name, sex, age)

    id = input()
    print(si_dist[id].id, si_dist[id].name, si_dist[id].sex, si_dist[id].age)
