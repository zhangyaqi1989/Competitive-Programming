#!/usr/bin/env python3
# -*- coding: utf-8 -*-
##################################
# University of Wisconsin-Madison
# Author: Yaqi Zhang
##################################
# This module contains
##################################

import itertools

if __name__ == "__main__":
    def to_num(a, b, c):
        return 100 * a + 10 * b + c
    lst = range(1, 10)
    for nums in itertools.permutations(lst):
        x = to_num(*nums[:3])
        y = to_num(*nums[3:6])
        z = to_num(*nums[6:])
        if y == 2 * x and z == 3 * x:
            print("{}{}{}".format(x,y,z))
