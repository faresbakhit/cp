# Competitive Programming

An archive of my competitive programming journey, with the\
solutions I have come up with and submitted to the judges

## CSES Problem Set<sub>[[?]](https://cses.fi/problemset/list/)</sub>

### Introductory Problems

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

### Bit Manipulation Hacks

#### Multiply or divide by $2^k$

- $x \cdot 2^k = x \ll k$
- $x / 2^k = x \gg k$

#### Change the $n$-th bit

- set — $x \lor (1 \ll n)$
- unset — $x \land \lnot(1 \ll n)$
- toggle — $x \oplus (1 \ll n)$

#### Is a power of $2$

$$f_1(x) = x \land (x - 1)$$

$$
f_2(x) =
\begin{cases}
  \top & x = 0 \\
  \bot & x \neq 0
\end{cases}
$$

$$f(x) = (f_2 \circ f_1)(x)$$

#### Is the $n$-th bit set

$$f_1(x) = x \land (1 \ll n)$$

$$
f_2(x) =
\begin{cases}
\top & x \neq 0 \\
\bot & x = 0
\end{cases}
$$

$$f(x, n) = (f_2 \circ f_1)(x, n)$$

### How-to $\TeX$ Algorithms

#### Constants

| Constant Name  | Command | Example |
|----------------|---------|---------|
| true           | `\top`  | $\top$  |
| false          | `\bot`  | $\bot$  |
| pi             | `\pi`   | $\pi$   |

#### Arithmetic Operations

| Operation        | C/C++ Syntax    | Command     | Example       |
|------------------|-----------------|-------------|---------------|
| *Addition*       | `a + b`         | `+`         | $x + y$       |
| *Subtraction*    | `a - b`         | `-`         | $x - y$       |
| *Multiplication* | `a * b`         | `\cdot`     | $x \cdot y$   |
| *Division*       | `a / b`         | `/`         | $x / y$       |
| *Modulo*         | `a % b`         | `\bmod`     | $x \bmod y$   |
| *Exponentiation* |                 | `^`         | $x ^ y$       |
| *Square Root*    |                 | `\sqrt{}`   | $\sqrt{x}$    |
| $n$*-th root*    |                 | `\sqrt[]{}` | $\sqrt[n]{x}$ |

#### Comparison Operations

| Operation               | C/C++ Syntax | Command   | Example       |
|-------------------------|--------------|-----------|---------------|
| *Equality*              | `a == b`     | `=`       | $x = y$       |
| *Approximate-equality*  |              | `\approx` | $x \approx y$ |
| *Non-equality*          | `a != b`     | `\neq`    | $x \neq y$    |
| *Greater than*          | `a > b`      | `>`       | $x > y$       |
| *Less than*             | `a < b`      | `<`       | $x < y$       |
| *Greater than or equal* | `a >= b`     | `\geq`    | $x \geq y$    |
| *Less than or equal*    | `a <= b`     | `\leq`    | $x \leq y$    |

#### Bitwise Operations

| Operation              | C/C++ Syntax | Command  | Example      |
|------------------------|--------------|----------|--------------|
| *Bitwise NOT*          | `~x`         | `\lnot`  | $\lnot x$     |
| *Bitwise AND*          | `a & b`      | `\land`  | $x \land y$  |
| *Bitwise OR*           | `a \| b`     | `\lor`   | $x \lor y$   |
| *Bitwise XOR*          | `a ^ b`      | `\oplus` | $x \oplus y$ |
| *Bitwise left shift*   | `a << b`     | `\ll`    | $x \ll n$    |
| *Bitwise right shift*  | `a >> b`     | `\gg`    | $x \gg n$    |
| *Bitwise left rotate*  |              | `\lll`   | $x \lll n$   |
| *Bitwise right rotate* |              | `\ggg`   | $x \ggg n$   |

### Rust and C++ Equivalent Types<sub>[[source]](https://blog.stratifylabs.dev/device/2023-01-28-From-cpp-to-rust)</sub>

| C++       | Rust  | Size (C++/Rust) |
|----------:|-------|-----------------|
| bool      | bool  | varies/8-bit    |
| char      | char  | 8-bit/32-bit    |
| uint8_t   | u8    | 8-bit           |
| uint16_t  | u16   | 16-bit          |
| uint32_t  | u32   | 32-bit          |
| uint64_t  | u64   | 64-bit          |
| uint128_t | u128  | 128-bit         |
| int8_t    | i8    | 8-bit           |
| int16_t   | i16   | 16-bit          |
| int32_t   | i32   | 32-bit          |
| int64_t   | i64   | 64-bit          |
| int128_t  | i128  | 128-bit         |
| size_t    | isize | large-enough    |
| ssize_t   | usize | large-enough    |
| float     | f32   | 32-bit          |
| double    | f64   | 64-bit          |
| const     | char  | * &str varies   |

### Integer Types Limits<sub>[[source]](https://en.cppreference.com/w/cpp/language/types)</sub>

| Type specifier | Approximate Value Range  | Exact Value Range |
|---------------:|--------------------------|-------------------|
| uint8_t        | $0 : 2^8$                | $0 : 255$         |
| uint16_t       | $0 : 6.55 \cdot 10^4$    | $0 : 65535$       |
| uint32_t       | $0 : 4.29 \cdot 10^9$    | $0 : 4,294,967,295$ |
| uint64_t       | $0 : 1.84 \cdot 10^{19}$ | $0 : 18,446,744,073,709,551,615$ |
| int8_t         | $\pm 2^7$                | $-128 : 127$      |
| int16_t        | $\pm 3.27 \cdot 10^4$    | $-32768 : 32767$  |
| int32_t        | $\pm 2.14 \cdot 10^9$    | $-2,147,483,648 : 2,147,483,647$ |
| int64_t        | $\pm 9.22 \cdot 10^{18}$ | $-9,223,372,036,854,775,808 : 9,223372,036,854,775,807$ |

## References

- [CSES Problem Set](https://cses.fi/problemset/list/)
- [Fundamental types](https://en.cppreference.com/w/cpp/language/types)
- [From C++ to Rust](https://blog.stratifylabs.dev/device/2023-01-28-From-cpp-to-rust)
