# C Programming Projects Collection

A comprehensive collection of C programs organized by category, showcasing various programming concepts from pattern printing to array applications. Ideal for beginners learning C programming and students looking for practical examples of algorithms and coding techniques.

## Table of Contents
1. [Overview](#overview)
2. [Project Categories](#categories)
   - [Pattern Printing](#pattern-printing)
   - [Calculators](#calculators)
   - [Number Triangles](#number-triangles)
   - [Utility Programs](#utility-programs)
   - [Array Applications](#array-applications)
3. [Sample Outputs](#sample-outputs)
4. [How to Compile and Run](#how-to-compile-and-run)
5. [Project Structure](#project-structure)
6. [Learning Path](#learning-path)
7. [Contributing](#contributing)

## Overview

This repository contains a collection of C programs demonstrating various programming concepts, patterns, and algorithms. Each program is documented with comments explaining the logic and implementation details. The programs are organized into categories based on their functionality and purpose.

## Categories

### Pattern Printing
- [Pattern_Printing/asterisk_diamond.c](Pattern_Printing/asterisk_diamond.c) - Diamond pattern using asterisks
- [Pattern_Printing/centered_asterisk_pyramid.c](Pattern_Printing/centered_asterisk_pyramid.c) - Centered pyramid pattern
- [Pattern_Printing/x_pattern.c](Pattern_Printing/x_pattern.c) - X-shaped pattern with customizable height
- [Pattern_Printing/border_pattern.c](Pattern_Printing/border_pattern.c) - Border pattern with 00s and 11s
- [Pattern_Printing/cross_square_pattern.c](Pattern_Printing/cross_square_pattern.c) - Cross inside a square pattern
- [Pattern_Printing/patterns.c](Pattern_Printing/patterns.c) - Collection of 26 different patterns

### Calculators
- [Calculators/basic_calculator.c](Calculators/basic_calculator.c) - Simple calculator with add, subtract, multiply, divide
- [Calculators/scientific_calculator.c](Calculators/scientific_calculator.c) - Advanced calculator with trig functions, logs, etc.
- [Calculators/factorial_calculator.c](Calculators/factorial_calculator.c) - Program to calculate factorials

### Number Triangles
- [Number_Triangles/ascending_triangle.c](Number_Triangles/ascending_triangle.c) - Triangle with ascending numbers
- [Number_Triangles/column_counter_triangle.c](Number_Triangles/column_counter_triangle.c) - Triangle with column counters
- [Number_Triangles/increasing_odd_rows.c](Number_Triangles/increasing_odd_rows.c) - Triangle with increasing odd rows
- [Number_Triangles/odd_number_triangle.c](Number_Triangles/odd_number_triangle.c) - Triangle with odd numbers
- [Number_Triangles/alternating_triangle.c](Number_Triangles/alternating_triangle.c) - Triangle with alternating numbers and letters
- [Number_Triangles/combined_patterns.c](Number_Triangles/combined_patterns.c) - Multiple patterns including increasing, decreasing, diamond-like numbers and star pyramid
- [Number_Triangles/numeric_pyramid.c](Number_Triangles/numeric_pyramid.c) - Hollow numeric pyramid with customizable height

### Utility Programs
- [Utility_Programs/hello.c](Utility_Programs/hello.c) - Traditional "Hello, World!" program demonstration
- [Utility_Programs/character_counter.c](Utility_Programs/character_counter.c) - Counts characters entered by user
- [Utility_Programs/height_category.c](Utility_Programs/height_category.c) - Categorizes height measurements
- [Utility_Programs/separator.c](Utility_Programs/separator.c) - Separates digits of a number and calculates sum
- [Utility_Programs/multiplication_table.c](Utility_Programs/multiplication_table.c) - Prints multiplication table

### Array Applications
- [Array_Applications/fruit_stock.c](Array_Applications/fruit_stock.c) - Fruit inventory management system
- [Array_Applications/order_tracker.c](Array_Applications/order_tracker.c) - Restaurant order tracking system
- [Array_Applications/matrix_pointer_sort.c](Array_Applications/matrix_pointer_sort.c) - Matrix operations with pointers

## Sample Outputs

### Pattern Printing Examples

#### Asterisk Diamond (Height: 5)
```
    *    
   ***   
  *****  
 ******* 
*********
 ******* 
  *****  
   ***   
    *    
```

#### X Pattern (Height: 5)
```
*       *
 *     * 
  *   *  
   * *   
    *    
   * *   
  *   *  
 *     * 
*       *
```

### Calculator Example (Basic Calculator)
```
BASIC CALCULATOR
---------------
1. Addition
2. Subtraction
3. Multiplication
4. Division
---------------
Enter choice (1-4): 1
Enter first number: 15
Enter second number: 27
Result: 15 + 27 = 42
```

### Number Triangle Example (Ascending Triangle)
```
1
2 3
4 5 6
7 8 9 10
```

### Utility Program Example (Separator)
```
Enter a number: 12345
Digits: 1 2 3 4 5
Sum of digits: 15
```

## How to Compile and Run

These programs can be compiled using any standard C compiler (GCC recommended):

```bash
# For a program in a subfolder
gcc -o program_name Category_Folder/program_name.c
./program_name
```

### Examples:

To compile and run the asterisk diamond pattern:

```bash
gcc -o diamond Pattern_Printing/asterisk_diamond.c
./diamond
```

To compile a program that uses the math library:

```bash
gcc -o calculator Calculators/scientific_calculator.c -lm
./calculator
```

## Project Structure
```
C_Projects/
├── Pattern_Printing/
│   ├── asterisk_diamond.c
│   ├── centered_asterisk_pyramid.c
│   ├── x_pattern.c
│   ├── border_pattern.c
│   ├── cross_square_pattern.c
│   └── patterns.c
├── Calculators/
│   ├── basic_calculator.c
│   ├── scientific_calculator.c
│   └── factorial_calculator.c
├── Number_Triangles/
│   ├── ascending_triangle.c
│   ├── column_counter_triangle.c
│   ├── increasing_odd_rows.c
│   ├── odd_number_triangle.c
│   ├── combined_patterns.c
│   ├── numeric_pyramid.c
│   └── alternating_triangle.c
├── Utility_Programs/
│   ├── character_counter.c
│   ├── height_category.c
│   ├── separator.c
│   └── multiplication_table.c
├── Array_Applications/
│   ├── fruit_stock.c
│   ├── order_tracker.c
│   └── matrix_pointer_sort.c
├── .gitignore
└── README.md
```

## Learning Path

If you're new to C programming, consider following this progression:

1. Start with basic pattern printing programs to understand control structures
2. Move to number triangles to practice more complex looping logic
3. Try the utility programs to learn input/output and basic algorithms
4. Explore calculators to understand functions and mathematical operations
5. Finally, tackle array applications for more advanced concepts

## Contributing

Feel free to contribute by adding more programs or improving existing ones. Please maintain the folder structure when adding new files.

1. Fork the repository
2. Create a new branch for your feature
3. Add or modify programs
4. Submit a pull request

Please ensure your code is well-commented and follows the existing style.