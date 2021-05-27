#!/usr/bin/python3
class person:
    name = ""
    count = 0

    def __init__(self, n, c):
        self.name = n
        self.count = c


leader_list = [person("Li", 0), person("Zhang", 0), person("Fun", 0)]
n = int(input())
for i in range(n):
    name_str = input()
    for ent in leader_list:
        if(ent.name == name_str):
            ent.count += 1

for ent in leader_list:
    print("{}:{}".format(ent.name, ent.count))
