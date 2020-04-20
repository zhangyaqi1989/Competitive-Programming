#!/usr/bin/env python3
# -*- coding: utf-8 -*-
##################################
# University of Wisconsin-Madison
# Author: Yaqi Zhang
##################################

# standard library
import sys

def main():
    n, m, k = map(int, input().split())
    nums = list(map(int, input().split()))
    pre_reps = [0] * (m + 1)
    ops = []
    for _ in range(m):
        l, r, d = map(int, input().split())
        ops.append((l - 1, r - 1, d))
    for _ in range(k):
        x, y = map(int, input().split())
        x -= 1
        y -= 1
        pre_reps[x] += 1
        pre_reps[y + 1] -= 1
    cur = 0
    add = [0] * (n + 1)
    for i, (l, r, d) in enumerate(ops):
        cur += pre_reps[i]
        add[l] += d * cur
        add[r + 1] -= d * cur
    cur = 0
    ans = []
    for i, num in enumerate(nums):
        cur += add[i]
        ans.append(num + cur)
    print(' '.join(map(str, ans)))


if __name__ == "__main__":
    main()

