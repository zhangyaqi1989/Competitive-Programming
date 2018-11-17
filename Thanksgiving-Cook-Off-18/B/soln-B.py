#!/usr/bin/env python3
# -*- coding: utf-8 -*-
##################################
# University of Wisconsin-Madison
# Author: Yaqi Zhang
##################################
"""
This module contains question B: Complex Plan
"""

# standard library
import sys
import math

def func(n):
    for i in range(1, int(math.sqrt(n)) + 1):
        if (i != 1 and n // i == 0) or (n - i * i > 0 and int(math.sqrt(n -
            i * i)) == math.sqrt(n - i * i)):
            return False
    return True

if __name__ == "__main__":
    n = int(input())
    print("YES" if func(n) else "NO")
