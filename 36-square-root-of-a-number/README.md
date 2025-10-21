## Square Root of a Number

### Problem Statement

Write a function which calculates the square root of a number

---

### Input
A single integer number representing the number

### Output
An integer representing the square root of the number

---

### Test Case 1
Input: <br>
Enter number: 4 <br>

Output: <br>
Square root = 2 <br>

### Test Case 2
Input: <br>
Enter number: 9 <br>

Output: <br>
Square root = 3 <br>

---

### Algorithm 1 - Works only for perfect squares
1. Input `number`.
2. Subtract the number by consecutive odd numbers until the number becomes zero.
3. Note the number of subtractions. It is the square root of the number.
4. Output the square root.

### Algorithm 2 - Using sqrt() function
1. Input `number`.
2. Compute square root of number using sqrt() function.
3. Output the square root.

---

### Code

[Square root a perfect square](perfect_squares.c)

[Square root using library function](using_library_function.c)