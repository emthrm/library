/*
 * @brief 文字列/ランレングス圧縮
 */
#define IGNORE
#define PROBLEM "https://atcoder.jp/contests/abc143/tasks/abc143_c"

#include <iostream>
#include <string>
#include "../../string/rle.hpp"

int main() {
  int n;
  std::cin >> n;
  std::string s;
  std::cin >> s;
  std::cout << rle<>(s).size() << '\n';
  return 0;
}
