/*
 * @brief 動的計画法/Knuth-Yao speedup
 */
#define IGNORE
#define PROBLEM "http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=2415"

#include <iostream>
#include <vector>
#include "../../dynamic_programming/knuth_yao_speedup.hpp"

// 二分探索木のコスト: Σa[i] * depth(i) の最小値
int main() {
  constexpr long long LINF = 0x3f3f3f3f3f3f3f3fLL;
  int n;
  std::cin >> n;
  std::vector<long long> w(n);
  for (int i = 0; i < n; ++i) std::cin >> w[i];
  std::vector<std::vector<long long>> f(n, std::vector<long long>(n, 0));
  for (int i = 0; i < n; ++i) {
    f[i][i] = w[i];
    for (int j = i + 1; j < n; ++j) f[i][j] = f[i][j - 1] + w[j];
  }
  std::cout << knuth_yao_speedup(f, LINF) << '\n';
  return 0;
}
