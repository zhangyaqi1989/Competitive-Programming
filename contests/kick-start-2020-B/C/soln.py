#!/usr/bin/env python3
# -*- coding: utf-8 -*-
##################################
# University of Wisconsin-Madison
# Author: Yaqi Zhang
##################################

# standard library
import collections
import sys
sys.setrecursionlimit(100000)

dirs = {'N' : (-1, 0), 'S' : (1, 0), 'E' : (0, 1), 'W' : (0, -1)}

x, y = 0, 0

MOD = 1000000000


def move(exp, num):
    counter = collections.Counter(exp)
    global x, y
    dx = 0
    dy = 0
    for key, cnt in counter.items():
        ddx, ddy = dirs[key]
        dx = (dx + ddx * cnt) % MOD
        dy = (dy + ddy * cnt) % MOD
    x += dx
    x %= MOD
    y += dy
    y %= MOD

def parse(exp):
    if '(' not in exp:
        move(exp, 1)
        return
    idx = 0
    n = len(exp)
    # remove the outmost ()
    idx = exp.index('(')
    num = int(exp[idx - 1])
    if idx != 1:
        move(exp[:idx - 1], 1)
    nopens = 1
    for i in range(idx + 1, n):
        if exp[i] == '(':
            nopens += 1
        elif exp[i] == ')':
            nopens -= 1
        if nopens == 0:
            Y = exp[idx + 1:i]
            global x, y
            pre_x = x
            pre_y = y
            parse(Y)
            dx = x - pre_x
            dy = y - pre_y
            x += dx * (num - 1)
            y += dy * (num - 1)
            x %= MOD
            y %= MOD
            parse(exp[i + 1:])
            break

def main():
    T = int(input())
    for case_id in range(1, T + 1):
        global x, y
        x = 0
        y = 0
        exp = input().rstrip()
        parse(exp)
        print("Case #{}: {} {}".format(case_id, y + 1, x + 1))

if __name__ == "__main__":
    main()
