#!/usr/bin/python3
I = float(input())
sum = 0.0
if I > 1000000:
    sum += (I-1000000)*0.01
    I = 1000000
if I > 600000:
    sum += (I-600000)*0.015
    I = 600000
if I > 400000:
    sum += (I-400000)*0.03
    I = 400000
if I > 200000:
    sum += (I-200000)*0.05
    I = 200000
if I > 100000:
    sum += (I-100000)*0.075
    I = 100000
if I <= 100000:
    sum += I*0.1

print("{0:.2f}".format(sum))
