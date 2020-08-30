[TOC]
#普林斯顿微积分
## 第19章 积分的方法${\rm II}$
- 关于三角恒等式的积分;

- 关于三角函数的幂以及约化公式的积分;

- 关于三角换元法;

- 关于所学习过的所有积分方法的总结.

### 19.1 应用三角恒等式的积分
- 倍角公式
$$
\begin{array}{||}
\hline
\cos^2(x) = \cfrac{1}{2} (1+\cos(2x))\\
\hline
\end{array}
\,和\,
\begin{array}{||}
\hline
\sin^2(x) = \cfrac{1}{2} (1-\cos(2x))\\
\hline
\end{array}
$$

- 毕达哥拉斯恒等式
$$
\begin{array}{||}
\hline
\sin^2(x) + \cos^2(x) = 1\\
\hline
\end{array}
\,\,
\begin{array}{||}
\hline
\tan^2(x) + 1 = \sec^2(x)\\
\hline
\end{array}
\,\,
\begin{array}{||}
\hline
1+\cot^2(x) = \csc^2(x)\\
\hline
\end{array}
$$

- 积化和差公式
$$
\begin{array}{||}
\hline
\cos(A)\cos(B) = \cfrac{1}{2}(\cos(A-B) + \cos(A+B))\\
\sin(A)\sin(B) = \cfrac{1}{2}(\cos(A-B) - \cos(A+B))\\
\sin(A)\cos(B) = \cfrac{1}{2}(\sin(A-B) + \sin(A+B))\\
\hline
\end{array}
$$

### 19.2 关于三角函数的幂的积分
#### 19.2.1 $\sin \, 或\,\cos\,$的幂
$$
\begin{array}{||}
\hline
\cos^{2}(x) = 1 - \sin^2(x)\\
\hline
\end{array}
\,或\,
\begin{array}{||}
\hline
\sin^{2}(x) = 1 - \cos^2(x)\\
\hline
\end{array}
$$

#### 19.2.2 $\,\tan\,$的幂
$$
\begin{array}{||}
\hline
\tan^2(x) = \sec^2(x) - 1\\
\hline
\end{array}
$$

#### 19.2.3 $\,\sec\,$的幂

$$
\begin{array}{||}
\hline
\\
\hline
\end{array}
$$

#### 19.2.4 $\,\cot\,$的幂
$$
\begin{array}{||}
\hline
\cot^2(x) = \csc^2(x) - 1\\
\hline
\end{array}
$$

#### 19.2.5 $\,\csc\,$的幂


#### 19.2.6 约化公式
首先来计算$\int \tan^n(x){\rm d}x$, 我们给它起个名字:$I_n(对于整数n)$. 也就是说,
$$
I_n = \int \tan^n(x){\rm d}x.
$$

我们已经知道
$$
I_0 = \int \tan^0(x){\rm d}x = \int 1{\rm d}x = x+C.\\
I_1 = \int \tan(x){\rm d}x = -\ln|\cos(x)| + C.\\
$$
当$x \geq 2$时,我们可以从$\tan^n(x)$中提取$\tan^2(x)$,这样就剩下$\tan^{n-2}(x)$;这时可以使用三角函数恒等式把这个积分分开:
$$
\begin{array}{}
I_n&=&\int \tan^n(x){\rm d}x = \int \tan^{n-2}(x)\tan^2(x){\rm d}x = \int \tan^{n-2}(x)(\sec^2(x)-1){\rm d}x\\
&=& \int \tan^{n-2}(x)\sec^2(x){\rm d}x - \int \tan^{n-2}(x){\rm d}x\\
\end{array}
$$
等于的右侧的第二个积分$\int \tan^{n-2}(x){\rm d}x \,就是I_{n-2};\,$对于第一个,如果设$\,t = \tan(x)$,会得到$\,{\rm d}t = \sec^2(x){\rm d}x\, $,这个积分就变为$\,\int t^{n-2}{\rm d}t\,$,这的结果为$t^{n-1}/(n-1) + C.$ 用$\tan(x)\,$回代$\,t\,$,这样我们证明了
$$
I_n = \frac{1}{n-1}\tan^{n-1}(x) - I_{n-2}.
$$
我们没有必要写常数,因为$I_n\,和\,I_{n-2}\,$都是不定积分. 上述方程叫做约化公式.因为它能把整数$\,n\,$降到更小的数$\,n-2\,$.


### 19.3 关于三角换元法的积分

#### 19.3.1 类型1: $\small\sqrt[]{a^2 - x^2}$
$$
a^2 - x^2 = a^2 - a^2\sin^2(\theta) = a^2(1-\sin^2(\theta)) = a^2\cos^2(\theta).
$$

#### 19.3.2 类型2: $\small\sqrt[]{x^2 + a^2}$
$$
x^2 + a^2 = a^2\tan^2(\theta) + a^2 = a^2\sec^2(\theta).
$$

#### 19.3.3 类型3: $\small\sqrt[]{x^2 - a^2}$

$$
x^2 - a^2 = a^2\sec^2(\theta) - a^2 = a^2(\sec^2(\theta) - 1) = a^2\tan^2(\theta).
$$

#### 19.3.4 配方和三角换元法

#### 19.3.5 关于三角换元法的总结

#### 19.3.6 平方根的方法和三角换元法

### 19.4 积分技巧总结
- 当你看到题目时,会发现一种显而易见的换元,那就试试它.例如被积函数中的一部分是另一部分的导数, 那么就使用$\,t\,$做换元.

- 如果$\small\sqrt[n]{ax+b}$这种形式出现在被积函数中,就像在18.1.2节那样,设$\,t = \small\sqrt[n]{ax+b}\,$.

- 对于有理函数的积分(也就是说, 两个多项式的商),看分子是否为分母层数的倍数.如果是,可以通过调$"t=分母"$来计算.另外,也可以使用部分分式法.

- 若观察后没有发现明显的换元可用,可使用这一章介绍的方法:
	- 关于 $\small\sqrt[]{1-\cos(x)}或\small\sqrt[]{1+\cos(x)}$的函数,使用倍角公式;
	- 关于$1-\sin^2(x), 1-\cos^2(x),1+\tan^2(x),\sec^2(x) -1,\csc^2(x) -1 ,1+\cot^2(x)$的函数,使用毕达哥拉斯恒等式:$\sin^2(x) + \cos^2(x) = 1, \tan^2(x) + 1 = \sec^2(x) , \cot^2(x) + 1 = \csc^2(x)$
	- 关于$1 \pm \sin(x)\,$(或与其相似的情况),在分母时的函数, 分子分母同时乘以它的共轭表达式,然后试着使用毕达哥拉斯定理;
	- 关于$\cos(mx)\cos(nx)/\sin(mx)\sin(nx)或者\sin(mx)\cos(nx)$的函数的积分,使用积化和差公式;
	- 关于三角函数的次幂的积分,应该学会从19.2.1到19.2.5节所有的方法

- 如果被积函数是关于$\small\sqrt[]{x^2 -a ^2}$ 这种形式的奇次幂的情况(例如$(x^2 - a^2)^{3/2}, (x^2 - a^2)^{5/2}$),或者$\small\sqrt{x^2 + a^2}, \small\sqrt{a^2 - x^2}$等类似情况的厅次幂形式,那么使用三角换元法(但要 先检验是否有明显的换元).如果二次函数包含一次项,那么先配方.

- 如果被积函数是乘积的形式,同时也没有明显的换元可用,那么可以考虑分部积分.

- 如果没有可用的换元法,被积函数又是$\ln(x)$的幂或反三角函数的形式,那么可以考虑使用分部积分法,在这种情况下,设$u是\ln(x)的幂或为适当的反三角函数.$