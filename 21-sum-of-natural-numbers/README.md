## Sum of n natural numbers

### Problem Statement
Take a number (num) from user and output the sum of first n natural numbers and print the numbers in reverse

---

### Input
A single integer num representing the number upto which the sum is to be calculated

### Output 
Print the n numbers in reverse order each on new line and finally print the sum of those n natural numbers

---

### Test Case 1
Input: <br>
Enter the value of num: 4 <br>

Output: <br>
4 <br>
3 <br>
2 <br>
1 <br>
Sum of natural numbers: 10 <br>

### Test Case 2
Input: <br>
Enter the value of num: 5 <br>

Output: <br>
5 <br>
4 <br>
3 <br>
2 <br>
1 <br>
Sum of natural numbers: 15 <br>

---

### Algorithm 
1. Input number `num`.
2. Initialize `sum` to 0.
2. Initialize `i` to `num`.
3. Until `i >= 1`, print `i` and add the `i` to `sum`.
4. Decrement `i` by 1.
5. Finally print the value of `sum`.

---

### Code

[Sum of first n natural numbers](sum_of_natural_numbers.c)

---