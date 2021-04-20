---
data:
  _extendedDependsOn:
  - icon: ':question:'
    path: math/modint.hpp
    title: "\u30E2\u30B8\u30E5\u30E9\u8A08\u7B97"
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/math/twelvefold_way/bell_number/bell_number.test.cpp
    title: "\u6570\u5B66/\u5199\u50CF12\u76F8/\u30D9\u30EB\u6570/\u30D9\u30EB\u6570"
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    _deprecated_at_docs: docs/math/twelvefold_way/bell_number/bell_number.md
    document_title: "\u30D9\u30EB\u6570"
    links: []
  bundledCode: "Traceback (most recent call last):\n  File \"/opt/hostedtoolcache/Python/3.9.4/x64/lib/python3.9/site-packages/onlinejudge_verify/documentation/build.py\"\
    , line 71, in _render_source_code_stat\n    bundled_code = language.bundle(stat.path,\
    \ basedir=basedir, options={'include_paths': [basedir]}).decode()\n  File \"/opt/hostedtoolcache/Python/3.9.4/x64/lib/python3.9/site-packages/onlinejudge_verify/languages/cplusplus.py\"\
    , line 187, in bundle\n    bundler.update(path)\n  File \"/opt/hostedtoolcache/Python/3.9.4/x64/lib/python3.9/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 312, in update\n    raise BundleErrorAt(path, i + 1, \"#pragma once found\
    \ in a non-first line\")\nonlinejudge_verify.languages.cplusplus_bundle.BundleErrorAt:\
    \ math/twelvefold_way/bell_number/bell_number.hpp: line 6: #pragma once found\
    \ in a non-first line\n"
  code: "/**\r\n * @brief \u30D9\u30EB\u6570\r\n * @docs docs/math/twelvefold_way/bell_number/bell_number.md\r\
    \n */\r\n\r\n#pragma once\r\n#include <cassert>\r\n#include <vector>\r\n#include\
    \ \"../../modint.hpp\"\r\n\r\ntemplate <int T>\r\nMInt<T> bell_number(int n, int\
    \ k) {\r\n  using ModInt = MInt<T>;\r\n  if (k > n) k = n;\r\n  ModInt::init(k);\r\
    \n  std::vector<ModInt> cumulative(k + 1);\r\n  for (int i = 0; i <= k; ++i) cumulative[i]\
    \ = ModInt::fact_inv(i) * (i & 1 ? -1 : 1);\r\n  for (int i = 0; i < k; ++i) cumulative[i\
    \ + 1] += cumulative[i];\r\n  ModInt bell = 0;\r\n  for (int i = 0; i <= k; ++i)\
    \ bell += ModInt(i).pow(n) * ModInt::fact_inv(i) * cumulative[k - i];\r\n  return\
    \ bell;\r\n}\r\n"
  dependsOn:
  - math/modint.hpp
  isVerificationFile: false
  path: math/twelvefold_way/bell_number/bell_number.hpp
  requiredBy: []
  timestamp: '2021-03-07 02:53:11+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/math/twelvefold_way/bell_number/bell_number.test.cpp
documentation_of: math/twelvefold_way/bell_number/bell_number.hpp
layout: document
redirect_from:
- /library/math/twelvefold_way/bell_number/bell_number.hpp
- /library/math/twelvefold_way/bell_number/bell_number.hpp.html
title: "\u30D9\u30EB\u6570"
---
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

||説明|
|:--:|:--:|
|`bell_number<T>(n, k)`|ベル数 $B(n, k)$|

- 数表

||説明|
|:--:|:--:|
|`bell_number_init<T>(n, k)`|ベル数 $B(i, j) \ (0 \leq i \leq n,\ 0 \leq j \leq k)$ の数表|

- $n = k$ 版

||説明|
|:--:|:--:|
|`bell_number_init_with_fps<T>(n)`|ベル数 $B_i \ (0 \leq i \leq n)$ の数表|


## 参考

- https://qiita.com/drken/items/f2ea4b58b0d21621bd51
- https://ja.wikipedia.org/wiki/ベル数


## Verified

- https://onlinejudge.u-aizu.ac.jp/solutions/problem/DPL_5_G/review/4088882/emthrm/C++14
- [数表](https://onlinejudge.u-aizu.ac.jp/solutions/problem/DPL_5_G/review/4088892/emthrm/C++14)
- $n = k$ 版