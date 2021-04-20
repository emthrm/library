---
data:
  _extendedDependsOn:
  - icon: ':question:'
    path: graph/edge.hpp
    title: "\u8FBA"
  - icon: ':heavy_check_mark:'
    path: graph/shortest_path/bellman-ford.hpp
    title: "Bellman-Ford \u6CD5"
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=GRL_1_B
    document_title: "\u30B0\u30E9\u30D5/\u6700\u77ED\u8DEF\u554F\u984C/Bellman-Ford\
      \ \u6CD5"
    links:
    - http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=GRL_1_B
  bundledCode: "Traceback (most recent call last):\n  File \"/opt/hostedtoolcache/Python/3.9.4/x64/lib/python3.9/site-packages/onlinejudge_verify/documentation/build.py\"\
    , line 71, in _render_source_code_stat\n    bundled_code = language.bundle(stat.path,\
    \ basedir=basedir, options={'include_paths': [basedir]}).decode()\n  File \"/opt/hostedtoolcache/Python/3.9.4/x64/lib/python3.9/site-packages/onlinejudge_verify/languages/cplusplus.py\"\
    , line 187, in bundle\n    bundler.update(path)\n  File \"/opt/hostedtoolcache/Python/3.9.4/x64/lib/python3.9/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 401, in update\n    self.update(self._resolve(pathlib.Path(included), included_from=path))\n\
    \  File \"/opt/hostedtoolcache/Python/3.9.4/x64/lib/python3.9/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 312, in update\n    raise BundleErrorAt(path, i + 1, \"#pragma once found\
    \ in a non-first line\")\nonlinejudge_verify.languages.cplusplus_bundle.BundleErrorAt:\
    \ graph/edge.hpp: line 5: #pragma once found in a non-first line\n"
  code: "/*\r\n * @brief \u30B0\u30E9\u30D5/\u6700\u77ED\u8DEF\u554F\u984C/Bellman-Ford\
    \ \u6CD5\r\n */\r\n#define PROBLEM \"http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=GRL_1_B\"\
    \r\n\r\n#include <iostream>\r\n#include <vector>\r\n#include \"../../../graph/edge.hpp\"\
    \r\n#include \"../../../graph/shortest_path/bellman-ford.hpp\"\r\n\r\nint main()\
    \ {\r\n  int v, e, r;\r\n  std::cin >> v >> e >> r;\r\n  std::vector<std::vector<Edge<long\
    \ long>>> graph(v);\r\n  for (int i = 0; i < e; ++i) {\r\n    int s, t, d;\r\n\
    \    std::cin >> s >> t >> d;\r\n    graph[s].emplace_back(s, t, d);\r\n  }\r\n\
    \  BellmanFord<long long> bf(graph);\r\n  if (bf.has_negative_cycle(r)) {\r\n\
    \    std::cout << \"NEGATIVE CYCLE\\n\";\r\n    return 0;\r\n  }\r\n  for (int\
    \ i = 0; i < v; ++i) {\r\n    if (bf.dist[i] == bf.inf) {\r\n      std::cout <<\
    \ \"INF\\n\";\r\n    } else {\r\n      std::cout << bf.dist[i] << '\\n';\r\n \
    \   }\r\n  }\r\n  return 0;\r\n}\r\n"
  dependsOn:
  - graph/edge.hpp
  - graph/shortest_path/bellman-ford.hpp
  isVerificationFile: true
  path: test/graph/shortest_path/bellman-ford.test.cpp
  requiredBy: []
  timestamp: '2021-02-13 06:42:09+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/graph/shortest_path/bellman-ford.test.cpp
layout: document
redirect_from:
- /verify/test/graph/shortest_path/bellman-ford.test.cpp
- /verify/test/graph/shortest_path/bellman-ford.test.cpp.html
title: "\u30B0\u30E9\u30D5/\u6700\u77ED\u8DEF\u554F\u984C/Bellman-Ford \u6CD5"
---