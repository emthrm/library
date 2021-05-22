---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 2 \"util/timer.hpp\"\n#include <chrono>\r\n\r\nstruct Timer\
    \ {\r\n  Timer() { reset(); }\r\n  void reset() { beg = std::chrono::high_resolution_clock::now();\
    \ }\r\n  template <typename PeriodType = std::chrono::milliseconds>\r\n  long\
    \ long elapsed() const {\r\n    std::chrono::high_resolution_clock::time_point\
    \ en = std::chrono::high_resolution_clock::now();\r\n    return std::chrono::duration_cast<PeriodType>(en\
    \ - beg).count();\r\n  }\r\nprivate:\r\n  std::chrono::high_resolution_clock::time_point\
    \ beg;\r\n} timer;\r\n"
  code: "#pragma once\r\n#include <chrono>\r\n\r\nstruct Timer {\r\n  Timer() { reset();\
    \ }\r\n  void reset() { beg = std::chrono::high_resolution_clock::now(); }\r\n\
    \  template <typename PeriodType = std::chrono::milliseconds>\r\n  long long elapsed()\
    \ const {\r\n    std::chrono::high_resolution_clock::time_point en = std::chrono::high_resolution_clock::now();\r\
    \n    return std::chrono::duration_cast<PeriodType>(en - beg).count();\r\n  }\r\
    \nprivate:\r\n  std::chrono::high_resolution_clock::time_point beg;\r\n} timer;\r\
    \n"
  dependsOn: []
  isVerificationFile: false
  path: util/timer.hpp
  requiredBy: []
  timestamp: '2021-02-25 00:00:42+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: util/timer.hpp
layout: document
title: "\u30BF\u30A4\u30DE\u30FC (timer)"
---


## 使用法

||説明|
|:--:|:--:|
|`timer.reset()`|リセット|
|`timer.elapsed<std::chrono::時間間隔を表す型 = milliseconds>()`|計測時間|


## 参考

- http://vivi.dyndns.org/tech/cpp/timeMeasurement.html#chrono
- https://cpprefjp.github.io/reference/chrono.html