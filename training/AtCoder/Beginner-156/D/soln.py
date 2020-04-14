#!/usr/bin/env python3
# -*- coding: utf-8 -*-
##################################
# University of Wisconsin-Madison
# Author: Yaqi Zhang
##################################

# standard library
import sys

def cmb(n, r, mod):
    r = min(r, n - r)
    x, y = 1, 1
    for i in range(r):
        x = x * (n - i) % mod
        y = y * (i + 1) % mod
    y = pow(y, mod - 2, mod)
    return x * y % mod


def main():
    import math
    n, a, b = map(int, input().split())
    MOD = int(1e9 + 7)
    ans = pow(2, n, MOD) - 1
    ans = ans - cmb(n, a, MOD) - cmb(n, b, MOD)
    while ans < 0:
        ans += MOD
    print(ans)

if __name__ == "__main__":
    main()
