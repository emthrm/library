/*
 * @brief グラフ/フロー/最小費用流/最小費用 $s$-$t$-フロー 最短路反復法版 (solve(s, t, flow))
 */
#define PROBLEM "http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=GRL_6_B"

#include <iostream>
#include "../../../../graph/flow/minimum_cost_flow/minimum_cost_s-t-flow.hpp"

int main() {
  int v, e, f;
  std::cin >> v >> e >> f;
  MinimumCostSTFlow<int, int> mcf(v);
  while (e--) {
    int u, v, c, d;
    std::cin >> u >> v >> c >> d;
    mcf.add_edge(u, v, c, d);
  }
  int ans = mcf.solve(0, v - 1, f);
  std::cout << (ans == mcf.uinf ? -1 : ans) << '\n';
  return 0;
}
