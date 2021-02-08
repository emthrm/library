/*
 * @brief 数学/多倍長整数
 */
#define PROBLEM "http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=2679"

#include <algorithm>
#include <iostream>
#include <map>
#include <string>
#include <vector>
#include "../../math/bigint.hpp"
#include "../../graph/flow/matching/weighted_bipartite_matching.hpp"

int main() {
  using bigint = BigInt<>;
  int n;
  std::cin >> n;
  std::map<char, bigint> cost;
  bigint now = 0;
  for (int i = 25; i >= 0; --i) {
    cost['a' + i] = now;
    now = now * 50 + 1;
  }
  for (int i = 25; i >= 0; --i) {
    cost['A' + i] = now;
    now = now * 50 + 1;
  }
  std::vector<std::string> c(n);
  for (int i = 0; i < n; ++i) std::cin >> c[i];
  WeightedBipartiteMatching<bigint> wbm(n, n, now);
  for (int i = 0; i < n; ++i) {
    std::cin >> c[i];
    for (int j = 0; j < n; ++j) wbm.add_edge(i, j, cost[c[i][j]]);
  }
  wbm.solve();
  std::string ans = "";
  std::vector<int> matching = wbm.matching();
  for (int i = 0; i < n; ++i) ans += c[i][matching[i]];
  std::sort(ans.begin(), ans.end());
  std::cout << ans << '\n';
  return 0;
}
