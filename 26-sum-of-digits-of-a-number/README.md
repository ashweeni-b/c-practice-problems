## Sum of digits of a number

### Problem Statement
Calculate the sum of all the digits of a number

---

### Input
A single integer num representing the number

### Output 
Print the sum of the digits of the number

---

### Test Case 1
Input: <br>
Enter the number: 123 <br>

Output: <br>
Sum of digits = 6 <br>

### Test Case 2
Input: <br>
Enter the number: 4332 <br>

Output: <br>
Sum = 12 <br>

---

### Algorithm 
1. Input number `num`.
2. Initialize `sum` to 0. 
3. Initialize `i` to 0. 
4. Until `num != 0`, calculate digits `digit` which is, `digit = num % 10`, update num as `num = num / 10` and sum as `sum = sum + digit`.
5. Increment `i` by 1.
6. Finally print the value of `sum`.

---

### Code

[Sum of the dgits of a number](sum_of_digits.c)

---