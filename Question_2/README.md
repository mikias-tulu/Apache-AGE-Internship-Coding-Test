# Recurrence Relation Implementations in C

This folder contains three different implementations of the given piecewise recurrence relation F(n) = F(n-3) + F(n-2) in C. Each implementation showcases a different approach to solving the problem.

## Development Environment

- Language: C
- Compiler: GCC (GNU Compiler Collection)
- Operating System: any os

## Compilation and Execution

Follow these steps to compile and run the source code:

1. **Method 1: Recursive Approach**

   - Open a terminal or command prompt.
   - Navigate to the directory containing the 'recursive_approach.c' file.
   - Run the following commands:
     ```
     gcc recursive_approach.c -o recursive_approach.c
     ./recursive_approach
     ```

2. **Method 2: Memoization (Top-down Dynamic Programming)**

   - Open a terminal or command prompt.
   - Navigate to the directory containing the 'memoization.c' file.
   - Run the following commands:
     ```
     gcc memoization.c -o memoization
     ./memoization
     ```

3. **Method 3: Bottom-up Approach (Iterative)**

   - Open a terminal or command prompt.
   - Navigate to the directory containing the 'Bottom_up_Iterative_approach.c' file.
   - Run the following commands:
     ```
     gcc Bottom_up_Iterative_approach.c -o Bottom_up_Iterative_approach.c
     ./Bottom_up_Iterative_approach
     ```

## Usage

- In each implementation, you can modify the value of `n` to test different input values for the recurrence relation.

## Notes

- Each implementation provides a different trade-off between simplicity and efficiency. Choose the appropriate method based on your requirements.
- Adjust the size of the memoization table (if applicable) based on the maximum value of `n` you intend to use.


