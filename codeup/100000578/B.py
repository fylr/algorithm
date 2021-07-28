#!/usr/bin/python3
import sys

month_dict = {"January": 1, "February": 2, "March": 3,
              "April": 4, "May": 5, "June": 6,
              "July": 7, "August": 8, "September": 9,
              "October": 10, "November": 11, "December": 12}

week_dict = {0: "Sunday", 1: "Monday", 2: "Tuesday", 3: "Wednesday",
             4: "Thursday", 5: "Friday", 6: "Saturday"}

while True:
    tmp_time = sys.stdin.readline()
    if not tmp_time:
        break

    tmp_day, tmp_month, tmp_year = tmp_time.split()

    d = int(tmp_day)
    y = int(tmp_year)
    M = month_dict[tmp_month]
    if M == 1 or M == 2:
        M += 12
        y -= 1

    # 基姆拉尔森计算公式
    w = (d + 2 * M + 3 * (M + 1) // 5 + y +
         y // 4 - y // 100 + y // 400 + 1) % 7
    print(week_dict[w])
