/*
 * @brief グラフ/フロー/最大流/project selection problem
 */
#define PROBLEM "http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=2903"

#include <iostream>
#include <string>
#include <vector>
#include "../../../../graph/flow/maximum_flow/dinic.hpp"
#include "../../../../graph/flow/maximum_flow/project_selection_problem.hpp"

int main() {
  int r, c;
  std::cin >> r >> c;
  std::vector<std::string> s(r);
  for (int i = 0; i < r; ++i) std::cin >> s[i];
  std::vector<std::vector<int>> idx(r, std::vector<int>(c, -1));
  int n = 0;
  for (int i = 0; i < r; ++i) for (int j = 0; j < c; ++j) {
    if (s[i][j] == '#') idx[i][j] = n++;
  }
  ProjectSelectionProblem<Dinic, int> psp(n);
  for (int i = 0; i < r; ++i) for (int j = 0; j < c; ++j) {
    if (idx[i][j] == -1) continue;
    if (i + 1 < r && idx[i + 1][j] != -1) psp.add_eq(idx[i][j], idx[i + 1][j], 0, -1);
    if (j + 1 < c && idx[i][j + 1] != -1) psp.add_eq(idx[i][j], idx[i][j + 1], 1, -1);
  }
  std::cout << n + psp.solve() << '\n';
  return 0;
}
