#!/usr/bin/python3

pi = 0
b = 1
while True:
    if abs(1/b) < 10 ** -6:
        break
    if int(b/2) % 2:
        pi -= 1/b
    else:
        pi += 1/b
    b += 2

print("PI={:10.8f}".format(pi*4))
