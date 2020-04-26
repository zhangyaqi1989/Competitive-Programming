# -*- coding: utf-8 -*-
##################################
# University of Wisconsin-Madison
# Author: Yaqi Zhang
##################################

# standard library
import collections
import sys
from functools import lru_cache

sys.setrecursionlimit(10**9)

Input = lambda: sys.stdin.readline().rstrip()
IntRead = lambda: int(Input())
LineRead = lambda: list(map(int, Input().split()))


INF = 10**18

def main():
    S = Input()
    MOD = 2019
    seen = collections.Counter()
    cur = 0
    for d in map(int, S):
        # 181718
        # base 10
        cur = (cur * 10 + d) % MOD


if __name__ == "__main__":
    main()

