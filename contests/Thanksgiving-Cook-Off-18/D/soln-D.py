#!/usr/bin/env python3
# -*- coding: utf-8 -*-
##################################
# University of Wisconsin-Madison
# Author: Yaqi Zhang
##################################
"""
This module contains question D: dancing keyboard
"""

# standard library
import sys

def func(word):
    keys = [['q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p'],
            ['a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'i'],
            ['z', 'x', 'c', 'v', 'b', 'n', 'm', '<', '>', '?']]
    d = {}
    for i, row in enumerate(keys):
        for j, val in enumerate(row):
            d[val] = (i, j)
    def neighbors(r, c):
        m, n = 3, 10
        return {(r + dr, c + dc) for dr in (-1, 0, 1) for dc in (-1, 0, 1) if 0 <= r + dr < m
                and 0 <= c + dc < n}
    first, second = None, None
    ans = []
    for ch in word:
        if first is None:
            move = 1
            first = d[ch]
        elif second is None:
            move = 2
            second = d[ch]
        elif d[ch] in neighbors(*first):
            move = 1
            first = d[ch]
        elif d[ch] in neighbors(*second):
            move = 2
            second = d[ch]
        else:
            return -1
        ans.append(move)
    return ans

if __name__ == "__main__":
    word = input()
    ans = func(word)
    print(-1 if ans == -1 else ' '.join(map(str, ans)))

