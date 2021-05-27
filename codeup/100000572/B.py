#!/usr/bin/python3
class student:
    def __init__(self, num, name, sex, age):
        self.num = num
        self.name = name
        self.sex = sex
        self.age = age


n = int(input())
student_list = []
for i in range(n):
    num, name, sex, age = list(input().split())
    student_list.append(student(num, name, sex, age))

for i in range(n):
    print(student_list[i].num, student_list[i].name,
          student_list[i].sex, student_list[i].age)
