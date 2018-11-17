#!/usr/bin/env python3
# -*- coding: utf-8 -*-
##################################
# University of Wisconsin-Madison
# Author: Yaqi Zhang
##################################
"""
This module contains the question E. Close Relatives
"""

# standard library
import sys, collections


def func(edges, queries):
    graph = collections.defaultdict(dict)
    for a, b in edges:
        graph[a][b] = -1
        graph[b][a] = 1
    def dfs(query):
        start, dst = query
        queue = collections.deque([(start, 0, 0, 0)])
        seen = {start}
        while queue:
            node, dis, cost, pre_cost = queue.popleft()
            if node == dst:
                return dis <= 5
            for nei in graph[node]:
                if nei in seen or (pre_cost > cost and graph[node][nei] == 1):
                    pass
                else:
                    seen.add(nei)
                    queue.append((nei, dis + 1, cost + graph[node][nei], cost))
        return False
    return list(map(dfs, queries))

if __name__ == "__main__":
    nlines, nqueries = list(map(int, input().split()))
    edges, queries = [], []
    for _ in range(nlines):
        items = input().split()
        a, b = items[0], items[2][:-2]
        edges.append((a, b))
    for _ in range(nqueries):
        items = input().split()
        a, b = items[0], items[-1][:-1]
        queries.append((a, b))
    ans = func(edges, queries)
    for item in ans:
        print('YES' if item else 'NO')
