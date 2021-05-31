#!/usr/bin/python3
import sys


def get_Px(X, Dx):
    Px = 0
    for c in X:
        if c == Dx:
            Px = Px*10+int(Dx)
    return Px


while True:
    line = sys.stdin.readline()
    if not line:
        break
    A, Da, B, Db = line.split()
    print(get_Px(A, Da)+get_Px(B, Db))
