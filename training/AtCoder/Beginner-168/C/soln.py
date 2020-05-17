#!/usr/bin/env python3
# -*- coding: utf-8 -*-
##################################
# University of Wisconsin-Madison
# Author: Yaqi Zhang
##################################

import math
import sys

def degtorad(deg):
    return deg / 180.0 * math.pi

def main():
    a, b, h, m = map(int, input().split())
    alpha = m / 60 * 360
    beta = h / 12 * 360 + m / 60 * 30
    deg = abs(alpha - beta)
    c = math.sqrt(a * a + b * b - 2 * a * b * math.cos(degtorad(deg)))
    print("{:0.9f}".format(c))


if __name__ == "__main__":
    main()
