---
title: MongeDP (Knuth-Yao speedup)
documentation_of: dp/mongedp.hpp
---

Monge 性を満たす動的計画法である．


### Monge 性

重み関数 $f$ について

- QI (quandrangle inequality)

  $A \cap B \neq \phi$ を満たす任意の区間 $A, B$ について

  $$f(A \cup B) + f(A \cap B) \geq f(A) + f(B) \text{，}$$

- MLI (monotone on the lattice intervals)

  $A \subset B$ を満たす任意の区間 $A, B$ について

  $$f(a) \leq f(b)$$

  すなわち任意の $i \leq j,\ k \leq l$ について

  $$f(i, l) + f(j, k) \geq f(i, k) + f(j, l)$$

が成り立つとき, Monge 性を満たすと言う．


## 時間計算量

$O(N^2)$


## 使用法

||説明|
|:--:|:--:|
|`mongedp(n, cost, ∞)`|コストが $\mathrm{cost}(i, k, j)$ で計算できる $N$ 個の要素に MongeDP を行った解|


## 参考

- https://topcoder.g.hatena.ne.jp/spaghetti_source/comment?date=20120915


## ToDo

- 最適二分探索木
  - Hu-Tucker
    - https://atcoder.jp/contests/atc002/tasks/atc002_c
    - https://ei1333.github.io/luzhiled/snippets/dp/hu-tucker.html
    - https://github.com/beet-aizu/library/blob/master/algorithm/optimalbinarytree.cpp
    - https://lumakernel.github.io/ecasdqina/algorithm/Hu-Tucker
    -  https://atcoder.jp/contests/kupc2012/submissions/29656
- monotone minima
  - https://topcoder-g-hatena-ne-jp.jag-icpc.org/spaghetti_source/20120923/1348327542.html
  - https://ferin-tech.hatenablog.com/entry/2018/02/23/071343
  - https://ei1333.github.io/luzhiled/snippets/dp/monotone-minima.html
  - https://github.com/beet-aizu/library/blob/master/algorithm/monotoneminima.cpp
  - https://lumakernel.github.io/ecasdqina/math/Monge
  - https://lumakernel.github.io/ecasdqina/dynamic-programming/speedup/Monotone-Minima
  - http://sigma425.hatenablog.com/entry/2015/12/01/162720
- SMAWK algorithm
  - https://en.wikipedia.org/wiki/SMAWK_algorithm
  - https://topcoder-g-hatena-ne-jp.jag-icpc.org/spaghetti_source/20120923/1348327542.html
  - https://drive.google.com/drive/folders/1FMOglXlDlyg6FJiP5QTJ0iSMq7XA2mqy
- オフライン・オンライン変換
  - https://qiita.com/tmaehara/items/0687af2cfb807cde7860
  - https://github.com/ei1333/library/blob/master/dp/online-offline-dp.cpp
  - https://docs.google.com/presentation/d/1cgPtVG4j4Ima6Exf_Kw1IdYVfmfDJSGwaEgOMgPkWHg
- divide and conquer
  - https://ferin-tech.hatenablog.com/entry/2018/02/23/071343
  - https://www.hamayanhamayan.com/entry/2017/03/20/234711
  - https://ei1333.github.io/algorithm/dynamic-programming.html
  - https://ei1333.github.io/luzhiled/snippets/dp/divide-and-conquer-optimization.html
  - https://lumakernel.github.io/ecasdqina/dynamic-programming/speedup/Divide-and-Conquer-Optimization


## Verified

https://onlinejudge.u-aizu.ac.jp/solutions/problem/2415/review/4082345/emthrm/C++14