/*
 * @brief その他/std::set を区間で管理するやつ
 */
#define PROBLEM "http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=2880"

#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>
#include "../../misc/set_managed_by_interval.hpp"

int main() {
  int n, m, q;
  std::cin >> n >> m >> q;
  std::vector<int> d(m), a(m), b(m), e(q), s(q), t(q);
  for (int i = 0; i < m; ++i) std::cin >> d[i] >> a[i] >> b[i];
  for (int i = 0; i < q; ++i) std::cin >> e[i] >> s[i] >> t[i];
  std::vector<int> order(m + q);
  std::iota(order.begin(), order.end(), 0);
  std::sort(order.begin(), order.end(), [&](int a, int b) {
    int t_a = a < m ? d[a] : e[a - m], t_b = b < m ? d[b] : e[b - m];
    return t_a == t_b ? (a < m) < (b < m) : t_a < t_b;
  });
  std::vector<bool> ans(q, false);
  SetManagedByInterval<int> st;
  for (int i : order) {
    if (i < m) {
      st.insert(a[i], b[i] - 1);
    } else {
      i -= m;
      ans[i] = s[i] >= t[i] || st.contains(s[i], t[i] - 1);
    }
  }
  for (int i = 0; i < q; ++i) std::cout << (ans[i] ? "Yes\n" : "No\n");
  return 0;
}
