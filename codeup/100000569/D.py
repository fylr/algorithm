#!/usr/bin/python3
str = input()
for c in str:
    if 'a' <= c <= 'z':
        print(chr(ord('a')+ord('z')-ord(c)), end='')
    elif 'A' <= c <= 'Z':
        print(chr(ord('A')+ord('Z')-ord(c)), end='')
    else:
        print(c, end='')
print()
