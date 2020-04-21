#!/usr/bin/env python3
# -*- coding: utf-8 -*-
##################################
# University of Wisconsin-Madison
# Author: Yaqi Zhang
##################################

# standard library
import sys
import math

def main():
    T = int(input())
    for _ in range(T):
        n = int(input())
        nums = list(map(int, input().split()))
        neg = nums[0] if nums[0] < 0 else 0
        pos = nums[0] if nums[0] > 0 else 0
        neg_cnt = 1 if nums[0] < 0 else 0
        pos_cnt = 1 if nums[0] > 0 else 0
        # first compare cnt then value
        for i in range(1, n):
            new_pos_cnt, new_neg_cnt = pos_cnt, neg_cnt
            new_pos, new_neg = pos, neg
            num = nums[i]
            if num > 0:
                if neg_cnt + 1 > pos_cnt:
                    new_pos_cnt = neg_cnt + 1
                    new_pos = neg + num
                elif neg_cnt + 1 == pos_cnt and pos < neg + num:
                    new_pos = neg + num
            else:
                if pos_cnt + 1 > neg_cnt:
                    new_neg_cnt = pos_cnt + 1
                    new_neg = pos + num
                elif pos_cnt + 1 == neg_cnt and neg < pos + num:
                    new_neg = pos + num
            pos, neg = new_pos, new_neg
            pos_cnt, neg_cnt = new_pos_cnt, new_neg_cnt
        if pos_cnt > neg_cnt:
            print(pos)
        elif pos_cnt < neg_cnt:
            print(neg)
        else:
            print(max(pos, neg))

if __name__ == "__main__":
    main()

