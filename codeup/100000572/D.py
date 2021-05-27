#!/usr/bin/python3

class student:
    def __init__(self, num, name, score1, score2, score3):
        self.num = num
        self.name = name
        self.score1 = score1
        self.score2 = score2
        self.score3 = score3


def my_input():
    student_list = []
    for i in range(5):
        num, name, score1, score2, score3 = list(input().split())
        student_list.append(student(num, name, score1, score2, score3))

    return student_list


def my_print(student_list):
    for ent in student_list:
        print(ent.num, ent.name, ent.score1, ent.score2, ent.score3)


student_list = my_input()
my_print(student_list)
