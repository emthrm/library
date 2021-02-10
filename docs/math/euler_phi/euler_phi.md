# オイラーの $\varphi$ 関数 (Euler's totient function)

$$\begin{aligned} \varphi(n) &= \# \lbrace \,k \in \mathbb{N} \mid k \perp n,\ k \leq n \rbrace \\ &= n \prod_i(1 - \frac{1}{p_i}) \ (p_i \text{ : } n \text{ の素因数}) \text{．} \end{aligned}$$


### オイラーの定理

$$a^{\varphi(n)} \equiv 1 \pmod{n} \text{．}$$


## 時間計算量

||時間計算量|
|:--:|:--:|
||$O(\sqrt{N})$|
|数表|$O(N\log{\log{N}})$|
|数表2|$O(\sqrt{H}\log{\log{\sqrt{H}}} + \frac{(H - L)\sqrt{H}}{\log{H}})$ ?|


## 使用法

||説明|
|:--:|:--:|
|`phi(val)`|$\varphi(\mathrm{val})$|

- 数表

||説明|
|:--:|:--:|
|`phi_init(val)`|$\varphi(n) \ (1 \leq n \leq \mathrm{val})$ の数表|

- 数表2

||説明|
|:--:|:--:|
|`phi_init2(low, high)`|$\varphi(n) \ (\mathrm{low} \leq n \leq \mathrm{high})$ の数表|


## 参考

- https://ei1333.github.io/algorithm/euler-phi.html

数表2

- https://github.com/spaghetti-source/algorithm/blob/master/number_theory/euler_phi.cc


## ToDo

- $\sum_{i = 1}^n \varphi(i)$ を $O(N^{\frac{2}{3}})$ で求める．
  - https://yukicoder.me/wiki/sum_totient
  - https://min-25.hatenablog.com/entry/2018/11/11/172216
  - https://judge.yosupo.jp/problem/sum_of_totient_function


## Verified

* https://onlinejudge.u-aizu.ac.jp/solutions/problem/NTL_1_D/review/4088206/emthrm/C++14
* [数表](https://onlinejudge.u-aizu.ac.jp/solutions/problem/NTL_1_D/review/4088232/emthrm/C++14)
* [数表2](https://onlinejudge.u-aizu.ac.jp/solutions/problem/NTL_1_D/review/4088268/emthrm/C++14)