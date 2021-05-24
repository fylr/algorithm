#!/usr/bin/python3

sum, i = 0, 1
while True:
    sum += i
    if sum > 1000:
        break
    i += 1

print(i)
