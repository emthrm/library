/*
 * @brief 動的計画法/部分和問題
 */
#define PROBLEM "https://judge.yosupo.jp/problem/sharp_p_subset_sum"

#include <iostream>
#include <vector>
#include "../../math/modint.hpp"
#include "../../math/convolution/number_theoretic_transform.hpp"
#include "../../math/formal_power_series/formal_power_series.hpp"
#include "../../dynamic_programming/subset_sum_problem.hpp"

int main() {
  using ModInt = MInt<0>;
  ModInt::set_mod(998244353);
  NumberTheoreticTransform<0> ntt;
  FormalPowerSeries<ModInt>::set_mul([&](const std::vector<ModInt> &a, const std::vector<ModInt> &b) -> std::vector<ModInt> {
    return ntt.convolution(a, b);
  });
  int n, t;
  std::cin >> n >> t;
  std::vector<int> s(n);
  for (int i = 0; i < n; ++i) std::cin >> s[i];
  std::vector<ModInt> p = subset_sum_problem<ModInt>(s, t);
  for (int i = 1; i <= t; ++i) std::cout << p[i] << " \n"[i == t];
  return 0;
}
