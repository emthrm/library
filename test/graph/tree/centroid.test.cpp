/*
 * @brief グラフ/木/重心
 */
#define IGNORE
#define PROBLEM "https://atcoder.jp/contests/arc087/tasks/arc087_d"

#include <functional>
#include <iostream>
#include <vector>
#include "../../../math/modint.hpp"
#include "../../../graph/edge.hpp"
#include "../../../graph/tree/centroid.hpp"

int main() {
  using ModInt = MInt<0>;
  ModInt::set_mod(1000000007);
  int n;
  std::cin >> n;
  ModInt::init(n);
  std::vector<std::vector<Edge<bool>>> graph(n);
  for (int i = 0; i < n - 1; ++i) {
    int x, y;
    std::cin >> x >> y;
    --x; --y;
    graph[x].emplace_back(x, y);
    graph[y].emplace_back(y, x);
  }
  std::vector<int> centroids = centroid(graph);
  ModInt ans = 0;
  if (centroids.size() == 2) {
    ans += ModInt::fact(n / 2) * ModInt::fact(n / 2);
  } else {
    int cen = centroids[0];
    std::vector<int> subtree(n, 1);
    std::function<void(int, int)> dfs = [&graph, &subtree, &dfs](int par, int ver) -> void {
      for (const Edge<bool> &e : graph[ver]) {
        if (e.dst != par) {
          dfs(ver, e.dst);
          subtree[ver] += subtree[e.dst];
        }
      }
    };
    dfs(-1, cen);
    std::vector<int> cnt;
    for (const Edge<bool> &e : graph[cen]) cnt.emplace_back(subtree[e.dst]);
    int m = cnt.size();
    std::vector<std::vector<ModInt>> dp(m + 1, std::vector<ModInt>(n + 1, 0));
    dp[0][0] = 1;
    for (int i = 0; i < m; ++i) for (int j = 0; j <= n; ++j) {
      for (int k = 0; k <= cnt[i] && j + k <= n; ++k) {
        dp[i + 1][j + k] += dp[i][j] * ModInt::nCk(cnt[i], k) * ModInt::nCk(cnt[i], k) * ModInt::fact(k);
      }
    }
    for (int j = 0; j <= n; ++j) ans += dp[m][j] * (j & 1 ? -1 : 1) * ModInt::fact(n - j);
  }
  std::cout << ans << '\n';
  return 0;
}
