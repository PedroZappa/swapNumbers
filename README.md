# README: Swapping Numbers in C 

## Description 

Swap Numbers C is a simple C program that swaps the values of two user-inputted numbers. This repository contains the source code and instructions on how to compile and run the program.

## Table of Contents

- [Installation](#installation)
- [Usage](#usage)
- [Alternative Approaches](#alternative-approaches)

## Installation

To install and run the program, follow these steps:

1. Clone the repository to your local machine.
2. Navigate to the directory containing the `swapnumbers.c` file.
3. Compile the C program using a C compiler, such as GCC:
   ```
   gcc swapnumbers.c -o swapnumbers
   ```
4. Run the compiled executable:
   ```
   ./swapnumbers
   ```

## Usage

After running the program, you will be prompted to enter two numbers. The program will then swap the values of the numbers and display the swapped values.

Example:

```
Enter first number: 5
Enter second number: 7

Swapped 1st number = 7.000000
Swapped 2nd number = 5.000000
```

## Alternative Approaches

In the provided code, the swapping of numbers is done using a temporary variable. There are alternative approaches to achieve this, such as:

1. Using a swap function with pointers:

```c
void swap(double *a, double *b) {
  double temp;

  temp = *a;
  *a = *b;
  *b = temp;
}
```

2. Using arithmetic operations:

```c
first = first + second;
second = first - second;
first = first - second;
```

3. Using bitwise XOR operator:

```c
first = (int) first ^ (int) second;
second = (int) first ^ (int) second;
first = (int) first ^ (int) second;
```

Each approach has its pros and cons. Using a temporary variable is straightforward and easy to understand, but it requires an extra variable. The swap function with pointers is more generic and can be reused, but it introduces additional complexity with pointer manipulation. The arithmetic operations and bitwise XOR approaches do not require additional variables, but they can be less intuitive and may have limitations with certain data types or values.
