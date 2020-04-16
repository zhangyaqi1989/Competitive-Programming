#!/usr/bin/env python3
# -*- coding: utf-8 -*-
##################################
# University of Wisconsin-Madison
# Author: Yaqi Zhang
##################################

# standard library
import sys
sys.setrecursionlimit(10**6)
from functools import lru_cache


def main():
    _, K = map(int, input().split())
    A = list(map(int, input().split()))
    @lru_cache(None)
    def dp(left):
        return any(not dp(left - pick) for pick in A if left >= pick)
    print("First" if dp(K) else "Second")

if __name__ == "__main__":
    main()
