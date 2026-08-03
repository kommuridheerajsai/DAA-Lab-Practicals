# 🔍 Searching Algorithms in C++

## 📌 Description

This project demonstrates the implementation of two fundamental searching algorithms in C++:

1. **Linear Search**
2. **Binary Search**

The program helps understand how different searching techniques work and compares their time complexities.

---

## 🚀 Algorithms Covered

### 1. Linear Search

Linear Search checks each element of an array one by one until the required element is found.

**Advantages:**

* Simple and easy to implement.
* Works with both sorted and unsorted arrays.
* Does not require any preprocessing.

**Time Complexity:**

* Best Case: `O(1)`
* Average Case: `O(n)`
* Worst Case: `O(n)`

**Space Complexity:** `O(1)`

---

### 2. Binary Search

Binary Search repeatedly divides a **sorted array** into two halves to find the required element.

**Advantages:**

* Faster than Linear Search for large sorted arrays.
* Efficient searching algorithm.
* Reduces the search space by half in every iteration.

**Time Complexity:**

* Best Case: `O(1)`
* Average Case: `O(log n)`
* Worst Case: `O(log n)`

**Space Complexity:** `O(1)`

> ⚠️ **Important:** Binary Search requires the array to be sorted.

---

## 🛠️ Technologies Used

* **Programming Language:** C++
* **Concepts:** Arrays, Loops, Searching Algorithms
* **Compiler:** GCC / MinGW / Visual Studio / Code::Blocks

---

# 💻 Linear Search

## Source Code

```cpp
#include <iostream>
using namespace std;

int main() {
    int n, key;

    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the element to search: ";
    cin >> key;

    int position = -1;

    // Linear Search
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            position = i;
            break;
        }
    }

    if (position != -1)
        cout << "Element found at index " << position << endl;
    else
        cout << "Element not found." << endl;

    return 0;
}
```

## Example

### Input

```text
Enter the number of elements: 5
Enter the elements: 10 20 30 40 50
Enter the element to search: 30
```

### Output

```text
Element found at index 2
```

---

# 💻 Binary Search

## Source Code

```cpp
#include <iostream>
using namespace std;

int main() {
    int n, key;

    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements in sorted order: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the element to search: ";
    cin >> key;

    int low = 0;
    int high = n - 1;
    int position = -1;

    // Binary Search
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == key) {
            position = mid;
            break;
        }
        else if (arr[mid] < key) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    if (position != -1)
        cout << "Element found at index " << position << endl;
    else
        cout << "Element not found." << endl;

    return 0;
}
```

## Example

### Input

```text
Enter the number of elements: 5
Enter elements in sorted order: 10 20 30 40 50
Enter the element to search: 40
```

### Output

```text
Element found at index 3
```

---

# 📊 Comparison

| Feature           | Linear Search          | Binary Search         |
| ----------------- | ---------------------- | --------------------- |
| Array Requirement | Sorted or Unsorted     | Must be Sorted        |
| Best Case         | O(1)                   | O(1)                  |
| Average Case      | O(n)                   | O(log n)              |
| Worst Case        | O(n)                   | O(log n)              |
| Space Complexity  | O(1)                   | O(1)                  |
| Implementation    | Simple                 | Slightly More Complex |
| Suitable For      | Small or Unsorted Data | Large Sorted Data     |

---

## 🎯 Learning Outcomes

By completing this project, you will understand:

* How Linear Search works.
* How Binary Search works.
* The difference between Linear and Binary Search.
* How to search for an element in an array.
* The importance of sorted data for Binary Search.
* Time and space complexity analysis.
* How to implement searching algorithms in C++.

---

## 📂 Suggested Project Structure

```text
Searching-Algorithms/
│
├── linear_search.cpp
├── binary_search.cpp
└── README.md
```

---

## 👨‍💻 Author

**Dheeraj Sai Kommuri (CSE AI & ML)**

