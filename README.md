# Bath in Winters

---

### 🔢 What the code does:

It calculates how many **people can take a bath** using the water from a **full geyser**.

Each person needs exactly **2 buckets of water**.

---

### 🧾 Code Breakdown:

```cpp
#include <iostream>
using namespace std;
```

This includes standard input/output.

---

```cpp
int main() {
    int t;
    cin >> t;
```

* `t` is the number of test cases.
* The program will repeat the same calculation `t` times.

---

```cpp
    while (t--) {
        int a, b;
        cin >> a >> b;
```

* Inside the loop:

  * `a` is the **geyser's capacity** in litres.
  * `b` is the **bucket's capacity** in litres.

---

```cpp
        int c = 2 * b;
```

* `c` is the total water one person needs (2 buckets).

---

```cpp
        int d = a / c;
```

* `d` is the maximum number of people who can bathe.
* It's calculated by dividing the total water `a` by the water required per person `c`.

---

```cpp
        cout << d << endl;
    }

    return 0;
}
```

* The result `d` is printed for each test case.

---

### 🧪 Example:

**Input:**

```
2
100 10
80 20
```

**Explanation:**

1. For `100 10`: One person needs 20L → 100 ÷ 20 = 5
2. For `80 20`: One person needs 40L → 80 ÷ 40 = 2

**Output:**

```
5
2
```

---

