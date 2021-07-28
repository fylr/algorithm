#!/usr/bin/python3
import sys
from datetime import datetime

while True:
    time1 = sys.stdin.readline()
    if not time1:
        break
    time2 = sys.stdin.readline()

    if time1 > time2:
        time1, time2 = time2, time1

    date1 = datetime(int(time1[0:4]), int(time1[4:6]), int(time1[6:8]))
    date2 = datetime(int(time2[0:4]), int(time2[4:6]), int(time2[6:8]))
    date_dist = date2 - date1

    print(date_dist.days+1)
