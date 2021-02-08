/*
 * @brief 数学/写像12相/スターリング数/第1種スターリング数の数表 形式的冪級数版2
 */
#define PROBLEM "https://judge.yosupo.jp/problem/stirling_number_of_the_first_kind"

#include <iostream>
#include <vector>
#include "../../../../math/modint.hpp"
#include "../../../../math/convolution/ntt.hpp"
#include "../../../../math/fps/fps.hpp"
#include "../../../../math/twelvefold_way/stirling_number/stirling_number_of_the_first_kind_init_with_fps2.hpp"

int main() {
  ModInt::set_mod(998244353);
  NTT ntt;
  FPS<ModInt>::set_mul([&](const std::vector<ModInt> &a, const std::vector<ModInt> &b) -> std::vector<ModInt> {
    return ntt.convolution(a, b);
  });
  int n;
  std::cin >> n;
  std::vector<ModInt> s = stirling_number_of_the_first_kind_init_with_fps2<ModInt>(n);
  for (int i = 0; i <= n; ++i) std::cout << s[i] << " \n"[i == n];
  return 0;
}
