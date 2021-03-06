/*
 * @brief グラフ/lowlink (橋)
 */
#define PROBLEM "http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=GRL_3_B"

#include <algorithm>
#include <iostream>
#include <vector>
#include "../../graph/edge.hpp"
#include "../../graph/lowlink.hpp"

int main() {
  int v, e;
  std::cin >> v >> e;
  std::vector<std::vector<Edge<bool>>> graph(v);
  while (e--) {
    int s, t;
    std::cin >> s >> t;
    graph[s].emplace_back(s, t);
    graph[t].emplace_back(t, s);
  }
  Lowlink<bool> low(graph);
  std::sort(low.bridge.begin(), low.bridge.end(), [](const Edge<bool> &a, const Edge<bool> &b) -> bool {
    return a.src != b.src ? a.src < b.src : a.dst != b.dst ? a.dst < b.dst : a.cost < b.cost;
  });
  for (const Edge<bool> &e : low.bridge) std::cout << e.src << ' ' << e.dst << '\n';
  return 0;
}
