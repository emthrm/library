/*
 * @brief 数学/畳み込み/高速メビウス変換
 */
#define PROBLEM "http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=2446"
#define ERROR "1e-7"

#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <vector>
#include "../../../math/convolution/fast_mobius_transform.hpp"

int main() {
  int n;
  long long m;
  std::cin >> n >> m;
  std::vector<long long> a(n);
  for (int i = 0; i < n; ++i) std::cin >> a[i];
  std::vector<double> p(n);
  for (int i = 0; i < n; ++i) {
    std::cin >> p[i];
    p[i] /= 100;
  }
  std::vector<long long> g(1 << n, 0);
  for (int i = 1; i < (1 << n); ++i) {
    long long l = 1;
    for (int j = 0; j < n; ++j) {
      if (i >> j & 1) {
        long long g = std::__gcd(l, a[j]);
        l /= g;
        if (std::log10(l) + std::log10(a[j]) > 18) {
          l = m + 1;
          break;
        }
        l *= a[j];
      }
    }
    g[i] = m / l;
  }
  std::vector<long long> f = fast_mobius_transform(g, false);
  double ans = 0;
  for (int bit = 0; bit < (1 << n); ++bit) {
    double P = 1;
    for (int i = 0; i < n; ++i) P *= (bit >> i & 1 ? p[i] : 1 - p[i]);
    ans += P * std::abs(f[bit]);
  }
  std::cout << std::fixed << std::setprecision(8) << ans << '\n';
  return 0;
}
