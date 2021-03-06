/*
 * @brief 数学/畳み込み/添え字 xor での畳み込み
 */
#define PROBLEM "https://judge.yosupo.jp/problem/bitwise_xor_convolution"

#include <iostream>
#include <vector>
#include "../../../math/modint.hpp"
#include "../../../math/convolution/xor_convolution.hpp"

int main() {
  using ModInt = MInt<0>;
  ModInt::set_mod(998244353);
  int n;
  std::cin >> n;
  std::vector<ModInt> a(1 << n), b(1 << n);
  for (int i = 0; i < (1 << n); ++i) std::cin >> a[i];
  for (int i = 0; i < (1 << n); ++i) std::cin >> b[i];
  std::vector<ModInt> c = xor_convolution(a, b);
  for (int i = 0; i < (1 << n); ++i) std::cout << c[i] << " \n"[i + 1 == 1 << n];
  return 0;
}
