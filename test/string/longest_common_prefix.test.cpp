/*
 * @brief 文字列/longest common prefix
 */
#define PROBLEM "https://judge.yosupo.jp/problem/number_of_substrings"

#include <iostream>
#include <string>
#include "../../string/longest_common_prefix.hpp"

int main() {
  std::string s;
  std::cin >> s;
  int n = s.length();
  long long ans = static_cast<long long>(n) * (n + 1) / 2;
  for (int e : LongestCommonPrefix<>(s).lcp_array) ans -= e;
  std::cout << ans << '\n';
  return 0;
}
