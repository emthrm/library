/*
 * @brief 数学/形式的冪級数/形式的冪級数 (translate(c))
 */
#define PROBLEM "https://judge.yosupo.jp/problem/polynomial_taylor_shift"

#include <iostream>
#include <vector>
#include "../../../math/modint.hpp"
#include "../../../math/formal_power_series/formal_power_series.hpp"
#include "../../../math/convolution/number_theoretic_transform.hpp"

int main() {
  using ModInt = MInt<0>;
  ModInt::set_mod(998244353);
  NumberTheoreticTransform<0> ntt;
  FormalPowerSeries<ModInt>::set_mul([&](const std::vector<ModInt> &a, const std::vector<ModInt> &b) -> std::vector<ModInt> {
    return ntt.convolution(a, b);
  });
  int n, c;
  std::cin >> n >> c;
  FormalPowerSeries<ModInt> fps(n - 1);
  for (int i = 0; i < n; ++i) std::cin >> fps[i];
  fps = fps.translate(c);
  for (int i = 0; i < n; ++i) std::cout << fps[i] << " \n"[i + 1 == n];
  return 0;
}
