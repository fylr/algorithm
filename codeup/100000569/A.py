#!/usr/bin/python3
order_list = list(map(int, input().split()))
length = len(order_list)
for i in range(length-1):
    for j in range(i+1, length):
        if order_list[i] > order_list[j]:
            order_list[i], order_list[j] = order_list[j], order_list[i]

temp = int(input())
for i in range(length):
    if temp < order_list[i]:
        order_list.insert(i, temp)
        break

for num in order_list:
    print(num)
