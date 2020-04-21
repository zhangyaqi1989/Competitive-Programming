#!/usr/bin/env python3
# -*- coding: utf-8 -*-
##################################
# University of Wisconsin-Madison
# Author: Yaqi Zhang
##################################

# standard library
import sys


def main():
    T = int(input())
    for _ in range(T):
        n, k = map(int, input().split())
        nums = list(map(int, input().split()))
        # x <= 2k
        # a <= k
        # make them same
        dp = [0] * (2 * k + 2)
        for i in range(n // 2):
            a, b = nums[i], nums[n - 1 - i]
            if a > b:
                a, b = b, a
            s = a + b
            lo = s - (b - 1)
            hi = s + (k - a)
            # print(lo, s, hi)
            dp[lo] -= 1
            dp[s] -= 1
            dp[s + 1] += 1
            dp[hi + 1] += 1
        mn = n
        cur = n
        for i in range(2, 2 * k + 1):
            cur += dp[i]
            mn = min(cur, mn)
        print(mn)


if __name__ == "__main__":
    main()

