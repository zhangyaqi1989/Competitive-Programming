#!/usr/bin/env python3
# -*- coding: utf-8 -*-
##################################
# University of Wisconsin-Madison
# Author: Yaqi Zhang
##################################

import sys

def main():
    T, A, B = map(int, input().split())
    L = 1000000000
    LO = L - 10000
    for _ in range(T):
        find = False
        while not find:
            x_target = 0
            y_target = 0
            # find x
            x_lo = -50
            x_hi = +50
            cnt = 0
            while x_lo <= x_hi:
                x_mid = (x_lo + x_hi) >> 1
                # check last velue that hit
                lo = LO
                hi = L - x_mid
                while lo < hi:
                    mid = hi - (hi - lo) // 2
                    cnt += 1
                    print(x_mid + mid, y_target)
                    sys.stdout.flush()
                    ans = input().rstrip()
                    if ans == "HIT":
                        lo = mid
                    elif ans == "MISS":
                        hi = mid - 1
                    else:
                        find = True
                        break
                if find:
                    break
                r_radius = lo
                lo = LO
                hi = x_mid - (-L)
                while lo < hi:
                    mid = hi - (hi - lo) // 2
                    print(x_mid - mid, y_target)
                    sys.stdout.flush()
                    ans = input().rstrip()
                    cnt += 1
                    if ans == "HIT":
                        lo = mid
                    elif ans == "MISS":
                        hi = mid - 1
                    else:
                        find = True
                        break
                if find:
                    break
                l_radius = lo
                if r_radius == l_radius:
                    x_target = x_mid
                    #sys.stderr.write(str(cnt) + "\n")
                    break
                elif r_radius > l_radius:
                    lo = x_mid + 1
                else:
                    hi = x_mid - 1
            if find:
                break
            y_lo = -50
            y_hi = 50
            while y_lo <= y_hi:
                y_mid = (y_lo + y_hi) >> 1
                # sys.stderr.write(str(y_mid))
                # check up most
                lo = LO
                hi = L - y_mid
                while lo < hi:
                    mid = hi - (hi - lo) // 2
                    # sys.stderr.write(str(mid) + "\n")
                    print(x_target, y_mid + mid)
                    cnt += 1
                    sys.stdout.flush()
                    ans = input().rstrip()
                    if ans == "HIT":
                        lo = mid
                    elif ans == "MISS":
                        hi = mid - 1
                    else:
                        find = True
                        break
                if find:
                    break
                u_radius = lo
                lo = LO
                hi = y_mid - (-L)
                while lo < hi:
                    mid = hi - (hi - lo) // 2
                    print(x_target, y_mid - mid)
                    sys.stdout.flush()
                    ans = input().rstrip()
                    if ans == "HIT":
                        lo = mid
                    elif ans == "MISS":
                        hi = mid - 1
                    else:
                        find = True
                        break
                d_radius = lo
                if find:
                    break
                if u_radius == d_radius:
                    y_target = y_mid
                    sys.stderr.write(str(y_target))
                    break
                elif u_radius > d_radius:
                    y_lo = y_mid + 1
                else:
                    y_hi = y_mid - 1
            if find:
                break
            print(x_target, y_target)
            sys.stdout.flush()

if __name__ == "__main__":
    main()
