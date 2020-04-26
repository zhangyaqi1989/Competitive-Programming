# -*- coding: utf-8 -*-
##################################
# University of Wisconsin-Madison
# Author: Yaqi Zhang
##################################

# standard library
import sys
from functools import lru_cache

sys.setrecursionlimit(10**9)

Input = lambda: sys.stdin.readline().rstrip()
IntRead = lambda: int(Input())
LineRead = lambda: list(map(int, Input().split()))


INF = 10**18

def main():
    t_h, t_a, a_h, a_a = LineRead()
    idx = 0
    while True:
        if idx % 2 == 0:
            a_h -= t_a
            if a_h <= 0:
                print("Yes")
                break
        else:
            t_h -= a_a
            if t_h <= 0:
                print("No")
                break
        idx += 1


if __name__ == "__main__":
    main()

