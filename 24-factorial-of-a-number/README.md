## Factorial of a number

### Problem Statement
Take a number (num) from user and output the factorial of the number.

---

### Input
A single integer num representing the number whose factorial is to be calculated

### Output 
Print the factorial of the number num

---

### Test Case 1
Input:
Enter a number: 5

Output:
Factorial: 60

### Test Case 2
Input:
Enter a number: 9

Output:
Factorial: 362880 <br>

---

### Algorithm 
1. Input number `num`.
2. Initialize `fact` to 1. 
3. Initialize `i` to num. 
4. Until `i >= 1`, calculate factorial of `num` which is, `fact = fact * i`.
5. Decrement `i` by 1.
6. Finally print the value of `fact`.

---

### Code

[Factorial of a number](factorial_of_a_number.c)

---