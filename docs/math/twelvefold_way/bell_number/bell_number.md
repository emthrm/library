# ベル数 (Bell number)

区別された $n$ 個を $k$ グループ以下に分割する場合の数 $B(n, k)$ であり，

$$B(n,k) = \sum_{j = 0}^k S(n, j) = \sum_{i = 0}^k \frac{i^n}{i!} \sum_{j = 0}^{k - i} \frac{(-1)^j}{j!}$$

が成り立つ．

$n = k$ のときのベル数 $B_n$ は漸化式

$$B_{n + 1} = \sum_{k = 0}^n \binom{n}{k} B_k$$

で与えられる．

指数型母関数 $B(x) > 0$ は

$$B(x) = e^{e^x - 1}$$

である．


## 時間計算量

||時間計算量|
|:--:|:--:|
||$O(\min \lbrace N, K \rbrace \log{N})$|
|$n = k$ 版|$O(N\log{N})$|
|数表|$O(NK)$|


## 使用法

||説明|備考|
|:--:|:--:|:--:|
|`bell_number(n, k, Combinatorics)`|ベル数 $B(n, k)$|`Combinatorics` は $k$ 以上で定義されていなければならない．|

- 数表

||説明|
|:--:|:--:|
|`bell_number_init<T>(n, k)`|ベル数 $B(i, j) \ (0 \leq i \leq n,\ 0 \leq j \leq k)$ の数表|

- $n = k$ 版

||説明|
|:--:|:--:|
|`bell_number_init_with_fps<T>(val)`|ベル数 $B_n \ (0 \leq n \leq \mathrm{val})$ の数表|


## 参考

- https://qiita.com/drken/items/f2ea4b58b0d21621bd51
- https://ja.wikipedia.org/wiki/ベル数


## Verified

- https://onlinejudge.u-aizu.ac.jp/solutions/problem/DPL_5_G/review/4088882/emthrm/C++14
- [数表](https://onlinejudge.u-aizu.ac.jp/solutions/problem/DPL_5_G/review/4088892/emthrm/C++14)
- $n = k$ 版