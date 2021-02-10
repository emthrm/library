/*
 * @brief グラフ/内周
 */
#define IGNORE
#define PROBLEM "https://yukicoder.me/problems/no/1320"

#include <iostream>
#include <vector>
#include "../../graph/girth_in_undirected_graph.hpp"
#include "../../graph/girth_in_directed_graph.hpp"

int main() {
  constexpr long long LINF = 0x3f3f3f3f3f3f3f3fLL;
  int t, n, m;
  std::cin >> t >> n >> m;
  if (t == 0) {
    std::vector<Edge<long long>> edges;
    while (m--) {
      int u, v, w;
      std::cin >> u >> v >> w;
      --u; --v;
      edges.emplace_back(u, v, w);
    }
    long long ans = girth_in_undirected_graph(n, edges, LINF);
    std::cout << (ans == LINF ? -1 : ans) << '\n';
  } else if (t == 1) {
    std::vector<std::vector<Edge<long long>>> graph(n);
    while (m--) {
      int u, v, w;
      std::cin >> u >> v >> w;
      --u; --v;
      graph[u].emplace_back(u, v, w);
    }
    long long ans = girth_in_directed_graph(graph, LINF);
    std::cout << (ans == LINF ? -1 : ans) << '\n';
  }
  return 0;
}