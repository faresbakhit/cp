# Trailing Zeros<sub>[[source]](https://cses.fi/problemset/task/1618)</sub>

Your task is to calculate the number of trailing zeros in the factorial $n!$.

For example, $20!=2432902008176640000$ and it has $4$ trailing zeros.

## Input

The only input line has an integer $n$.

## Output

Print the number of trailing zeros in $n!$.

## Constraints

- $1 \le n \le 10^9$

## Examples

Input:

    20

Output:

    4

N = FLOOR OF INPUT DIVIDED BY 5
IF N MOD 5 IS ZERO
THEN N += (N / 5)
RETURN N

```python
def factorial_trailing_zeros(n: int) -> int:
    r = 0
    while n != 0:
        n //= 5
        r += n
    return r
```
