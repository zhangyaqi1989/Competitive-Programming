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
        if n // 2 % 2:
            print("NO")
        else:
            print("YES")
            evens = [(i + 1) * 2 for i in range(n // 2)]
            odds = [(i + 1) * 2 - 1 for i in range(n // 2)]
            odds[-1] += n // 2
            print(" ".join(map(str, evens + odds)))

if __name__ == "__main__":
    main()
