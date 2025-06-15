🗺️ Day 61/180 => Pointers in C++ :

    ✅ What is a symbol table ?
    ✅ Solve this problem

        int main()
        {
            int num = 10;
            int *p = num;


            // Increment num variable by 5 with the help of Pointer p
            // Don't do num = num+5;
            // Try to change it with the help of *p
        }

---

# Problem 1 Solution


## 🧠 What is a symbol table ?

A symbol table is a data structure used by compilers and interpreters to store information about identifiers (symbols) in a program — like variables, functions, classes, objects, etc.

### 📚 Key Information Stored in a Symbol Table:

| Field               | Description                                                             |
|---------------------|-------------------------------------------------------------------------|
| **Name**            | The name of the symbol (e.g., variable or function name)                |
| **Type**            | Data type (e.g., `int`, `float`, `char`, `function`, etc.)              |
| **Scope**           | Where the symbol is accessible (e.g., global, local, class scope)       |
| **Memory Location** | The address or offset where the variable is stored                      |
| **Value**           | (Sometimes) The actual value of the variable (if known at compile time) |
| **Size**            | How much memory the symbol occupies

---

### 🔄 When is a Symbol Table Used?

| Phase             | Role of Symbol Table                                                |
|-------------------|---------------------------------------------------------------------|
| **Compilation**   | To check for **declarations**, **type mismatches**, and **scoping** |
| **Code Generation** | Helps assign **memory locations** and optimize code               |
| **Debugging**     | Stores symbol info for showing variable names in debuggers          |

---

## 🛠️ Example:
For this code:

```
int age = 20;
float salary = 50000.0;
```

| Name   | Type  | Scope  | Memory Address | Size |
|--------|-------|--------|----------------|------|
| age    | int   | global | 0x1000         | 4    |
| salary | float | global | 0x1004         | 4    |

---

## 📌 Summary:
A symbol table is like the compiler’s notebook — it keeps track of all identifiers, what they are, where they are, and how they’re used.


---

# Problem 2 Solution

```
#include <iostream>
using namespace std;

int main()
{
    int num = 10;
    int *p = &num;  // Store address of num in pointer p

    *p = *p + 5;    // Increment the value at the address by 5

    cout << "Value of num: " << num << endl;  // Output: 15
    return 0;
}
```

🧠 Explanation:

- int *p = &num ;  → Pointer p holds the address of num

- *p = *p + 5; → Dereference the pointer to get the value and add 5 to it

- This indirectly modifies num using the pointer

---

## 🧲 Final Trick to Remember:

  
- Use *p to change the value
- Use p to change the location