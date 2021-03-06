/**
 * @brief 第1種スターリング数の数表
 * @docs docs/math/twelvefold_way/stirling_number/stirling_number.md
 */

#pragma once
#include <vector>

template <typename T>
std::vector<std::vector<T>> stirling_number_of_the_first_kind_init(int n, int k) {
  std::vector<std::vector<T>> stirling(n + 1, std::vector<T>(k + 1, 0));
  stirling[0][0] = 1;
  for (int i = 1; i <= n; ++i) for (int j = 1; j <= i && j <= k; ++j) {
    stirling[i][j] = stirling[i - 1][j - 1] + stirling[i - 1][j] * (i - 1);
  }
  return stirling;
}
