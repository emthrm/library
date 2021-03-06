/*
 * @brief 数学/一元二次方程式
 */
#define PROBLEM "http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=1039"

#include <algorithm>
#include <cmath>
#include <iostream>
#include <tuple>
#include <utility>
#include <vector>
#include "../../geometry/geometry.hpp"
#include "../../math/quadratic_equation.hpp"

int main() {
  constexpr double EPS = 1e-8;
  constexpr int INF = 0x3f3f3f3f;
  while (true) {
    int n, m;
    std::cin >> n >> m;
    if (n == 0 && m == 0) break;
    std::vector<std::pair<geometry::Point, double>> dog;
    for (int i = 0; i < n; ++i) {
      geometry::Point d;
      double v;
      std::cin >> d >> v;
      dog.emplace_back(d, v);
    }
    std::vector<int> ans(n, 0);
    while (m--) {
      geometry::Point fp, fv;
      std::cin >> fp >> fv;
      std::vector<double> t(n, INF);
      for (int i = 0; i < n; ++i) {
        geometry::Point d;
        double v;
        std::tie(d, v) = dog[i];
        std::vector<double> ans = quadratic_equation(fv.norm() - v * v, geometry::dot(fp - d, fv) * 2, (fp - d).norm());
        while (!ans.empty()) {
          if (ans.back() >= 0) t[i] = ans.back();
          ans.pop_back();
        }
      }
      double frisbee = *std::min_element(t.begin(), t.end());
      for (int i = 0; i < n; ++i) {
        if (std::abs(t[i] - INF) < EPS) continue;
        if (std::abs(frisbee - t[i]) < EPS) ++ans[i];
        geometry::Point cat = fp + fv * t[i];
        dog[i].first += (cat - dog[i].first) * frisbee / t[i];
      }
    }
    for (int i = 0; i < n; ++i) std::cout << ans[i] << " \n"[i + 1 == n];
  }
  return 0;
}
