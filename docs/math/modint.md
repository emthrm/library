---
title: モジュラ計算
documentation_of: math/modint.hpp
---


### 組合せ数学 (combinatorics)

- 順列 (permutation)

  $n$ 個の中から $k$ 個を選んで並べたものの総数は ${}_n \mathrm{P}_k = \dfrac{n!}{(n - k)!}$ となる．

- 重複組合せ (repeated combination)

  $n$ 種類の中から重複ありで $k$ 個を選び並べたものの総数は ${}_n \mathrm{H}_k = \binom{n + k - 1}{k}$ となる．


## 時間計算量

- `Combinatorics` $\langle O(N + \log{M}), O(1) \rangle$


## 参考

- https://github.com/eandbsoftware/libraryCPP/blob/master/!ModInt.cpp
- https://noshi91.hatenablog.com/entry/2019/03/31/174006

組合せ数学
- https://ei1333.github.io/algorithm/combination.html

順列
- https://mathtrain.jp/permucombi

重複組合せ
- https://mathtrain.jp/tyohukuc


## ToDo

- モンゴメリ乗算
  - https://ja.wikipedia.org/wiki/%E3%83%A2%E3%83%B3%E3%82%B4%E3%83%A1%E3%83%AA%E4%B9%97%E7%AE%97
  - https://ikatakos.com/pot/programming_algorithm/number_theory/montgomery_multiplication
  - https://yukicoder.me/wiki/%E3%83%A2%E3%83%B3%E3%82%B4%E3%83%A1%E3%83%AA%E4%B9%97%E7%AE%97
  - https://lumakernel.github.io/ecasdqina/math/Montgomery
  - http://dec9ue.hatenablog.com/entry/2013/04/25/003258
- 実行時 ModInt の高速化
  - https://twitter.com/risujiroh/status/1302857570462228483