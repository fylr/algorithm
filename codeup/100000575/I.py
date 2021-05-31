#!/usr/bin/python3
A_list = [0, 0, 0]
A_win_dict = {'B': 0, 'C': 0, 'J': 0}
B_win_dict = {'B': 0, 'C': 0, 'J': 0}
N = int(input())

while N > 0:
    N -= 1
    a, b = input().split()
    if a == 'B':
        if b == 'B':
            A_list[1] += 1
        elif b == 'C':
            A_list[0] += 1
            A_win_dict[a] += 1
        elif b == 'J':
            A_list[2] += 1
            B_win_dict[b] += 1
    elif a == 'C':
        if b == 'B':
            A_list[2] += 1
            B_win_dict[b] += 1
        elif b == 'C':
            A_list[1] += 1
        elif b == 'J':
            A_list[0] += 1
            A_win_dict[a] += 1
    elif a == 'J':
        if b == 'B':
            A_list[0] += 1
            A_win_dict[a] += 1
        elif b == 'C':
            A_list[2] += 1
            B_win_dict[b] += 1
        elif b == 'J':
            A_list[1] += 1

print(A_list[0], A_list[1], A_list[2])
print(A_list[2], A_list[1], A_list[0])


def get_max_win_key(win_dict):
    max_win_key = 'B'
    for key in win_dict:
        if win_dict[key] > win_dict[max_win_key]:
            max_win_key = key

    return max_win_key


print(get_max_win_key(A_win_dict), get_max_win_key(B_win_dict))
