/*
 * @brief 数学/行列/行列式
 */
#define PROBLEM "https://judge.yosupo.jp/problem/matrix_det"

#include <iostream>
#include "../../../math/modint.hpp"
#include "../../../math/matrix/matrix.hpp"
#include "../../../math/matrix/determinant.hpp"

int main() {
  using ModInt = MInt<0>;
  ModInt::set_mod(998244353);
  int n;
  std::cin >> n;
  Matrix<int> m(n, n);
  for (int i = 0; i < n; ++i) for (int j = 0; j < n; ++j) std::cin >> m[i][j];
  std::cout << det(m, ModInt(0)) << '\n';
  return 0;
}
