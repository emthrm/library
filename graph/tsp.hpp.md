---
data:
  _extendedDependsOn:
  - icon: ':question:'
    path: graph/edge.hpp
    title: "\u8FBA"
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/graph/tsp.test.cpp
    title: "\u30B0\u30E9\u30D5/\u5DE1\u56DE\u30BB\u30FC\u30EB\u30B9\u30DE\u30F3\u554F\
      \u984C"
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "Traceback (most recent call last):\n  File \"/opt/hostedtoolcache/Python/3.9.4/x64/lib/python3.9/site-packages/onlinejudge_verify/documentation/build.py\"\
    , line 71, in _render_source_code_stat\n    bundled_code = language.bundle(stat.path,\
    \ basedir=basedir, options={'include_paths': [basedir]}).decode()\n  File \"/opt/hostedtoolcache/Python/3.9.4/x64/lib/python3.9/site-packages/onlinejudge_verify/languages/cplusplus.py\"\
    , line 187, in bundle\n    bundler.update(path)\n  File \"/opt/hostedtoolcache/Python/3.9.4/x64/lib/python3.9/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 401, in update\n    self.update(self._resolve(pathlib.Path(included), included_from=path))\n\
    \  File \"/opt/hostedtoolcache/Python/3.9.4/x64/lib/python3.9/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 312, in update\n    raise BundleErrorAt(path, i + 1, \"#pragma once found\
    \ in a non-first line\")\nonlinejudge_verify.languages.cplusplus_bundle.BundleErrorAt:\
    \ graph/edge.hpp: line 5: #pragma once found in a non-first line\n"
  code: "#pragma once\r\n#include <limits>\r\n#include <numeric>\r\n#include <vector>\r\
    \n#include \"edge.hpp\"\r\n\r\ntemplate <typename CostType>\r\nCostType tsp(const\
    \ std::vector<std::vector<Edge<CostType>>> &graph, const CostType inf = std::numeric_limits<CostType>::max())\
    \ {\r\n  int n = graph.size();\r\n  if (n == 1) return 0;\r\n  std::vector<std::vector<CostType>>\
    \ dp(1 << n, std::vector<CostType>(n, inf));\r\n  dp[1][0] = 0;\r\n  for (int\
    \ i = 1; i < (1 << n); ++i) for (int j = 0; j < n; ++j) {\r\n    if (dp[i][j]\
    \ == inf) continue;\r\n    for (const Edge<CostType> &e : graph[j]) {\r\n    \
    \  if (i >> e.dst & 1) continue;\r\n      CostType tmp = dp[i][j] + e.cost;\r\n\
    \      if (tmp < dp[i | (1 << e.dst)][e.dst]) dp[i | (1 << e.dst)][e.dst] = tmp;\r\
    \n    }\r\n  }\r\n  CostType res = inf;\r\n  for (int j = 1; j < n; ++j) {\r\n\
    \    if (dp[(1 << n) - 1][j] == inf) continue;\r\n    for (const Edge<CostType>\
    \ &e : graph[j]) {\r\n      if (e.dst == 0) {\r\n        CostType tmp = dp[(1\
    \ << n) - 1][j] + e.cost;\r\n        if (tmp < res) res = tmp;\r\n      }\r\n\
    \    }\r\n  }\r\n  return res;\r\n}\r\n"
  dependsOn:
  - graph/edge.hpp
  isVerificationFile: false
  path: graph/tsp.hpp
  requiredBy: []
  timestamp: '2021-02-13 06:42:09+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/graph/tsp.test.cpp
documentation_of: graph/tsp.hpp
layout: document
title: "\u5DE1\u56DE\u30BB\u30FC\u30EB\u30B9\u30DE\u30F3\u554F\u984C (traveling salesman\
  \ problem)"
---

重み付き有向グラフについてハミルトン閉路の最小コストを求める問題である．


## 時間計算量

$O(2^{\lvert V \rvert} {\lvert V \rvert}^2)$


## 使用法

||説明|備考|
|:--:|:--:|:--:|
|`tsp(graph, ∞)`|グラフ $\mathrm{graph}$ の巡回セールスマン問題の解|存在しない場合は $\infty$ となる．|


## 参考

- プログラミングコンテストチャレンジブック \[第2版\] pp.173-175


## ToDo

- 最短のハミルトン路
  - https://ja.wikipedia.org/wiki/%E3%83%8F%E3%83%9F%E3%83%AB%E3%83%88%E3%83%B3%E8%B7%AF
  - https://ja.wikipedia.org/wiki/%E3%83%8F%E3%83%9F%E3%83%AB%E3%83%88%E3%83%B3%E9%96%89%E8%B7%AF%E5%95%8F%E9%A1%8C
  - http://www.prefield.com/algorithm/graph/shortest_hamilton_path.html
  - https://github.com/primenumber/ProconLib/blob/master/Graph/ShortestHamiltonPath.cpp
  - https://github.com/spaghetti-source/algorithm/blob/master/graph/hamilton_cycle_ore.cc


## Verified

https://onlinejudge.u-aizu.ac.jp/solutions/problem/DPL_2_A/review/5219970/emthrm/C++17