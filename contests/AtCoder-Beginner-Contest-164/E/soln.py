# -*- coding: utf-8 -*-
##################################
# University of Wisconsin-Madison
# Author: Yaqi Zhang
##################################

# standard library
import collections
import heapq
import sys
from functools import lru_cache

sys.setrecursionlimit(10**9)

Input = lambda: sys.stdin.readline().rstrip()
IntRead = lambda: int(Input())
LineRead = lambda: list(map(int, Input().split()))


INF = 10**18

def main():
    N, M, S = LineRead()
    S = min(S, 50 * 50)
    # state: start at 1, for 2 ... N
    graph = [[] for _ in range(N + 1)]
    cs = [-1]
    ds = [-1]
    for _ in range(M):
        u, v, a, b = LineRead()
        graph[u].append((v, a, b))
        graph[v].append((u, a, b))
    for _ in range(N):
        c, d = LineRead()
        cs.append(c)
        ds.append(d)
    def dijkstra(start, end):
        pq = [(0, start, S)]
        dist = {}
        dist[(start, S)] = 0
        # print("Hello")
        while pq:
            t, u, s = heapq.heappop(pq)
            # print(t, u, s)
            if u == end:
                return t
            if t < dist[u, s]:
                continue
            for v, a, b in graph[u]:
                if s >= a:
                    if (v, s - a) not in dist or dist[v, s - a] > t + b:
                        dist[v, s - a] = t + b
                        heapq.heappush(pq, (t + b, v, s - a))
            # exchange
            c = cs[u]
            d = ds[u]
            if s >= 2500:
                continue
            if (u, s + c) not in dist or dist[u, s + c] > t + d:
                dist[u, s + c] = t + d
                heapq.heappush(pq, (t + d, u, s + c))
    for i in range(2, N + 1):
        print(dijkstra(1, i))


if __name__ == "__main__":
    main()
