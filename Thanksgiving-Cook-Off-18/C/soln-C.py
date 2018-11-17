#!/usr/bin/env python3
# -*- coding: utf-8 -*-
##################################
# University of Wisconsin-Madison
# Author: Yaqi Zhang
##################################
"""
This module contains question C: Thanksgiving and meals
"""

# standard library
import sys


if __name__ == "__main__":
    N, K = list(map(int, input().split()))
    nums = list(map(int, input().split()))
    def func(N, K, nums):
        n = len(nums)
        nums = [num for num in nums if num < K]
        ans = n - len(nums)
        if K < 3:
            return ans + len(nums) // 2
        ones, twos = nums.count(1), nums.count(2)
        ans += min(ones, twos)
        if ones > twos:
            ans += (ones - min(ones, twos)) // 3
        else:
            ans += (twos - min(ones, twos)) // 2
        return ans
    print(func(N, K, nums))
