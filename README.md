# Competitive Programming

An archive of my competitive programming journey, with the\
solutions I have come up with and submitted to the judges

- [CSES Problem Set](#cses-problem-set1)
  - [Introductory problems](#introductory-problems)
- [Notes](#notes)
  - [Bit manipulation algorithms](#bit-manipulation-algorithms)
    - [Multiply or divide by 2^k](#multiply-or-divide-by-2k-)
    - [Change the n-th bit](#change-the-n-th-bit-)
    - [Is a power of 2?](#is-a-power-of-2-)
    - [Is the n-th bit set?](#is-the-n-th-bit-set-)
  - [How-to TeX algorithms](#how-to-tex-algorithms)
    - [Constants](#constants)
    - [Arithmetic operations](#arithmetic-operations)
    - [Comparison operations](#comparison-operations)
    - [Bitwise operations](#bitwise-operations)
  - [Numeric types](#numeric-types23)

## CSES Problem Set[^1]

[^1]: [CSES Problem Set](https://cses.fi/problemset/list/)

### Introductory problems

01. [Weird Algorithm](/cses-problem-set/01-introductory-problems/01-weird-algorithm/)
02. [Missing Number](/cses-problem-set/01-introductory-problems/02-missing-number/)
03. [Repetitions](/cses-problem-set/01-introductory-problems/03-repetitions/)
04. [Increasing Array](/cses-problem-set/01-introductory-problems/04-increasing-array/)
05. [Permutations](/cses-problem-set/01-introductory-problems/05-permutations/)
06. [Number Spiral](/cses-problem-set/01-introductory-problems/06-number-spiral/)
07. [Two Knights](/cses-problem-set/01-introductory-problems/07-two-knights/)
08. [Two Sets](/cses-problem-set/01-introductory-problems/08-two-sets/)
09. [Bit Strings](/cses-problem-set/01-introductory-problems/09-bit-strings/)
10. [Trailing Zeros](/cses-problem-set/01-introductory-problems/10-trailing-zeros/)

## Notes

### Bit manipulation algorithms

#### Multiply or divide by $2^k$ $:$

- $x \cdot 2^k = x \ll k$
- $x / 2^k = x \gg k$

#### Change the $n$-th bit $:$

- set — $x \lor (1 \ll n)$
- unset — $x \land \lnot(1 \ll n)$
- toggle — $x \oplus (1 \ll n)$

#### Is a power of $2$ $?$

$$f_1(x) = x \land (x - 1)$$

$$
f_2(x) =
\begin{cases}
  \top & x = 0 \\
  \bot & x \neq 0
\end{cases}
$$

$$f(x) = (f_2 \circ f_1)(x)$$

#### Is the $n$-th bit set $?$

$$f_1(x) = x \land (1 \ll n)$$

$$
f_2(x) =
\begin{cases}
\top & x \neq 0 \\
\bot & x = 0
\end{cases}
$$

$$f(x, n) = (f_2 \circ f_1)(x, n)$$

---

### How-to $\TeX$ algorithms

#### Constants

| Constant Name  | Command | Example |
|----------------|---------|---------|
| true           | `\top`  | $\top$  |
| false          | `\bot`  | $\bot$  |
| pi             | `\pi`   | $\pi$   |

#### Arithmetic operations

| Operation        | C/C++ syntax    | Command     | Example       |
|------------------|-----------------|-------------|---------------|
| *Addition*       | `a + b`         | `+`         | $x + y$       |
| *Subtraction*    | `a - b`         | `-`         | $x - y$       |
| *Multiplication* | `a * b`         | `\cdot`     | $x \cdot y$   |
| *Division*       | `a / b`         | `/`         | $x / y$       |
| *Modulo*         | `a % b`         | `\bmod`     | $x \bmod y$   |
| *Exponentiation* |                 | `^`         | $x ^ y$       |
| *Square Root*    |                 | `\sqrt{}`   | $\sqrt{x}$    |
| $n$*-th root*    |                 | `\sqrt[]{}` | $\sqrt[n]{x}$ |

#### Comparison operations

| Operation               | C/C++ syntax | Command   | Example       |
|-------------------------|--------------|-----------|---------------|
| *Equality*              | `a == b`     | `=`       | $x = y$       |
| *Approximate-equality*  |              | `\approx` | $x \approx y$ |
| *Non-equality*          | `a != b`     | `\neq`    | $x \neq y$    |
| *Greater than*          | `a > b`      | `>`       | $x > y$       |
| *Less than*             | `a < b`      | `<`       | $x < y$       |
| *Greater than or equal* | `a >= b`     | `\geq`    | $x \geq y$    |
| *Less than or equal*    | `a <= b`     | `\leq`    | $x \leq y$    |

#### Bitwise operations

| Operation              | C/C++ syntax | Command  | Example      |
|------------------------|--------------|----------|--------------|
| *Bitwise NOT*          | `~x`         | `\lnot`  | $\lnot x$    |
| *Bitwise AND*          | `a & b`      | `\land`  | $x \land y$  |
| *Bitwise OR*           | `a \| b`     | `\lor`   | $x \lor y$   |
| *Bitwise XOR*          | `a ^ b`      | `\oplus` | $x \oplus y$ |
| *Bitwise left shift*   | `a << b`     | `\ll`    | $x \ll n$    |
| *Bitwise right shift*  | `a >> b`     | `\gg`    | $x \gg n$    |
| *Bitwise left rotate*  |              | `\lll`   | $x \lll n$   |
| *Bitwise right rotate* |              | `\ggg`   | $x \ggg n$   |

---

### Numeric types[^2][^3]

[^2]: [Fundamental types](https://en.cppreference.com/w/cpp/language/types) - cppreference.com
[^3]: [Numeric types](https://doc.rust-lang.org/reference/types/numeric.html) - The Rust Reference

| C/C++ type | Rust type | Size    | Minimum                   | Maximum                  |
|-----------:|-----------|---------|---------------------------|--------------------------|
| uint8_t    | u8        | 8-bit   | $0$                       | $2^{8}-1$                |
| uint16_t   | u16       | 16-bit  | $0$                       | $2^{16}-1$               |
| uint32_t   | u32       | 32-bit  | $0$                       | $2^{32}-1$               |
| uint64_t   | u64       | 64-bit  | $0$                       | $2^{64}-1$               |
|            | u128      | 128-bit | $0$                       | $2^{128}-1$              |
| int8_t     | i8        | 8-bit   | $-2^{7}$                  | $2^{7}-1$                |
| int16_t    | i16       | 16-bit  | $-2^{15}$                 | $2^{15}-1$               |
| int32_t    | i32       | 32-bit  | $-2^{31}$                 | $2^{31}-1$               |
| int64_t    | i64       | 64-bit  | $-2^{63}$                 | $2^{63}-1$               |
|            | i128      | 128-bit | $-2^{127}$                | $2^{127}-1$              |
| size_t     | isize     | arch    |                           |                          |
| ssize_t    | usize     | arch    |                           |                          |
| float      | f32       | 32-bit  | $-3.40282 \cdot 10^{38}$  | $3.40282 \cdot 10^{38}$  |
| double     | f64       | 64-bit  | $-1.79769 \cdot 10^{308}$ | $1.79769 \cdot 10^{308}$ |
