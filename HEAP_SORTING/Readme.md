# Heap Implementation in C++

This repository contains the implementation of **Min Heap** and **Max Heap** in C++ using arrays (vectors). The programs take user input, build the heap, and display the resulting heap along with the minimum or maximum element.

## 📌 Programs Included

1. Min Heap
2. Max Heap

---

## 🛠️ Technologies Used

- C++
- Standard Template Library (STL)
- Vector

---

# 1. Min Heap

## 📖 Description

A **Min Heap** is a complete binary tree in which the value of every parent node is **less than or equal to** its child nodes. The smallest element is always stored at the root.

### Features

- Accepts user input
- Builds a Min Heap
- Displays the heap
- Displays the minimum element

### Algorithm

1. Read the number of elements.
2. Store the elements in an array.
3. Start heapifying from the last non-leaf node.
4. Compare the parent with its children.
5. Swap with the smallest child if necessary.
6. Continue until the Min Heap property is satisfied.

### Time Complexity

| Operation | Complexity |
|----------|------------|
| Build Min Heap | O(n) |
| Heapify | O(log n) |
| Find Minimum | O(1) |

### Sample Input

```
Enter the number of elements: 7
Enter 7 elements:
20 15 30 5 10 40 25
```

### Sample Output

```
Input Array:
20 15 30 5 10 40 25

Min Heap:
5 10 25 15 20 40 30

Minimum Element:
5
```

---

# 2. Max Heap

## 📖 Description

A **Max Heap** is a complete binary tree in which the value of every parent node is **greater than or equal to** its child nodes. The largest element is always stored at the root.

### Features

- Accepts user input
- Builds a Max Heap
- Displays the heap
- Displays the maximum element

### Algorithm

1. Read the number of elements.
2. Store the elements in an array.
3. Start heapifying from the last non-leaf node.
4. Compare the parent with its children.
5. Swap with the largest child if necessary.
6. Continue until the Max Heap property is satisfied.

### Time Complexity

| Operation | Complexity |
|----------|------------|
| Build Max Heap | O(n) |
| Heapify | O(log n) |
| Find Maximum | O(1) |

### Sample Input

```
Enter the number of elements: 7
Enter 7 elements:
20 15 30 5 10 40 25
```

### Sample Output

```
Input Array:
20 15 30 5 10 40 25

Max Heap:
40 15 30 5 10 20 25

Maximum Element:
40
```

---

## 📂 Repository Structure

```
Heap-Implementation/
│── MinHeap.cpp
│── MaxHeap.cpp
└── README.md
```

## 📚 Concepts Covered

- Heap Data Structure
- Complete Binary Tree
- Heapify Operation
- Build Heap Algorithm
- Min Heap
- Max Heap
- Time Complexity Analysis

---

## 👨‍💻 Author

**Dheeraj Sai Kommuri**

B.Tech CSE (AI & ML)  
Marwadi University
