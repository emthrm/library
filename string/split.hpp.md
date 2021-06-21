---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':x:'
    path: test/string/split.test.cpp
    title: "\u6587\u5B57\u5217/\u6587\u5B57\u5217\u306E\u5206\u5272"
  _isVerificationFailed: true
  _pathExtension: hpp
  _verificationStatusIcon: ':x:'
  attributes:
    links: []
  bundledCode: "#line 2 \"string/split.hpp\"\n#include <string>\r\n#include <vector>\r\
    \n\r\nstd::vector<std::string> split(const std::string &s, const std::string &delimiter)\
    \ {\r\n  std::vector<std::string> res;\r\n  int pos = 0;\r\n  while (true) {\r\
    \n    int del_pos = s.find(delimiter, pos);\r\n    if (del_pos == s.npos) break;\r\
    \n    res.emplace_back(s.substr(pos, del_pos - pos));\r\n    pos = del_pos + delimiter.length();\r\
    \n  }\r\n  res.emplace_back(s.substr(pos));\r\n  return res;\r\n}\r\n"
  code: "#pragma once\r\n#include <string>\r\n#include <vector>\r\n\r\nstd::vector<std::string>\
    \ split(const std::string &s, const std::string &delimiter) {\r\n  std::vector<std::string>\
    \ res;\r\n  int pos = 0;\r\n  while (true) {\r\n    int del_pos = s.find(delimiter,\
    \ pos);\r\n    if (del_pos == s.npos) break;\r\n    res.emplace_back(s.substr(pos,\
    \ del_pos - pos));\r\n    pos = del_pos + delimiter.length();\r\n  }\r\n  res.emplace_back(s.substr(pos));\r\
    \n  return res;\r\n}\r\n"
  dependsOn: []
  isVerificationFile: false
  path: string/split.hpp
  requiredBy: []
  timestamp: '2021-02-09 04:38:15+09:00'
  verificationStatus: LIBRARY_ALL_WA
  verifiedWith:
  - test/string/split.test.cpp
documentation_of: string/split.hpp
layout: document
title: "\u6587\u5B57\u5217\u306E\u5206\u5272"
---


## 使用法

||説明|
|:--:|:--:|
|`split(s, delimiter)`|$\mathrm{delimiter}$ で分割した文字列 $S$|


## Verified

https://atcoder.jp/contests/abc033/submissions/9292173