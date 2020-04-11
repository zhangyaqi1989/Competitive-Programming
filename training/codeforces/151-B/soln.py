#!/usr/bin/env python3
# -*- coding: utf-8 -*-
##################################
# University of Wisconsin-Madison
# Author: Yaqi Zhang
##################################
# This module contains
##################################

# standard library
import sys

def is_taxi(number):
    return len({ch for ch in number if ch != '-'}) == 1

def is_pizza(number):
    ds = [int(ch) for ch in number if ch != '-']
    n = len(ds)
    return all(ds[i] < ds[i - 1] for i in range(1, n) )

def main():
    n = int(input())
    names = []
    taxi_cnts = []
    pizza_cnts = []
    girl_cnts = []
    for _ in range(n):
        cnt, name = input().strip().split()
        cnt = int(cnt)
        n_t, n_p, n_g = 0, 0, 0
        for _ in range(cnt):
            number = input().strip()
            if is_taxi(number):
                n_t += 1
            elif is_pizza(number):
                n_p += 1
            else:
                n_g += 1
        names.append(name)
        taxi_cnts.append(n_t)
        pizza_cnts.append(n_p)
        girl_cnts.append(n_g)
    taxi_mx = max(taxi_cnts)
    pizza_mx = max(pizza_cnts)
    girl_mx = max(girl_cnts)
    print("If you want to call a taxi, you should call: {}.".format(', '.join([names[i] for i in range(n) if taxi_cnts[i] == taxi_mx])))
    print("If you want to order a pizza, you should call: {}.".format(', '.join([names[i] for i in range(n) if pizza_cnts[i] == pizza_mx])))
    print("If you want to go to a cafe with a wonderful girl, you should call: {}.".format(', '.join([names[i] for i in range(n) if girl_cnts[i] == girl_mx])))


if __name__ == "__main__":
    main()
