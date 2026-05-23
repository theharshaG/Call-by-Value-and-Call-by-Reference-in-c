# Call-by-Value-and-Call-by-Reference-in-c

# C Call by Value and Call by Reference Programs

## Overview

This repository contains basic C programs demonstrating **Call by Value** and **Call by Reference** concepts using functions and pointers. These programs help in understanding how data is passed to functions and how variables behave inside and outside functions.

The programs are useful for:

- Beginners learning C programming
- College laboratory exercises
- Coding interview preparation
- Logic-building practice
- Understanding pointers and memory concepts

---

## Programs Included

### 1. Modify Variable Using Call by Value

This program demonstrates that changes made inside a function do not affect the original variable.

#### Output Example

```text
Before function x=10
Inside function a=15
After function x=10
```

#### Concepts Used

- Call by Value
- Local variables
- Function arguments
- Variable scope

---

### 2. Swap Two Numbers Using Call by Value

This program attempts to swap two values using Call by Value. The original values remain unchanged because copies are passed to the function.

#### Output Example

```text
Before swap:
a=10 b=20

Inside function:
x=20 y=10

After swap:
a=10 b=20
```

#### Concepts Used

- Call by Value
- Variable copies
- Function parameters

---

### 3. Sensor Value Update Using Call by Value

This program simulates increasing a sensor value inside a function.

#### Output Example

```text
Before function: 50
Inside function: 70
After function: 50
```

#### Concepts Used

- Call by Value
- Embedded system simulation
- Function arguments

---

### 4. Modify Variable Using Call by Reference

This program demonstrates modifying the original variable using pointers.

#### Output Example

```text
Before function x=10
Inside function x=15
After function x=15
```

#### Concepts Used

- Call by Reference
- Pointers
- Dereferencing

---

### 5. Swap Two Numbers Using Call by Reference

This program swaps two values successfully using memory addresses.

#### Output Example

```text
Before swap
a=10 b=20

After swap
a=20 b=10
```

#### Concepts Used

- Call by Reference
- Pointer variables
- Memory manipulation

---

### 6. Battery Level Update Using Call by Reference

This program simulates battery charging using pointers.

#### Output Example

```text
Before update: 60%

Charging...
Inside function: 80%

After update: 80%
```

#### Concepts Used

- Call by Reference
- Embedded system simulation
- Pointers and memory access

---

## Technologies Used

- C Programming Language
- GCC Compiler
- VS Code
- CodeBlocks
- Turbo C

---

## Project Structure

```text
c-callbyvalue-reference/
|-call_by_value
    |
├── simple_example.c
├── swap.c
├── sensor.c
|
|call_by_reference
    |
├── simple_example.c
├── swap.c
├── battery.c
└── README.md
```

---

## How to Compile

Compile a program:

```bash
gcc filename.c -o output
```

Run:

```bash
./output
```

---

## Learning Outcomes

After completing these programs, you will understand:

- Function parameter passing
- Call by Value concept
- Call by Reference concept
- Pointer usage
- Memory address handling
- Data modification using functions

---

## Future Improvements

Possible future additions:

- Pointer arithmetic
- Array with pointers
- String handling using pointers
- Dynamic memory allocation
- Recursive functions with pointers
- Structure with pointers

---

## Author

**Harsha G**

Learning:

- C Programming
- Embedded Systems
- Python Development
- IoT Systems
- Problem Solving
