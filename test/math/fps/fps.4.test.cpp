/*
 * @brief 数学/形式的冪級数/形式的冪級数 (冪乗)
 */
#define PROBLEM "https://judge.yosupo.jp/problem/pow_of_formal_power_series"

#include <iostream>
#include <vector>
#include "../../../math/modint.hpp"
#include "../../../math/fps/fps.hpp"
#include "../../../math/convolution/ntt.hpp"

int main() {
  ModInt::set_mod(998244353);
  NTT ntt;
  FPS<ModInt>::set_mul([&](const std::vector<ModInt> &a, const std::vector<ModInt> &b) -> std::vector<ModInt> {
    return ntt.convolution(a, b);
  });
  int n, m;
  std::cin >> n >> m;
  FPS<ModInt> fps(n - 1);
  for (int i = 0; i < n; ++i) std::cin >> fps[i];
  fps = fps.pow(m, n - 1);
  for (int i = 0; i < n; ++i) std::cout << fps[i] << " \n"[i + 1 == n];
  return 0;
}
