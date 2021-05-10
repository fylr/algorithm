#!/usr/bin/python3
import math
a, b, c = input().split()
a=int(a)
b=int(b)
c=int(c)

deta=pow(b, 2)-4*a*c
r1=(-b+math.sqrt(deta))/(2*a)
r2=(-b-math.sqrt(deta))/(2*a)

print("r1={:7.2f}".format(r1))
print("r2={:7.2f}".format(r2))