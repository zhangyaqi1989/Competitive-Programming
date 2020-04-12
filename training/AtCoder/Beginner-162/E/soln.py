#!/usr/bin/env python3
# -*- coding: utf-8 -*-
##################################
# University of Wisconsin-Madison
# Author: Yaqi Zhang
##################################
# This module contains ...
##################################

# standard library
import sys
sys.setrecursionlimit(10**9)

MOD = int(1e9 + 7)


def main():
    """1~K"""
    n, k = map(int, input().split())
    dp = [-1] * (k + 1)
    # gcd == i
    for x in range(k, 0, -1):
        cnt = k // x
        if cnt == 1:
            dp[x] = 1
        else:
            dp[x] = pow(cnt, n, MOD)
            for i in range(2, cnt + 1):
                dp[x] = (dp[x] - dp[x * i]) % MOD
    ans = 0
    for i in range(1, k + 1):
        ans = (ans + i * dp[i]) % MOD
    print(ans)



if __name__ == "__main__":
    main()
