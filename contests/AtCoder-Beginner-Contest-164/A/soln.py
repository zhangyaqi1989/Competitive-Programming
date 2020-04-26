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
    S, W = LineRead()
    print("unsafe" if W >= S else 'safe')

if __name__ == "__main__":
    main()

