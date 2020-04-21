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
        n = int(input())
        # x * (1 - 2**k) / (1 - 2) = n
        # k > 1
        for k in range(2, 50):
            if n % (2 ** k - 1) == 0:
                print(n // (2 ** k - 1))
                break

if __name__ == "__main__":
    main()

