## Determine the case of the character

### Problem Statement
Take a character (ch) from user and output whether it is uppercase, lowercase or neither of the both.

---

### Input
A single character ch representing the character whose case is to be checked.

### Output
Print uppercase if the entered character is uppercase, lowercase if the entered charactered is lowercase, else print neither lowercase nor uppercase.

---

### Test Case 1
Input: Enter the character: d <br>
Output: Entered character is lowercase <br>

### Test Case 2
Input: Enter the character: D <br>
Output: Entered character is uppercase <br>

### Test Case 3
Input: Enter the character: 2 <br>
Output: Entered character is not uppercase or lowercase <br>

---

### Algorithm 
1. Input character `ch`.
2. If `A >= ch >= Z`, output uppercase.
3. Else if `a >= ch >= z`, output lowercase.
4. Else output not uppercase or lowercase.

---

### Code

[Checking the case of the character](determine_character_case.c)

---