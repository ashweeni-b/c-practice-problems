## Greatest Common Divisor

### Problem Statement
Write a function which calculates the greatest common divisor of two numbers

---

### Input
Two integers num1 and num2 representing two numbers

### Output 
Print the greatest common divisor of those two numbers

---

### Test Case 1
Input: <br>
Enter num1: 12 <br>
Enter num2: 4 <br>

Output: <br>
GCD = 4 <br>

### Test Case 2
Input: <br>
Enter num1: 3 <br>
Enter num2: 9 <br>

Output: <br>
GCD = 3 <br>

---

### Algorithm 
1. Input numbers `num1` and `num2`.
2. If `num1` is greater than `num2`, initialize small to `num1`, else `num2`.
3. Initialize `i` to 0. 
4. Until `i <= small`, check for divisors - `num1 % i == 0 && num2 % i == 0`, if divisors exists, update gcd by i.
5. Increment `i` by 1.
6. Print the value of `gcd`.

---

### Code

[Greatest Common Divisor](greatest_common_divisor.c)

---