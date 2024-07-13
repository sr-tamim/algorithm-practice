## Asymptotic Notations:
Asymptotic notations are mathematical tools used to describe the behavior of an algorithm as the input size grows. They help us analyze the efficiency of algorithms by providing a way to compare their running times without relying on specific hardware or software implementations. The most common asymptotic notations are:

1. **Big O notation (O)**
    - Represents the upper bound of the running time of an algorithm.
    - Defines the worst-case scenario.
    - Used to describe the maximum amount of time an algorithm could take to complete.
    - Notation: $f(n) = O(g(n))$
        - f(n) is the actual running time of the algorithm.
        - g(n) is a function that represents the upper bound.
        - There exist positive constants $c$ and $n_0$ such that $f(n) <= c*g(n)$ for all $n >= n_0$.

2. **Big Omega notation (Ω)**
    - Represents the lower bound of the running time of an algorithm.
    - Defines the best-case scenario.
    - Used to describe the minimum amount of time an algorithm will take to complete.
    - Notation: $f(n) = Ω(g(n))$
        - $f(n)$ is the actual running time of the algorithm.
        - $g(n)$ is a function that represents the lower bound.
        - There exist positive constants $c$ and $n_0$ such that $f(n) >= c*g(n)$ for all $n >= n_0$.

3. **Big Theta notation (Θ)**
    - Represents the tight bound of the running time of an algorithm.
    - Defines both the upper and lower bounds.
    - Used to describe the exact growth rate of an algorithm.
    - Notation: f(n) = Θ(g(n))
        - f(n) is the actual running time of the algorithm.
        - g(n) is a function that represents the tight bound.
        - There exist positive constants $c1$, $c2$, and $n_0$ such that $c_1g(n) <= f(n) <= c_2g(n)$ for all $n >= n_0$.


#### Example:
Consider the following functions:
- $f(n) = 2n + 3$
- $g(n) = n$

To determine the relationship between $f(n)$ and $g(n)$ using asymptotic notations:
1. **Big O notation (O)**:
    - $f(n) = O(g(n))$ if there exist positive constants $c$ and $n_0$ such that $f(n) <= c*g(n)$ for all $n >= n_0$.
    - In this case, $f(n) = 2n + 3$ and $g(n) = n$.
    - Let's choose $c = 3$ and $n_0 = 1$.
    - For $n >= 1$, we have:
        - $f(n) = 2n + 3 <= 3n = c*g(n)$.
    - Therefore, $f(n) = O(g(n))$.
2. **Big Omega notation (Ω)**:
    - $f(n) = Ω(g(n))$ if there exist positive constants $c$ and $n_0$ such that $f(n) >= c*g(n)$ for all $n >= n_0$.
    - In this case, $f(n) = 2n + 3 and g(n) = n$.
    - Let's choose $c = 1$ and $n_0 = 1$.
    - For $n >= 1$, we have:
        - $f(n) = 2n + 3 >= n = c*g(n)$.
    - Therefore, $f(n) = Ω(g(n))$.
3. **Big Theta notation (Θ)**:
    - $f(n) = Θ(g(n))$ if there exist positive constants $c_1, c_2,$ and $n_0$ such that $c_1g(n) <= f(n) <= c_2g(n)$ for all $n >= n_0$.
    - In this case, $f(n) = 2n + 3$ and $g(n) = n$.
    - Let's choose $c_1 = 1, c_2 = 3$, and $n_0 = 1$.
    - For $n >= 1$, we have:
        - $1n <= 2n + 3 <= 3n$
    - Therefore, $f(n) = Θ(g(n))$.

In summary, the relationship between $f(n) = 2n + 3$ and $g(n) = n$ is: $f(n) = O(g(n)), f(n) = Ω(g(n))$, and $f(n) = Θ(g(n))$. This means that $f(n)$ grows linearly with $n$.

#### Key Points:
- Asymptotic notations help us analyze the efficiency of algorithms by providing a way to compare their running times.
- Big O notation represents the upper bound, Big Omega notation represents the lower bound, and Big Theta notation represents the tight bound of the running time of an algorithm.
- Understanding asymptotic notations is essential for evaluating the performance of algorithms and making informed decisions about algorithm selection and optimization.
