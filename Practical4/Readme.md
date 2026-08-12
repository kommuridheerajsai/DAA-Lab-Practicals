#  Factorial Using Iterative and Recursive Methods

A C++ implementation to find the factorial of a given number using **Iterative** and **Recursive** methods.

This project is developed as part of the **Design and Analysis of Algorithms (DAA)** practical work.

##  Problem Statement

Write a C++ program to find the factorial of a given number using:

* Iterative Method
* Recursive Method

##  Objectives

* Understand the concept of factorial.
* Implement factorial using an iterative approach.
* Implement factorial using a recursive approach.
* Compare iterative and recursive methods.
* Understand recursion and function calls.

##  Factorial

The factorial of a non-negative integer `n` is the product of all positive integers from `1` to `n`.

**Formula:**

```text
n! = n × (n - 1) × (n - 2) × ... × 2 × 1
```

For example:

```text
5! = 5 × 4 × 3 × 2 × 1
   = 120
```

Also:

```text
0! = 1
1! = 1
```

##  Algorithm — Iterative Method

1. Start the program.
2. Read the value of `n`.
3. Initialize `fact = 1`.
4. Repeat from `1` to `n`.
5. Multiply `fact` by each number.
6. Display the factorial value.
7. Stop the program.


```

##  Algorithm — Recursive Method

1. Start the program.
2. Read the value of `n`.
3. If `n` is `0` or `1`, return `1`.
4. Otherwise, return `n × factorial(n - 1)`.
5. Display the factorial value returned by the recursive function.
6. Stop the program.

```

##  Technologies Used

* **Language:** C++
* **Concepts:** Iteration, Recursion, Functions
* **Subject:** Design and Analysis of Algorithms (DAA)

##  Project Structure

```text
Factorial/
│
├── iterative_factorial.cpp
├── recursive_factorial.cpp
└── README.md
```



##  Complexity Analysis

| Method    | Time Complexity | Space Complexity |
| --------- | --------------- | ---------------- |
| Iterative | O(n)            | O(1)             |
| Recursive | O(n)            | O(n)             |

### Explanation

* **Iterative:** Uses a loop, so it requires constant extra space.
* **Recursive:** Creates function calls for each value of `n`, requiring `O(n)` stack space.

##  Iterative vs Recursive

| Feature             | Iterative | Recursive |
| ------------------- | --------- | --------- |
| Uses loop           | ✅ Yes     | ❌ No      |
| Uses function calls | ❌ No      | ✅ Yes     |
| Time Complexity     | O(n)      | O(n)      |
| Space Complexity    | O(1)      | O(n)      |
| Easy to understand  | Yes       | Moderate  |
| Stack usage         | Low       | Higher    |

##  Conclusion

The factorial of a number can be calculated using both **iterative** and **recursive** approaches. Both methods produce the same result, but they differ in their use of memory and implementation style.

The iterative method is more memory-efficient, while the recursive method demonstrates the concept of **recursion** effectively.

##  Author

**Kommuri Dheeraj Sai**

> Design and Analysis of Algorithms (DAA) Practical
