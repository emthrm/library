/*
 * @brief 数学/写像12相/分割数 $n = m$ 版
 */
#define PROBLEM "https://judge.yosupo.jp/problem/partition_function"

#include <iostream>
#include <vector>
#include "../../../math/modint.hpp"
#include "../../../math/convolution/number_theoretic_transform.hpp"
#include "../../../math/formal_power_series/formal_power_series.hpp"
#include "../../../math/twelvefold_way/partition_function_init_by_fps.hpp"

int main() {
  using ModInt = MInt<0>;
  ModInt::set_mod(998244353);
  NumberTheoreticTransform<0> ntt;
  FormalPowerSeries<ModInt>::set_mul([&](const std::vector<ModInt> &a, const std::vector<ModInt> &b) -> std::vector<ModInt> {
    return ntt.convolution(a, b);
  });
  int n;
  std::cin >> n;
  std::vector<ModInt> p = partition_function_init_by_fps<ModInt>(n);
  for (int i = 0; i <= n; ++i) std::cout << p[i] << " \n"[i == n];
  return 0;
}
