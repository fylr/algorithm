#!/usr/bin/python3
from typing import Union


class school_person:
    category = Union[int, str]

    def __init__(self, num, name, sex, job, category):
        self.num = num
        self.name = name
        self.sex = sex
        self.job = job
        if job == 's':
            self.category = category
        if job == 't':
            self.category = category


n = int(input())
school_person_list = []
for i in range(n):
    num, name, sex, job, category = list(input().split())
    school_person_list.append(school_person(num, name, sex, job, category))

for i in range(n):
    print(school_person_list[i].num, school_person_list[i].name,
          school_person_list[i].sex, school_person_list[i].job, school_person_list[i].category)
