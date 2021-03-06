/*
 * @brief 数学/素因数分解
 */
#define PROBLEM "http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=NTL_1_A"

#include <iostream>
#include <utility>
#include <vector>
#include "../../math/prime_factorization.hpp"

int main() {
  int n;
  std::cin >> n;
  std::vector<std::pair<int, int>> ans = prime_factorization(n);
  std::cout << n << ": ";
  for (int i = 0; i < ans.size(); ++i) for (int j = 0; j < ans[i].second; ++j) {
    std::cout << ans[i].first << " \n"[i + 1 == ans.size() && j + 1 == ans[i].second];
  }
  return 0;
}
