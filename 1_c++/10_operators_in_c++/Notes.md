# C++ Operator Precedence Table

## 🛠️ Operator Precedence Table (From Highest to Lowest)

| **Precedence** | **Operator Type** | **Operators** | **Associativity** |
|--------------|----------------|----------------|----------------|
| **1️⃣** (Highest) | **Unary Operators** | `++` `--` `~` `!` | Right to Left |
| **2️⃣** | **Arithmetic (Multiplicative)** | `*` `/` `%` | Left to Right |
| **3️⃣** | **Arithmetic (Additive)** | `+` `-` | Left to Right |
| **4️⃣** | **Bitwise Shift** | `<<` `>>` | Left to Right |
| **5️⃣** | **Comparison** | `<` `>` `<=` `>=` | Left to Right |
| **6️⃣** | **Equality** | `==` `!=` | Left to Right |
| **7️⃣** | **Bitwise AND** | `&` | Left to Right |
| **8️⃣** | **Bitwise XOR** | `^` | Left to Right |
| **9️⃣** | **Bitwise OR** | `|` | Left to Right |
| **🔟** | **Logical AND** | `&&` | Left to Right |
| **1️⃣1️⃣** | **Logical OR** | `||` | Left to Right |
| **1️⃣2️⃣** | **Assignment** | `=` `+=` `-=` `*=` `/=` `%=` | Right to Left |

---

## 🚀 Explanation with Emojis and Diagrams

### 1️⃣ Unary Operators (🚀 Execute First)
- `++a` (Pre-increment 🚀)  
- `--a` (Pre-decrement 🏎️)  
- `!a` (Logical NOT 🚫)  
- `~a` (Bitwise Complement 🔄)  

```cpp
int a = 5;
int b = ~a; // Flips all bits of a
```

### 2️⃣ Multiplicative Operators (*, /, %) (🍕 Before Addition)
- `a * b` (Multiplication ×)  
- `a / b` (Division ÷)  
- `a % b` (Modulus 🏗️)  

```cpp
int x = 10 / 4;  // 2 (integer division)
float y = 10.0 / 4;  // 2.5 (floating-point division)
```

### 3️⃣ Additive Operators (+, -) (🍕 After Multiplication)
- `a + b` (Addition ➕)  
- `a - b` (Subtraction ➖)  

### 4️⃣ Bitwise Shift (`<<`, `>>`) (📦 Moving Bits Left/Right)
- `a << b` (Left Shift 🚛)  
- `a >> b` (Right Shift 🚜)  

```cpp
int a = 5;  // 00000101 in binary
int b = a << 1; // 00001010 (10 in decimal)
```

### 5️⃣ Comparison Operators (`<`, `>`, `<=`, `>=`) (📏 Measuring Values)
### 6️⃣ Equality Operators (`==`, `!=`) (🎭 Checking Equality)
### 7️⃣ Bitwise AND (`&`) (🔍 Filter Bits)
### 8️⃣ Bitwise XOR (`^`) (⚡ Flip Bits)
### 9️⃣ Bitwise OR (`|`) (📡 Combine Bits)
### 🔟 Logical AND (`&&`) (🔗 Both Must Be True)
### 1️⃣1️⃣ Logical OR (`||`) (🔗 At Least One Must Be True)
### 1️⃣2️⃣ Assignment Operators (`=`, `+=`, `-=`, `*=`, `/=`, `%=`) (📝 Execute Last)

---

## 📌 Example with Mixed Operators

```cpp
int result = 5 + 3 * 2 > 10 || 4 & 1;
```

### Step-by-Step Execution:
1️⃣ **Multiplication (`3 * 2`)** → `6`  
2️⃣ **Addition (`5 + 6`)** → `11`  
3️⃣ **Comparison (`11 > 10`)** → `true` (1)  
4️⃣ **Bitwise AND (`4 & 1`)** → `0` (Binary: `100 & 001 = 000`)  
5️⃣ **Logical OR (`1 || 0`)** → `true` (1)  

So, **`result = 1`**. ✅

---

## 💡 Why Integer Division Like `18 / 4` Gives `4` Instead of `4.5`?
- When **both numbers are integers**, C++ does **integer division**, meaning it **discards** the decimal part.  
  - ✅ `18 / 4 = 4` (Not `4.5`)  
  - ✅ `13.4 / 4 = 3.35` (Since `13.4` is `float`, result is `float`)  

To force floating-point division:
```cpp
float x = 18.0 / 4; // 4.5
```

---

## 🏆 Summary
- **Precedence Order:** `Unary > Arithmetic > Bitwise Shift > Comparison > Logical > Assignment`  
- **Associativity:** Mostly **Left to Right**, except for **Assignment (Right to Left)**  
- **Integer Division Truncates** the decimal part  

Would you like a **flowchart** to visualize operator precedence? 🚀
