/*
 * @brief 数学/行列/バイナリ行列/連立一次方程式 バイナリ行列版
 */
#define PROBLEM "https://yukicoder.me/problems/no/1421"

#include <iostream>
#include <vector>
#include "../../../../math/matrix/binary_matrix/binary_matrix.hpp"
#include "../../../../math/matrix/binary_matrix/linear_equation.hpp"

int main() {
  constexpr int N = 50, B = 30;
  using binary_matrix = BinaryMatrix<N>;
  int n, m;
  std::cin >> n >> m;
  std::vector<std::vector<int>> b(m);
  std::vector<int> y(m);
  for (int i = 0; i < m; ++i) {
    int a;
    std::cin >> a;
    b[i].resize(a);
    for (int j = 0; j < a; ++j) {
      std::cin >> b[i][j];
      --b[i][j];
    }
    std::cin >> y[i];
  }
  std::vector<int> x(n, 0);
  for (int bit = 0; bit < B; ++bit) {
    binary_matrix a(m, n, 0);
    std::vector<bool> v(m);
    for (int i = 0; i < m; ++i) {
      for (int bij : b[i]) a[i][bij] = 1;
      v[i] = y[i] >> bit & 1;
    }
    std::vector<bool> ans = linear_equation(a, v);
    if (ans.empty()) {
      std::cout << "-1\n";
      return 0;
    }
    for (int i = 0; i < n; ++i) x[i] |= ans[i] << bit;
  }
  for (int i = 0; i < n; ++i) std::cout << x[i] << '\n';
  return 0;
}
