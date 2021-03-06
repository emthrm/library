#define IGNORE
#define PROBLEM "https://atcoder.jp/contests/jsc2021/tasks/jsc2021_g"

#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>
#include "../../../math/modint.hpp"
#include "../../../data_structure/union-find/union-find.hpp"
#include "../../../graph/light/matrix_tree_theorem.hpp"

int main() {
  using ModInt = MInt<0>;
  ModInt::set_mod(1000000007);
  int n;
  std::cin >> n;
  std::vector<std::vector<int>> a(n, std::vector<int>(n));
  for (int i = 0; i < n; ++i) for (int j = 0; j < n; ++j) std::cin >> a[i][j];
  UnionFind uf(n);
  for (int i = 0; i < n; ++i) for (int j = i + 1; j < n; ++j) {
    if (a[i][j] == 1 && !uf.unite(i, j)) {
      std::cout << 0 << '\n';
      return 0;
    }
  }
  std::vector<int> root;
  for (int i = 0; i < n; ++i) {
    if (uf.root(i) == i) root.emplace_back(i);
  }
  std::vector<int> id(n);
  for (int i = 0; i < n; ++i) {
    id[i] = std::distance(root.begin(), std::lower_bound(root.begin(), root.end(), uf.root(i)));
  }
  int m = root.size();
  std::vector<std::vector<int>> graph(m);
  for (int i = 0; i < n; ++i) for (int j = i + 1; j < n; ++j) {
    if (a[i][j] == -1) {
      graph[id[i]].emplace_back(id[j]);
      graph[id[j]].emplace_back(id[i]);
    }
  }
  std::cout << matrix_tree_theorem<ModInt>(graph, ModInt(0)) << '\n';
  return 0;
}
