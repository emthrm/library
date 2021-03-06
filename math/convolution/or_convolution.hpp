/**
 * @brief 添え字 or での畳み込み
 * @docs docs/math/convolution/convolution.md
 */

#pragma once
#include <vector>
#include "fast_zeta_transform.hpp"
#include "fast_mobius_transform.hpp"

template <typename T>
std::vector<T> or_convolution(const std::vector<T> &a, const std::vector<T> &b, const T ID = 0) {
  std::vector<T> fzt_a = fast_zeta_transform(a, false, ID), fzt_b = fast_zeta_transform(b, false, ID);
  int n = fzt_a.size();
  for (int i = 0; i < n; ++i) fzt_a[i] *= fzt_b[i];
  return fast_mobius_transform(fzt_a, false);
}
