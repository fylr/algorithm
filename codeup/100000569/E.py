#!/usr/bin/python3

str1 = input()
str2 = input()

len1 = len(str1)
len2 = len(str2)
i = 0
while i < len1 and i < len2:
    if str1[i] < str2[i]:
        print(ord(str1[i])-ord(str2[i]))
        break
    elif str1[i] > str2[i]:
        print(ord(str1[i])-ord(str2[i]))
        break
    i += 1

if i == len1 or i == len2:
    print(0)
