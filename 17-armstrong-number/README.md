## Armstrong Number

### Problem Statement
Take a number (n) from user and output whether it is Armstrong number or not.

---

### Input
A single integer N representing the number.

### Output
Print to the console `Is an armstrong number` if the entered number is armstrong, else print `Is not an armstrong number`.

---

### Example 1

`num` = 153 <br>
number of digits = 3 <br>
sum = 1^3 + 5^3 + 3^3 = 1 + 125 + 27 = 153 <br>
sum == `num`, therfore `num` is an armstrong number <br>

### Example 2

`num` = 2343 <br>
number of digits = 4 <br>
sum = 2^4 + 3^4 + 4^4 + 3^4 = 16 + 81 + 256 + 81 = 434 <br>
sum != `num`, therefore `num` is not an armstrong number <br>

---

### Test Case 1
Input: Enter the number: 153 <br>
Output: Entered number is an armstrong number <br>

### Test Case 2
Input: Enter the number: 242 <br>
Output: Entered number is not an armstrong number <br>

---

### Algorithm
1. Input `num`.
2. Count the number of digits of the `num`.
3. Calculate the power of the digits of the `num` - `digits` raised to the number of digits.
4. Sum the power of the digits.
5. If the sum of the power of digits equals the original number, output `num` is an armstrong number, otherwise output `num` is not an armstrong number.

---

### Code

[Armstrong Number](armstrong_number.c)

---