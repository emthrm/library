---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: math/convolution/ntt.hpp
    title: "\u6570\u8AD6\u5909\u63DB"
  - icon: ':question:'
    path: math/fps/fps.hpp
    title: "\u5F62\u5F0F\u7684\u51AA\u7D1A\u6570 (formal power series)"
  - icon: ':question:'
    path: math/modint.hpp
    title: "\u30E2\u30B8\u30E5\u30E9\u8A08\u7B97"
  - icon: ':heavy_check_mark:'
    path: math/twelvefold_way/partition_function_init_with_fps.hpp
    title: "\u5206\u5272\u6570 $n = m$ \u7248"
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://judge.yosupo.jp/problem/partition_function
    document_title: "\u6570\u5B66/\u5199\u50CF12\u76F8/\u5206\u5272\u6570 $n = m$\
      \ \u7248"
    links:
    - https://judge.yosupo.jp/problem/partition_function
  bundledCode: "Traceback (most recent call last):\n  File \"/opt/hostedtoolcache/Python/3.9.4/x64/lib/python3.9/site-packages/onlinejudge_verify/documentation/build.py\"\
    , line 71, in _render_source_code_stat\n    bundled_code = language.bundle(stat.path,\
    \ basedir=basedir, options={'include_paths': [basedir]}).decode()\n  File \"/opt/hostedtoolcache/Python/3.9.4/x64/lib/python3.9/site-packages/onlinejudge_verify/languages/cplusplus.py\"\
    , line 187, in bundle\n    bundler.update(path)\n  File \"/opt/hostedtoolcache/Python/3.9.4/x64/lib/python3.9/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 401, in update\n    self.update(self._resolve(pathlib.Path(included), included_from=path))\n\
    \  File \"/opt/hostedtoolcache/Python/3.9.4/x64/lib/python3.9/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 312, in update\n    raise BundleErrorAt(path, i + 1, \"#pragma once found\
    \ in a non-first line\")\nonlinejudge_verify.languages.cplusplus_bundle.BundleErrorAt:\
    \ math/convolution/ntt.hpp: line 6: #pragma once found in a non-first line\n"
  code: "/*\r\n * @brief \u6570\u5B66/\u5199\u50CF12\u76F8/\u5206\u5272\u6570 $n =\
    \ m$ \u7248\r\n */\r\n#define PROBLEM \"https://judge.yosupo.jp/problem/partition_function\"\
    \r\n\r\n#include <iostream>\r\n#include <vector>\r\n#include \"../../../math/modint.hpp\"\
    \r\n#include \"../../../math/convolution/ntt.hpp\"\r\n#include \"../../../math/fps/fps.hpp\"\
    \r\n#include \"../../../math/twelvefold_way/partition_function_init_with_fps.hpp\"\
    \r\n\r\nint main() {\r\n  using ModInt = MInt<0>;\r\n  ModInt::set_mod(998244353);\r\
    \n  NTT<0> ntt;\r\n  FPS<ModInt>::set_mul([&](const std::vector<ModInt> &a, const\
    \ std::vector<ModInt> &b) -> std::vector<ModInt> {\r\n    return ntt.convolution(a,\
    \ b);\r\n  });\r\n  int n;\r\n  std::cin >> n;\r\n  std::vector<ModInt> p = partition_function_init_with_fps<ModInt>(n);\r\
    \n  for (int i = 0; i <= n; ++i) std::cout << p[i] << \" \\n\"[i == n];\r\n  return\
    \ 0;\r\n}\r\n"
  dependsOn:
  - math/modint.hpp
  - math/convolution/ntt.hpp
  - math/fps/fps.hpp
  - math/twelvefold_way/partition_function_init_with_fps.hpp
  isVerificationFile: true
  path: test/math/twelvefold_way/partition_function_init_with_fps.test.cpp
  requiredBy: []
  timestamp: '2021-03-07 02:53:11+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/math/twelvefold_way/partition_function_init_with_fps.test.cpp
layout: document
redirect_from:
- /verify/test/math/twelvefold_way/partition_function_init_with_fps.test.cpp
- /verify/test/math/twelvefold_way/partition_function_init_with_fps.test.cpp.html
title: "\u6570\u5B66/\u5199\u50CF12\u76F8/\u5206\u5272\u6570 $n = m$ \u7248"
---