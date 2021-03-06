---
title: 区間に辺を張るテク
documentation_of: graph/noshi_graph.hpp
---


## 時間計算量

$O(\log{\lvert V \rvert})$


## 使用法

||説明|
|:--:|:--:|
|`NoshiGraph<CostType>(n)`|頂点数 $n$ のグラフを考える．|
|`add_edge(src, dst, cost)`|始点 $\mathrm{src}$, 終点 $\mathrm{dst}$, コスト $\mathrm{cost}$ の辺を張る．|
|`add_edge(src_l, src_r, dst_l, dst_r, cost)`|始点 $s \in \lbrack \mathrm{src\_l}, \mathrm{src\_r})$, 終点 $t \in \lbrack \mathrm{dst\_l}, \mathrm{dst\_r})$, コスト $\mathrm{cost}$ の辺を張る．|


## 参考

- https://twitter.com/noshi91/status/1193177214453338113
- https://twitter.com/noshi91/status/1272380264396648448
- https://lorent-kyopro.hatenablog.com/entry/2020/07/24/170656


## Verified

https://codeforces.com/contest/786/submission/100222769
