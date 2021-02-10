/**
 * @brief 逆元の数表
 * @docs docs/math/inverse_element/inverse_element.md
 */

#pragma once
#include <vector>

std::vector<long long> inv_init(int val, int mod) {
  std::vector<long long> inv(val + 1, 0);
  inv[1] = 1;
  for (int i = 2; i <= val; ++i) {
    inv[i] = mod - inv[mod % i] * (mod / i) % mod;
    if (inv[i] == mod) inv[i] = 0;
  }
  return inv;
}