/*
 * @brief 数学/多倍長整数 (桁和)
 */
#define PROBLEM "http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_8_B"

#include <iostream>
#include "../../math/bigint.hpp"

int main() {
  while (true) {
    BigInt<> x;
    std::cin >> x;
    if (x == 0) break;
    std::cout << x.digit_sum() << '\n';
  }
  return 0;
}
