## Sum and product of all the digits of a number

### Problem Statement
Calculate the sum and product of all the digits of a number 

---

### Input
A single integer num representing the number

### Output 
Print the sum and product of the digits of the number each on new line

---

### Test Case 1
Input: <br>
Enter the number: 123 <br>

Output: <br>
Sum of digits = 6 <br>
Product of digits = 6 <br>

### Test Case 2
Input: <br>
Enter the number: 4332 <br>

Output: <br>
Sum of digits = 12 <br>
Product of digits = 72 <br>

---

### Algorithm 
1. Input number `num`.
2. Initialize `sum` to 0 and `product` to 1. 
3. Initialize `i` to 0. 
4. Until `num != 0`, calculate digits `digit` which is, `digit = num % 10`,
calculate sum as `sum = sum + digit` and product as `product = product * 1`, and 
finally update num as `num = num / 10`.
5. Increment `i` by 1.
6. Finally print the values of `sum` and `product`.

---

### Code

[Sum and product of the dgits of a number](sum_of_digits.c)

---