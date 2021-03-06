---
title: 転倒数 (inversion number)
documentation_of: misc/inversion_number.hpp
---

数列 $A$ について $A_i > A_j \ (i < j)$ を満たす $(i, j)$ の個数である．

バブルソートに必要な交換回数に等しい．


### バブルソート (bubble sort)

順序関係を考慮した隣接二要素の交換を繰り返すことでソートを行うアルゴリズムである．


## 時間計算量

$O(N\log{N})$


## 使用法

||説明|
|:--:|:--:|
|`inversion_number(a)`|$A$ の転倒数|


## 参考

- プログラミングコンテストチャレンジブック \[第2版\] pp.162-163


## Verified

https://onlinejudge.u-aizu.ac.jp/solutions/problem/ALDS1_5_D/review/4087800/emthrm/C++14
