#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'solve' function below.
#
# The function accepts following parameters:
#  1. INTEGER n
#  2. INTEGER_ARRAY a
#

def solve(n, a):
    l, r = 0.0, 1e15
    for i in range(400):
        mid = (l + r) / 2
        inv = n
        lefts = 0.0
        for num in a:
            if num >= mid:
                inv -= 1
            else:
                lefts += num
        if inv <= 0:
            l = mid
            continue
        if lefts / inv < mid:
            r = mid
        else:
            l = mid
    print("{:.9f}".format(mid))
    

if __name__ == '__main__':
    first_multiple_input = input().rstrip().split()

    n = int(first_multiple_input[0])

    k = int(first_multiple_input[1])

    a = list(map(int, input().rstrip().split()))

    solve(n, a)
