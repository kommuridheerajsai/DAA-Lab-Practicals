# C++ Sorting Algorithms

This repository contains implementations of commonly used **sorting algorithms in C++**. Each program demonstrates how an unsorted array can be sorted in ascending order.

## 📌 Algorithms Included

1. Bubble Sort
2. Selection Sort
3. Insertion Sort
4. Quick Sort
5. Merge Sort

---

## 📂 Project Structure

```text
Sorting-Algorithms/
│
├── bubble_sort.cpp
├── selection_sort.cpp
├── insertion_sort.cpp
├── quick_sort.cpp
├── merge_sort.cpp
└── README.md
```

---

## 1. Bubble Sort

Bubble Sort repeatedly compares adjacent elements and swaps them if they are in the wrong order.

### Example

```text
Unsorted Array: 64 34 25 12 22 11 90
Sorted Array:   11 12 22 25 34 64 90
```

### Complexity

| Case         | Time Complexity |
| ------------ | --------------- |
| Best Case    | O(n)            |
| Average Case | O(n²)           |
| Worst Case   | O(n²)           |

**Space Complexity:** O(1)

---

## 2. Selection Sort

Selection Sort finds the smallest element from the unsorted portion of the array and places it at the beginning.

### Example

```text
Unsorted Array: 64 25 12 22 11
Sorted Array:   11 12 22 25 64
```

### Complexity

| Case         | Time Complexity |
| ------------ | --------------- |
| Best Case    | O(n²)           |
| Average Case | O(n²)           |
| Worst Case   | O(n²)           |

**Space Complexity:** O(1)

---

## 3. Insertion Sort

Insertion Sort builds the sorted array one element at a time by inserting each element into its correct position.

### Example

```text
Unsorted Array: 64 25 12 22 11
Sorted Array:   11 12 22 25 64
```

### Complexity

| Case         | Time Complexity |
| ------------ | --------------- |
| Best Case    | O(n)            |
| Average Case | O(n²)           |
| Worst Case   | O(n²)           |

**Space Complexity:** O(1)

---

## 4. Quick Sort

Quick Sort uses a **pivot** element to divide the array into smaller and larger elements. It then recursively sorts the two partitions.

### Example

```text
Unsorted Array: 64 25 12 22 11
Sorted Array:   11 12 22 25 64
```

### Complexity

| Case         | Time Complexity |
| ------------ | --------------- |
| Best Case    | O(n log n)      |
| Average Case | O(n log n)      |
| Worst Case   | O(n²)           |

**Space Complexity:** O(log n) average recursion stack

---

## 5. Merge Sort

Merge Sort follows the **Divide and Conquer** approach. It divides the array into smaller parts, sorts them, and then merges them back together.

### Example

```text
Unsorted Array: 64 25 12 22 11
Sorted Array:   11 12 22 25 64
```

### Complexity

| Case         | Time Complexity |
| ------------ | --------------- |
| Best Case    | O(n log n)      |
| Average Case | O(n log n)      |
| Worst Case   | O(n log n)      |

**Space Complexity:** O(n)

---

## 📊 Comparison of Sorting Algorithms

| Algorithm      | Best Case  | Average Case | Worst Case | Space     |
| -------------- | ---------- | ------------ | ---------- | --------- |
| Bubble Sort    | O(n)       | O(n²)        | O(n²)      | O(1)      |
| Selection Sort | O(n²)      | O(n²)        | O(n²)      | O(1)      |
| Insertion Sort | O(n)       | O(n²)        | O(n²)      | O(1)      |
| Quick Sort     | O(n log n) | O(n log n)   | O(n²)      | O(log n)* |
| Merge Sort     | O(n log n) | O(n log n)   | O(n log n) | O(n)      |

`*` Quick Sort space complexity depends on the implementation and recursion depth.

---

## 🛠️ Technologies Used

* **Language:** C++
* **Concepts:** Arrays, Loops, Functions, Recursion, Divide and Conquer
* **Compiler:** GCC / MinGW / G++

---

## 🎯 Learning Objectives

By completing this project, you can understand:

* How sorting algorithms work
* How arrays are manipulated
* Difference between iterative and recursive algorithms
* Divide and Conquer technique
* Time and space complexity
* Comparison of different sorting algorithms
* How to implement algorithms using C++

---

## 🚀 Future Improvements

* Add user input for array elements
* Add descending-order sorting
* Add optimized versions of sorting algorithms
* Add performance comparison between algorithms
* Add execution time measurement
* Add visualization of sorting steps

---

## 👨‍💻 Author

**Dheeraj Sai Kommuri**

B.Tech – Computer Science Engineering (AI & ML)

---

## ⭐ Conclusion

This project demonstrates five fundamental sorting algorithms in C++. Understanding these algorithms is important for learning **Data Structures and Algorithms (DSA)** and improving problem-solving skills.

If you found this project useful, consider giving the repository a ⭐ on GitHub.
