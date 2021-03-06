/*
 * @brief 計算幾何学/計算幾何学 (2円の共通接線)
 */
#define PROBLEM "http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=CGL_7_G"
#define ERROR "0.00001"

#include <algorithm>
#include <iostream>
#include <vector>
#include "../../geometry/geometry.hpp"

int main() {
  geometry::Point c1_o, c2_o;
  double c1r, c2r;
  std::cin >> c1_o >> c1r >> c2_o >> c2r;
  std::vector<geometry::Point> ans;
  for (const geometry::Line &e : geometry::common_tangent(geometry::Circle(c1_o, c1r), geometry::Circle(c2_o, c2r))) {
    ans.emplace_back(e.s);
  }
  std::sort(ans.begin(), ans.end());
  for (const geometry::Point &e : ans) std::cout << e.x << ' ' << e.y << '\n';
  return 0;
}
