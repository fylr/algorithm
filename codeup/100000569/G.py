#!/usr/bin/python3

fib_list = [1, 1]
for i in range(2, 20):
    fib_list.append(fib_list[i-1]+fib_list[i-2])

for i in range(20):
    print(fib_list[i])
