#!/usr/bin/python3

class student:
    def __init__(self, num, name, score1, score2, score3):
        self.num = num
        self.name = name
        self.score1 = score1
        self.score2 = score2
        self.score3 = score3

    def __str__(self):
        return "{} {} {} {} {}".format(self.num, self.name, self.score1, self.score2, self.score3)


student_list = []
score1_sum = score2_sum = score3_sum = score_max_iter = 0
for i in range(10):
    num, name, score1, score2, score3 = list(input().split())
    score1, score2, score3 = list(map(int, [score1, score2, score3]))
    score1_sum += score1
    score2_sum += score2
    score3_sum += score3
    student_list.append(student(num, name, score1, score2, score3))
    score_sum = student_list[score_max_iter].score1 + \
        student_list[score_max_iter].score2+student_list[score_max_iter].score3
    if score_sum < score1+score2+score3:
        score_max_iter = i

print("{:.2f} {:.2f} {:.2f}".format(
    score1_sum/10, score2_sum/10, score3_sum/10))
print(student_list[score_max_iter])
