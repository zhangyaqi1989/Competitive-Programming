#!/usr/bin/env python3
# -*- coding: utf-8 -*-
##################################
# University of Wisconsin-Madison
# Author: Yaqi Zhang
##################################
"""
This module contains question A: split the Herd
"""

import sys
import math


if __name__ == "__main__":
    n = int(input())
    # find three factors sum to n
    n += 1
    l_factors = [i for i in range(1, int(math.sqrt(n)) + 1) if n % i == 0]
    r_factors = [n // factor for factor in l_factors if n // factor != factor]
    factors = l_factors + r_factors[::-1]
    target = n - 1
    num = len(factors)
    for i in range(num):
        l, r = i, num - 1
        while l <= r:
            s = factors[i] + factors[l] + factors[r]
            if s == target:
                print(" ".join(map(str, [n // factors[k] for k in (r, l, i)])))
                sys.exit(0)
            elif s > target:
                r -= 1
            else:
                l += 1
    print("0 0 0")
