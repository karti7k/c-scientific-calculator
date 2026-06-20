# c-scientific-calculator
A simple command-line calculator written in C that performs basic arithmetic operations as well as several scientific calculations.

## Features

### Basic Operations

* Addition
* Subtraction
* Multiplication
* Division (with divide-by-zero handling)

### Scientific Operations

* Power Calculation
* Square Root
* Sine (degrees)
* Cosine (degrees)
* Tangent (degrees)

## Technologies Used

* C Programming Language
* Standard C Libraries:

  * `stdio.h`
  * `math.h`

## How It Works

The program runs in a continuous loop and displays a menu of available operations. Users can select an operation, enter the required inputs, and receive the calculated result instantly.

## Supported Operations

| Choice | Operation      |
| ------ | -------------- |
| 1      | Addition       |
| 2      | Subtraction    |
| 3      | Multiplication |
| 4      | Division       |
| 5      | Power          |
| 6      | Square Root    |
| 7      | Sine           |
| 8      | Cosine         |
| 9      | Tangent        |
| 10     | Exit           |

## Compilation

Compile the program using GCC:

```bash
gcc calculator.c -o calculator -lm
```

**Note:** The `-lm` flag is required to link the math library.

## Running the Program

```bash
./calculator
```

## Example Usage

```text
===== CALCULATOR =====

1. Add
2. Subtract
3. Multiply
4. Divide
5. Power
6. Square Root
7. Sin
8. Cos
9. Tan
10. Exit

Enter Your Choice: 1

Enter Two Numbers:
10
20

10.00 + 20.00 = 30.00
```

## Error Handling

* Prevents division by zero.
* Prevents square root calculation of negative numbers.
* Handles invalid menu selections.
* Provides an exit option for terminating the program.

## Future Improvements

* Add logarithmic functions.
* Add factorial calculations.
* Improve tangent undefined-angle detection.
* Support radians as input.
* Add calculation history.
* Improve user interface and input validation.

## Author - Kartik Kanaujiya

Created as a C programming practice project demonstrating the use of:

* Functions
* Loops
* Conditional Statements
* Mathematical Operations
* User Input Handling

## License

This project is open-source and available for educational purposes.
