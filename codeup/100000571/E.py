#!/usr/bin/python3
def my_input():
    in_list = list(map(int, input().split()))
    return in_list


def deal_list(in_list):
    list_len = len(in_list)
    max_i = min_i = 0
    for i in range(1, list_len):
        if in_list[max_i] < in_list[i]:
            max_i = i
        if in_list[min_i] > in_list[i]:
            min_i = i
    in_list[min_i], in_list[0] = in_list[0], in_list[min_i]
    in_list[max_i], in_list[list_len-1] = in_list[list_len-1], in_list[max_i]


def my_output(in_list):
    list_len = len(in_list)-1
    for cnt in range(list_len):
        print(in_list[cnt], end=' ')
    print(in_list[list_len])


in_list = my_input()
deal_list(in_list)
my_output(in_list)
