/**
 * @brief 分割数 $n = m$ 版
 * @docs docs/math/twelvefold_way/partition_function.md
 */

#pragma once
#include <vector>
#include "../formal_power_series/formal_power_series.hpp"

template <typename T>
std::vector<T> partition_function_init_by_fps(int n) {
  FormalPowerSeries<T> fps(n);
  fps[0] = 1;
  for (int i = 1; i <= n; ++i) {
    long long idx = (3LL * i + 1) * i / 2;
    if (idx <= n) fps[idx] += i & 1 ? -1 : 1;
    idx = (3LL * i - 1) * i / 2;
    if (idx <= n) fps[idx] += i & 1 ? -1 : 1;
  }
  return fps.inv(n).co;
}
