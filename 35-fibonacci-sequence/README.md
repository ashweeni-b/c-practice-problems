## Fibonacci Sequence

### Problem Statement

Write a function to print n terms in a Fibonacci series.

---

### Input
A single integer n representing the nmber of terms to be printed.

### Output
Prints the n terms of the Fibonacci series.

---

### Test Case 1

Input: <br>
Enter the number of terms: 5 <br>

Output: <br>
0       1       1       2       3 <br>

### Test Case 2

Input: <br>
Enter the number of terms: 8 <br>

Output: <br>
0       1       1       2       3       5       8       13 <br>

---

### Algorithm

1. Input `n`.
2. Define first term and second term as 0 and 1 repectively.
3. Compute next terms as the sum of the previous first and previous second terms - for example, 3rd term = 2nd term + 1st term.
4. Output the terms.

---

### Code

[Printing fibonacci series upto n terms](fibonacci_sequence.c)