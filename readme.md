
# CSE 1111 Mid-Term Exam Solutions (Q1 & Q2)

This document contains the solved answers for Questions 1 and 2 from the provided Mid-Term exam PDF files.

---

## 1. Spring 2024 (CSE1111_Mid_241.pdf & 242.pdf)

### Q1 (a) Corrected Code
```c
#include <stdio.h>

int main() {
    int a=3, b=4, c=-5, result;
    int Num;
    
    Num = 20 % 3;
    a = Num + 10;
    
    result = a * b % c + b;
    printf("result = %d\n", result);
    
    if (result >= 0 && result < 10) { 
        printf("%d %d", Num, a);
        printf("a = %d\n", a);
        return 0;
    }
    else if (result >= 5) {
        printf("b = %d\n", b);
    }
    else {
        printf("a = %d\n", a);
    }
}
````

### Q1 (b) Output

```text
result = 7
2 12a = 12
```

### Q2 (a) Rewrite using `if...else`

```c
if (num == 1) {
    sum *= 3;
    sum += --j * 2;
    i--;
    sum = ++i * j--;
}
else if (num == 2) {
    sum += --j * 2;
    i--;
    sum = ++i * j--;
}
else if (num == 3) {
    sum += --j * 2;
    i--;
    sum = ++i * j--;
}
else if (num == 4) {
    sum = ++i * j--;
}
else if (num == 5) {
    i += 10;
}
else {
    sum *= j++ / j--;
    i = i % j;
}
```

### Q2 (b) Manual Trace

| Iteration | i | p | x (Start) | Output Printed | x (End) | p (End) |
| :--- | :--- | :--- | :--- | :--- | :--- | :--- |
| **1** | 1 | 1 | 490 | `1 1 490` | 477 | 8 |
| **2** | 4 | 8 | 477 | `4 8 477` | 464 | 12 |
| **3** | 7 | 12 | 464 | `7 12 464` | 464 | 12 |

**Final Output:** `Not a great number!`

-----

## 2\. Spring 2025 (CSE1111\_Mid\_251.pdf)

### Q1 (a) Output

```text
Inside First IF
a= -2 and b = -1
```

### Q1 (b) Rewrite using `if...else`

```c
int val = (int)(a * b);

if (val == 0) {
    a = b + 2;
    b = a--;
}
else if (val == 1) {
    printf("a= %d and b = %d\n", a, b);
}
else if (val == 2) {
    a = b + 2;
    b = a--;
}
else if (val == 3) {
    printf("Inside default\n");
}
else if (val == 4) {
}
else {
    printf("Inside default\n");
}
```

### Q2 (a) Output

```text
8 0 1
3 1 1
6 1 2
9 2 2
```

### Q2 (b) Output

```text
i=1, j=6
i=1, j=11
i=1, j=13
i=1, j=15
i=1, j=17
```

-----

## 3\. Fall 2024 (CSE1111\_Mid\_243.pdf)

### Q1 (a) Invalid Variables

1.  `@home`: Invalid (Contains special character `@`).
2.  `int`: Invalid (Reserved keyword).
3.  `1st_name`: Invalid (Starts with a digit).

### Q1 (b) Variable Values

  * `a = 11` (ASCII 'B'(66) - '7'(55))
  * `b = 2.000000`
  * `c = 8`
  * `d = 1`

### Q1 (c) Output

```text
1End
```

### Q2 (a) Rewrite using `if...else`

```c
int diff = x - y;
int d;

if (diff == 1) {
    d = x - y;
    printf("%d", d);
    if (x > y) {
        printf("Beta\n");
    } else {
        if (x - y > 5)
            printf("Difference > 5\n");
    }
}
else if (diff == 2) {
}
else if (diff == 5) {
    d = i++ + i;
    printf("%d", d);
}
else if (diff == 7) {
    printf("%d", d);
}
else {
    printf("%d", d);
}
```

### Q2 (b) Manual Trace

| Iteration | current | start | end | Output |
| :--- | :--- | :--- | :--- | :--- |
| **1** | 13 | 14 | 16 | `13 21` |
| **2** | 14 | 17 | 15 | *(No Output)* |
| **3** | 15 | 18 | 15 | `17 20` |
| **End** | 16 | 18 | 15 | *(Loop terminates)* |

-----

## 4\. Summer 2023 (CSE1111\_Mid\_232.pdf)

### Q1 (a) Invalid Variables

1.  `is-Val`: Invalid (Hyphens not allowed).
2.  `while`: Invalid (Reserved keyword).
3.  `CSE 1111`: Invalid (Spaces not allowed).

### Q1 (b) Variable Values

  * `a = 5.000000`
  * `b = 2`
  * `c = 16`
  * `d = 9`
  * `result = 1.000000`

### Q1 (c) Output

  * **(i) a=0, b=0:**
    ```text
    Pattern
    Positive
    ```
  * **(ii) a=-1, b=-7:**
    ```text
    Fizz
    Negative
    ```

### Q2 (a) Rewrite using `if...else`

```c
if (rank == 'p') {
    bonus += 20;
    bonus += 20;
    bonus += 20;
}
else if (rank == 'g') {
    bonus += 20;
    bonus += 20;
}
else if (rank == 's') {
    bonus += 20;
}
else {
    bonus += 10;
}
```

### Q2 (b) Manual Trace

| Iteration | j (Start) | Check `j>i` | Action | Variables Update |
| :--- | :--- | :--- | :--- | :--- |
| **1** | 10 | True (10\>2) | Even | `i = 3` |
| **2** | 9 | True (9\>3) | Odd | `n = 9` |
| **3** | 8 | True (8\>3) | Even | `i = 4` |
| **4** | 7 | True (7\>4) | Odd | `n = 8` |
| **5** | 6 | True (6\>4) | Even | `i = 5` |
| **6** | 5 | False (5\>5) | Stop | `i = 7` (after loop `i+=2`) |

**Final Values:** `i = 7`, `j = 5`, `n = 8`.

-----

## 5\. Fall 2023 (CSE1111\_Mid\_233.pdf)

### Q1 (a) Invalid Variables

1.  `99p`: Invalid (Starts with a digit).
2.  `"my_val"`: Invalid (Quotes are not part of identifiers).

### Q1 (b) Variable Values

  * `a = 14.000000`
  * `b = 3.000000`
  * `c = 0.000000` (False)
  * `result = 63.000000` (12 + 1\*51)

### Q1 (c) Output

  * **Case num = 2.3:** The input reads `2` (integer). Since `2 % 2 != 0` is False, it executes the `else` block:
    ```text
    Rubel
    ```
  * **Case num = 127:** The input reads `127`. The condition `127 % 2 != 0` is True. It enters the `if`. However, variables `a` and `b` are uninitialized in the provided snippet. Assuming code flow only:
    ```text
    Mashrafe
    ```
    *(Subsequent output depends on the uninitialized values of `a` and `b`)*.

### Q2 (a) Rewrite using `if...else`

```c
// Inside the switch logic context
if (sum == 1) {
    if (num < 100) {
        result += a / c * 2;
        printf("Shakib\n");
        b++;
    } else if (num >= 100) {
        printf("Mahmudullah\n");
        result *= a * c / b;
    }
}
else if (sum == 2) {
    printf("Mahmudullah\n");
    result *= a * c / b;
}
else if (sum == 3) {
    result *= a * c / b;
}
else if (sum == 4) {
}
else {
    result -= 5;
    printf("%d %d %d %d", a, b, c, result);
}
```

### Q2 (b) Manual Trace

| Iteration | i | end (Check) | Action | start | end | count |
| :--- | :--- | :--- | :--- | :--- | :--- | :--- |
| **1** | 112 | Even | Else | 106 | 111 | 0 |
| **2** | 111 | Odd | If | 107 | 113 | 1 |
| **3** | 110 | Odd | If | 108 | 115 | 2 |
| **4** | 109 | Odd | If | 109 | 117 | 3 |
| **5** | 108 | Odd | If | 110 | 119 | 4 |
| **6** | 107 | Odd | If | 111 | 121 | 5 |
| **7** | 106 | Odd | If | 112 | 123 | 6 |
| **8** | 105 | Odd | If | 113 | 125 | 7 |

**Final Values:** `start = 113`, `end = 125`, `count = 7`.

```