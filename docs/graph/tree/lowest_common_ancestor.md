# 最小共通祖先 (lowest common ancestor)

根付き木のある2頂点において最も深い共通祖先である．


## 時間計算量

||時間計算量|
|:--:|:--:|
|ダブリング版|$\langle O(\lvert V \rvert \log{\lvert V \rvert}), O(\log{\lvert V \rvert}) \rangle$|
|オイラーツアー版|$\langle O(\lvert V \rvert \log{\lvert V \rvert}), O(1) \rangle$|


## 使用法

- ダブリング版

||説明|
|:--:|:--:|
|`LowestCommonAncestorByDoubling<CostType>(graph)`|木 $\mathrm{graph}$ の最小共通祖先を考える|
|`depth[i]`|頂点 $i$ の深さ|
|`dist[i]`|根と頂点 $i$ の間の距離|
|`build(root = 0)`|根を $\mathrm{root}$ として構築する．|
|`query(u, v)`|頂点 $u, v$ の最小共通祖先|
|`distance(u, v)`|頂点 $u, v$ 間の距離|

- [オイラーツアー](euler_tour.md)版

||説明|
|:--:|:--:|
|`LowestCommonAncestor<CostType>(graph, root = 0)`|根を $\mathrm{root}$ とする木 $\mathrm{graph}$ の最小共通祖先を構築する．|
|`query(u, v)`|頂点 $u, v$ の最小共通祖先|

- [HL 分解版](heavy-light_decomposition.md)


## 参考

- プログラミングコンテストチャレンジブック \[第2版\] pp.292-295
- https://yukicoder.me/wiki/lowest_common_ancestor

オイラーツアー
- https://github.com/drken1215/algorithm/blob/efb8cf052b095e49e70135a6fb628308d06f49b2/DataStructureOnTree/euler_tour_on_nodes.cpp


## ToDo

- Tarjan's off-line lowest common ancestors algorithm
  - http://www.prefield.com/algorithm/graph/least_common_ancestor.html
  - https://github.com/spaghetti-source/algorithm/blob/master/graph/least_common_ancestor_tarjan.cc
  - http://monyone.github.io/teihen_library/#OfflineLCA
- level ancestor problem
  - https://en.wikipedia.org/wiki/Level_ancestor_problem
  - https://37zigen.com/level-ancestor-problem/
  - https://drive.google.com/drive/folders/1atQRO6Y9bHgLDH-YLq3obDwMxIuk7--h
  - https://noshi91.hatenablog.com/entry/2019/09/22/114149


## Verified

- [ダブリング版](https://onlinejudge.u-aizu.ac.jp/solutions/problem/GRL_5_C/review/4084783/emthrm/C++14)
- [オイラーツアー版](https://onlinejudge.u-aizu.ac.jp/solutions/problem/2667/review/4084875/emthrm/C++14)
- [HL 分解版](https://onlinejudge.u-aizu.ac.jp/solutions/problem/GRL_5_C/review/4093404/emthrm/C++14)
