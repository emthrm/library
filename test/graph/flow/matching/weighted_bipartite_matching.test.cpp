/*
 * @brief グラフ/フロー/マッチング/二部グラフの重み付き最大マッチング
 */
#define IGNORE
#define PROBLEM "http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=2429"

#include <iostream>
#include <string>
#include <vector>
#include "../../../../graph/flow/matching/weighted_bipartite_matching.hpp"

int main() {
  int n;
  std::cin >> n;
  std::vector<std::vector<int>> w(n, std::vector<int>(n)), e(n, std::vector<int>(n));
  for (int i = 0; i < n; ++i) for (int j = 0; j < n; ++j) std:: cin >> w[i][j];
  for (int i = 0; i < n; ++i) for (int j = 0; j < n; ++j) std:: cin >> e[i][j];
  std::vector<std::vector<char>> f(n, std::vector<char>(n));
  long long ans = 0;
  for (int i = 0; i < n; ++i) for (int j = 0; j < n; ++j) {
    std::cin >> f[i][j];
    if (f[i][j] == 'o') ans += e[i][j];
  }
  WeightedBipartiteMatching<long long> wbm(n, n);
  for (int i = 0; i < n; ++i) for (int j = 0; j < n; ++j) {
    wbm.add_edge(i, j, f[i][j] == 'o' ? e[i][j] : -w[i][j]);
  }
  std::cout << ans - wbm.solve() << '\n';
  std::vector<std::vector<char>> taro(n, std::vector<char>(n, '.'));
  std::vector<int> match = wbm.matching();
  for (int i = 0; i < n; ++i) taro[i][match[i]] = 'o';
  std::vector<int> r, c;
  std::vector<std::string> operate;
  for (int i = 0; i < n; ++i) for (int j = 0; j < n; ++j) {
    if (f[i][j] != taro[i][j]) {
      r.emplace_back(i + 1);
      c.emplace_back(j + 1);
      operate.emplace_back(f[i][j] == 'o' ? "erase" : "write");
    }
  }
  int cnt = r.size();
  std::cout << cnt << '\n';
  for (int i = 0; i < cnt; ++i) std::cout << r[i] << ' ' << c[i] << ' ' << operate[i] << '\n';
  return 0;
}
