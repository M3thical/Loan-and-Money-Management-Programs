# Loan and Money Management Programs

This project consists of two C++ programs that demonstrate how to manage monetary values and loans. The programs include operator overloading, file input/output, and comparisons between different loans.

## Table of Contents
1. [Project Description](#project-description)
2. [Purpose of Learning](#purpose-of-learning)
3. [Installation](#installation)
4. [Usage](#usage)
5. [Features](#features)

## Project Description

The project consists of two programs:

1. **`ex51.cpp`**: This program performs addition of two monetary values (`AltMoney` objects) and writes the results to an output file. It uses operator overloading for the `+`, `>>`, and `<<` operators and handles file I/O operations.
   
2. **`ex52.cpp`**: This program compares two loans to check if they are equal. It uses the `Loan` and `ID` classes to represent loans and their IDs, and it overloads the equality operator (`==`) to compare both loans and their associated IDs.

### Classes Used

- **`AltMoney` Class** (in `ex51.cpp`): Manages monetary values in dollars and cents, with support for addition and input/output operations through operator overloading.
- **`ID` and `Loan` Classes** (in `ex52.cpp`): Represents loan IDs and loans, with the ability to compare loans and their IDs using the equality operator.

### Example Operations:
- File Input/Output (`ex51.cpp`)
- Addition of monetary values (`ex51.cpp`)
- Loan comparison (`ex52.cpp`)

## Purpose of Learning

This project was designed to practice and improve the following C++ programming concepts:
- **Operator Overloading**: Implementing custom behavior for operators such as `+`, `==`, `>>`, and `<<`.
- **Class Design**: Creating and working with classes that represent real-world entities like loans and money.
- **File I/O**: Reading from and writing to files using `ifstream` and `ofstream`.
- **Comparison Operations**: Comparing loans and monetary values using overloaded operators.

## Installation

To run these programs on your computer, follow these steps:

1. Clone the repository:
    ```bash
    git clone https://github.com/M3thical/loan-money-management.git
    ```

2. Navigate to the project directory:
    ```bash
    cd loan-money-management
    ```

3. Compile the programs using a C++ compiler like `g++`:
    - For `ex51.cpp`:
      ```bash
      g++ ex51.cpp -o altmoney_program
      ```
    - For `ex52.cpp`:
      ```bash
      g++ ex52.cpp -o loan_comparison_program
      ```

4. Run the programs:
    - For `ex51.cpp` (money addition and file I/O):
      ```bash
      ./altmoney_program
      ```
    - For `ex52.cpp` (loan comparison):
      ```bash
      ./loan_comparison_program
      ```

## Usage

### `ex51.cpp` (Money Addition and File I/O)
This program reads two monetary values (dollars and cents) from a file, adds them, and writes the result to an output file. The input file must be named `in_file.dat`, and the result is written to `out_file.dat`.

### `ex52.cpp` (Loan Comparison)
This program compares two loans to determine if they are equal. The first loan is pre-defined, and the second loan is entered by the user. If the loans have the same ID, amount, interest rate, and term, they are considered equal.

### Example Output:

For `ex51.cpp`:

Input file content (in_file.dat): 5 50 3 25

Output file content (out_file.dat): The first money is: $5.50 The second money is: $3.25 The sum is: $8.75


For `ex52.cpp`:

Display loan1 111-22-4444 2300 5.5 48

Enter the left part of the loan ID 222 Enter the middle part of the loan ID 33 Enter the right part of the loan ID 5555 Enter the amount of this loan 2300 Enter the annual interest rate of this loan (in %) 5.5 Enter the term (number of months, length of the loan) 48

Display loan2 222-33-5555 2300 5.5 48 Loans are not equal


## Features

- **Operator Overloading**: The programs overload operators to perform operations on custom classes, such as adding monetary values or comparing loans.
- **File I/O**: The first program reads monetary values from an input file and writes results to an output file.
- **Loan Comparison**: The second program compares loans based on ID, amount, interest rate, and term.
