#!/usr/bin/env python3
# -*- coding: utf-8 -*-
##################################
# University of Wisconsin-Madison
# Author: Yaqi Zhang
##################################

# standard library
import sys
import math

def compute_prob(r, c):
    dr = r - 1
    dc = c - 1
    n = dr + dc
    ans = 0.5 ** n
    for i in range(dr):
        ans *= n
        n -= 1
    return ans

def main():
    T = int(input())
    for case_id in range(1, T + 1):
        W, H, L, U, R, D = map(int, input().rstrip().split())
        def is_inhole(r, c):
            return U <= r <= D and L <= c <= R
        def is_out(r, c):
            return not (1 <= r <= H and 1 <= c <= W)
        # probability of hit hole
        p = 0.0
        cands = [(U, c) for c in range(L, R + 1)] + [(r, L) for r in range(U + 1, D + 1)]
        for r, c in cands:
            # print(r, c)
            # from above
            if not (is_out(r - 1, c) or is_inhole(r - 1, c)):
                # move from (1, 1) to (r - 1, c)
                if c != W:
                    p += compute_prob(r - 1, c) * 0.5
                else:
                    if W == 1:
                        p += 1
                    else:
                        p += compute_prob(r - 1, c)
            # from left
            if not (is_out(r, c - 1) or is_inhole(r, c - 1)):
                # move from (1, 1) to (r, c - 1)
                if r != H:
                    p += compute_prob(r, c - 1) * 0.5
                else:
                    if H == 1:
                        p += 1
                    else:
                        p += compute_prob(r, c - 1)
            # print(p)
        print("Case #{:d}: {:0.9f}".format(case_id, 1 - p))


if __name__ == "__main__":
    main()

