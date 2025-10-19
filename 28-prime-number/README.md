## Problems on Prime Numbers

### Problem Statements

1. Check whether a number is a prime number or not
2. Print prime numbers for a range given by the user

---

### Input
1. A single integer number representing the number to be checked as prime or not.
2. Two integers low and high representing the lower limit and the higher limit of the range respectively.

### Output
1. Print the number is prime or composite
2. The list of prime numbers in the range

---

## Test Cases

1. For checking whether the number is prime or not.

    ### Test Case 1
    Input:
    Enter the number: 29

    Output: 
    29 is a prime number

    ### Test Case 2
    Input:
    Enter the number: 45

    Output:
    45 is a composite number

---

2. For printing the prime numbers within the range.

    Input: <br>
    Enter the lower limit of the range: 12 <br>
    Enter the outer limit of the range: 50 <br>

    Output: <br>
    The prime numbers in the range 12 to 50 are: <br>
    13 17 19 23 29 31 37 41 43 47 <br>

---

### Algorithm

For checking whether the number is prime or not.

1. Input `number`.
2. Iterate i from 1 to `number`.
3. Calculate the divisors of the `number` - `number % i == 0`.
4. If divisors equals 2, print it is prime else, print composite - `divisor == 2`.

For printing the prime numbers within the range.

1. Input `low` and `high`.
2. Iterate i from `low` to `high`.
3. Iterate j from 1 to i.
4. Calculate the divisors of `i` - j % i == 0.
5. If divisors equals 2, print the number.

---

### Code

[Checking the number for prime](prime_number_check.c) <br>
[Printing the prime number within a range](prime_number_range.c)