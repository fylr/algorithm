#!/usr/bin/python3

fab_list = [1, 1]
for cnt in range(2, 22):
    fab_list.append(fab_list[cnt-1]+fab_list[cnt-2])

sum = 0.0
for cnt in range(1, 21):
    sum += fab_list[cnt+1]/fab_list[cnt]

print("{:.6f}".format(sum))
