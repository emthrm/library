/*
 * @brief 数学/モンモール数
 */
#define PROBLEM "https://judge.yosupo.jp/problem/montmort_number_mod"

#include <iostream>
#include <vector>
#include "../../math/modint.hpp"
#include "../../math/montmort_number.hpp"

int main() {
  using ModInt = MInt<0>;
  int n, m;
  std::cin >> n >> m;
  ModInt::set_mod(m);
  std::vector<ModInt> b = montmort_number<ModInt>(n);
  for (int i = 1; i <= n; ++i) std::cout << b[i] << " \n"[i == n];
  return 0;
}
