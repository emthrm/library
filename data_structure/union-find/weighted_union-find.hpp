/**
 * @brief 重みつき union-find
 * @docs docs/data_structure/union-find/union-find.md
 */

#pragma once
#include <utility>
#include <vector>

template <typename Abelian>
struct WeightedUnionFind {
  WeightedUnionFind(int n, const Abelian ID = 0) : ID(ID), par(n, -1), data(n, ID) {}

  int root(int ver) {
    if (par[ver] < 0) return ver;
    int res = root(par[ver]);
    data[ver] += data[par[ver]];
    return par[ver] = res;
  }

  bool unite(int u, int v, Abelian wt) {
    wt += weight(u);
    wt -= weight(v);
    u = root(u);
    v = root(v);
    if (u == v) return false;
    if (par[u] > par[v]) {
      std::swap(u, v);
      wt = -wt;
    }
    par[u] += par[v];
    par[v] = u;
    data[v] = wt;
    return true;
  }

  bool same(int u, int v) { return root(u) == root(v); }

  int size(int ver) { return -par[root(ver)]; }

  Abelian diff(int u, int v) { return weight(v) - weight(u); }

private:
  const Abelian ID;
  std::vector<int> par;
  std::vector<Abelian> data;

  Abelian weight(int ver) {
    root(ver);
    return data[ver];
  }
};
