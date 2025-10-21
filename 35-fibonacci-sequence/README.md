## Fibonacci Sequence

### Problem Statement

Write a function to print n terms in a Fibonacci series and the nth term in that series.

---

### Input
A single integer n representing the nmber of terms to be printed.

### Output
Prints the n terms of the Fibonacci series. <br>
Prints the nth term of that sequence. <br>

---

### Test Cases

For printing the fibonacci sequence, <br>

Input 1: <br>
Enter the number of terms: 5 <br>

Output 1: <br>
0       1       1       2       3 <br>

Input 2: <br>
Enter the number of terms: 8 <br>

Output 2: <br>
0       1       1       2       3       5       8       13 <br>

For printing the nth term of the fibonacci sequence, <br>

Input 1: <br>
Enter the number of terms: 5 <br>

Output 1: <br>
5th term = 3 <br>

Input 2: <br>
Enter the number of terms: 8 <br>

Output 2: <br>
8th term = 13 <br>

---

### Algorithm

1. Input `n`.
2. Define first term and second term as 0 and 1 repectively.
3. Compute next terms as the sum of the previous first and previous second terms - for example, 3rd term = 2nd term + 1st term.
4. Output the terms.

---

### Code

[Printing fibonacci series upto n terms](fibonacci_sequence.c)
[Printing the nth term of the fibonacci sequence](nth_term_of_fibonacci_series.c)