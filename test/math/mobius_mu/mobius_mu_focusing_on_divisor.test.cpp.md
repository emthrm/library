---
data:
  _extendedDependsOn:
  - icon: ':x:'
    path: math/mobius_mu/mobius_mu_focusing_on_divisor.hpp
    title: "\u30E1\u30D3\u30A6\u30B9\u95A2\u6570 \u7D04\u6570\u7248"
  - icon: ':question:'
    path: math/modint.hpp
    title: "\u30E2\u30B8\u30E5\u30E9\u8A08\u7B97"
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: true
  _pathExtension: cpp
  _verificationStatusIcon: ':x:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    IGNORE: ''
    IGNORE_IF_CLANG: ''
    IGNORE_IF_GCC: ''
    document_title: "\u6570\u5B66/\u30E1\u30D3\u30A6\u30B9\u95A2\u6570/\u30E1\u30D3\
      \u30A6\u30B9\u95A2\u6570 \u7D04\u6570\u7248"
    links:
    - https://codeforces.com/problemset/problem/1139/D
  bundledCode: "Traceback (most recent call last):\n  File \"/opt/hostedtoolcache/Python/3.9.5/x64/lib/python3.9/site-packages/onlinejudge_verify/documentation/build.py\"\
    , line 71, in _render_source_code_stat\n    bundled_code = language.bundle(stat.path,\
    \ basedir=basedir, options={'include_paths': [basedir]}).decode()\n  File \"/opt/hostedtoolcache/Python/3.9.5/x64/lib/python3.9/site-packages/onlinejudge_verify/languages/cplusplus.py\"\
    , line 187, in bundle\n    bundler.update(path)\n  File \"/opt/hostedtoolcache/Python/3.9.5/x64/lib/python3.9/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 401, in update\n    self.update(self._resolve(pathlib.Path(included), included_from=path))\n\
    \  File \"/opt/hostedtoolcache/Python/3.9.5/x64/lib/python3.9/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 312, in update\n    raise BundleErrorAt(path, i + 1, \"#pragma once found\
    \ in a non-first line\")\nonlinejudge_verify.languages.cplusplus_bundle.BundleErrorAt:\
    \ math/mobius_mu/mobius_mu_focusing_on_divisor.hpp: line 6: #pragma once found\
    \ in a non-first line\n"
  code: "/*\r\n * @brief \u6570\u5B66/\u30E1\u30D3\u30A6\u30B9\u95A2\u6570/\u30E1\u30D3\
    \u30A6\u30B9\u95A2\u6570 \u7D04\u6570\u7248\r\n */\r\n#define IGNORE\r\n#define\
    \ PROBLEM \"https://codeforces.com/problemset/problem/1139/D\"\r\n\r\n#include\
    \ <iostream>\r\n#include <map>\r\n#include <utility>\r\n#include \"../../../math/modint.hpp\"\
    \r\n#include \"../../../math/mobius_mu/mobius_mu_focusing_on_divisor.hpp\"\r\n\
    \r\nint main() {\r\n  using ModInt = MInt<0>;\r\n  ModInt::set_mod(1000000007);\r\
    \n  int m;\r\n  std::cin >> m;\r\n  std::map<int, int> mp;\r\n  ModInt ans = 1;\r\
    \n  for (int i = m; i >= 2; --i) {\r\n    if (mp.count(i) == 0) {\r\n      for\
    \ (const std::pair<int, int> &pr : mobius_mu_focusing_on_divisor(i)) mp[pr.first]\
    \ = pr.second;\r\n    }\r\n    ans -= (ModInt(m) / (m - m / i) - 1) * mp[i];\r\
    \n  }\r\n  std::cout << ans << '\\n';\r\n  return 0;\r\n}\r\n"
  dependsOn:
  - math/modint.hpp
  - math/mobius_mu/mobius_mu_focusing_on_divisor.hpp
  isVerificationFile: true
  path: test/math/mobius_mu/mobius_mu_focusing_on_divisor.test.cpp
  requiredBy: []
  timestamp: '2021-04-27 20:43:20+09:00'
  verificationStatus: TEST_WRONG_ANSWER
  verifiedWith: []
documentation_of: test/math/mobius_mu/mobius_mu_focusing_on_divisor.test.cpp
layout: document
redirect_from:
- /verify/test/math/mobius_mu/mobius_mu_focusing_on_divisor.test.cpp
- /verify/test/math/mobius_mu/mobius_mu_focusing_on_divisor.test.cpp.html
title: "\u6570\u5B66/\u30E1\u30D3\u30A6\u30B9\u95A2\u6570/\u30E1\u30D3\u30A6\u30B9\
  \u95A2\u6570 \u7D04\u6570\u7248"
---