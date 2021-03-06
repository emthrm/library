---
title: 最小流量制約付き最大流
documentation_of: graph/flow/maximum_flow/maximum_flow_with_minimum_flow_constraint.hpp
---


## 計算量

[最大流](maximum_flow.md)に同じ．


## 使用法

||説明|備考|
|:--:|:--:|:--:|
|`MaximumFlowWithMinimumFlowConstraint<最大流, T>(n)`|頂点数 $N$ の最小流量制約付き最大流を考える．||
|`add_edge(src, dst, lb, ub)`|始点 $\mathrm{src}$, 終点 $\mathrm{dst}$, 容量の下限 $\mathrm{lb}$, 上限 $\mathrm{ub}$ の辺を張る．||
|`solve(s, t, limit)`|上限を $\mathrm{limit} (\infty)$ とした始点 $s$ から終点 $t$ までの最大流|存在しない場合は $-1$ となる．|


## 参考

- https://snuke.hatenablog.com/entry/2016/07/10/043918
- https://ei1333.github.io/luzhiled/snippets/graph/maxflow-lower-bound.html


## Verified

https://onlinejudge.u-aizu.ac.jp/solutions/problem/1615/review/4085139/emthrm/C++14
