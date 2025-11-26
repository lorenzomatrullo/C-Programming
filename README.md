## C Programming
This repository is a **hands‑on C programming course** built entirely from small, focused programs.

Each file is a self‑contained example that you can compile, run, and modify in a few seconds. The lessons are ordered so you start with variables and control flow, move through arrays, strings, functions, pointers, and memory, and finish with more realistic practice scripts and exam‑style algorithms.

Use it as a **reference** when you forget a detail, or follow the numbered files in order as a **mini C textbook you can execute**. 

You can treat this repo as a “course in a box”:
- Start from lower numbers and move forward.
- Compile and run each file.
- Tweak values and inputs to see what changes.

<br>

## Requirements
To run the examples in this repo you need:
- A C compiler (`gcc` or `clang`).
- **Visual Studio Code**.
- The **C/C++** extension by Microsoft.
- The **Code Runner** extension (for one-click run).

Quick setup with VS Code:
1. Install [VS Code](https://code.visualstudio.com/download) and add the **C/C++** and **Code Runner** extensions from the Extensions view.
2. Install a C compiler and make sure `gcc` or `clang` is available in the VS Code terminal:
   ```bash
   gcc --version
   # or
   clang --version
   ```
3. Open this folder in VS Code (`File` → `Open Folder…`).
4. Open any `.c` file and use **Code Runner** (the play icon) to compile and run it.

For more details on configuring C/C++ in VS Code, see the official docs:  
[C/C++ in Visual Studio Code](https://code.visualstudio.com/docs/languages/cpp).

<br>

## Learning Path
### 1. Core language

**Basics**

- [01 – Variables](libs/01-variables.c)
- [02 – Data Types](libs/02-data_types.c)
- [03 – Escape Sequences](libs/03-escape_sequences.c)
- [04 – Format Specifiers](libs/04-format_specifiers.c)
- [05 – User Input](libs/05-user_input.c)

**Operators and expressions**

- [06 – Math Operators](libs/06-math_operators.c)
- [07 – Logical Operators](libs/07-logical_operator.c)
- [08 – Bitwise Operators](libs/08-bitwise_operators.c)
- [09 – Ternary Operator](libs/09-ternary_operator.c)
- [10 – Type Casting](libs/10-type_casting.c)
- [11 – Math Functions](libs/11-math_functions.c)

**Control flow**

- [12 – If Statement](libs/12-if_statement.c)
- [13 – Switch Statement](libs/13-switch_statement.c)
- [14 – For Loop](libs/14-for_loop.c)
- [15 – While Loop](libs/15-while_loop.c)
- [16 – Do-While Loop](libs/16-do_while_loop.c)
- [17 – Break and Continue](libs/17-break_continue_statements.c)
- [18 – Nested Loop](libs/18-nested_loop.c)
- [19 – For Loops to While Loops](libs/19-ForLoops_to_WhileLoops.c)

**Arrays and strings**

- [20 – Arrays](libs/20-arrays.c)
- [21 – Array Iteration](libs/21-arrays_loop.c)
- [22 – 2D Arrays](libs/22-arrays_2D.c)
- [23 – 2D Arrays (Manual)](libs/23-arrays_2D_manual.c)
- [24 – Array Sorting](libs/24-array_sort.c)
- [25 – String Functions](libs/25-string_functions.c)
- [26 – Array of Strings](libs/26-array_strings.c)

**Functions**

- [27 – Function Prototypes](libs/27-function_prototype.c)
- [28 – Function Arguments](libs/28-function_arguments.c)
- [29 – Return Statement](libs/29-return_statement.c)
- [30 – Recursion](libs/30-recursion.c)

**Pointers and memory**

- [31 – Pointers](libs/31-pointers.c)
- [32 – Memory Addresses](libs/32-memory_addresses.c)
- [33 – Pass by Reference](libs/33-pass_by_reference.c)
- [34 – Pointer-Array Notation](libs/34-pointer-array_notation.c)
- [35 – Dynamic Memory Allocation](libs/35-dynamic_allocated_memory.c)
- [36 – Memory Reallocation](libs/36-realloc.c)

**User-defined types and language features**

- [37 – Structs](libs/37-structs.c)
- [38 – Arrays of Structs](libs/38-structs_array.c)
- [39 – `typedef`](libs/39-typedef.c)
- [40 – Enums](libs/40-enums.c)

**Files and streams**

- [41 – Files: Reading](libs/41-files_reading.c)
- [42 – Files: Writing](libs/42-files_writing.c)
- [43 – Files: Rename](libs/43-files_rename.c)
- [44 – Files: Remove](libs/44-files_remove.c)
- [45 – Command-Line Arguments](libs/45-command_line_arguments.c)

**Extras**

- [46 – Random Numbers](libs/46-random_numbers.c)
- [47 – Swap Values](libs/47-swap_values_variables.c)

<br>

## 2. Practice scripts
These are small programs that use the core language features in more practical ways.

- [48 – Even or Odd](scripts/48-even_or_odd.c)
- [49 – Calculator](scripts/49-calculator.c)
- [50 – Temperature Conversions](scripts/50-temperature_conversions.c)
- [51 – Circle Calculation](scripts/51-circle_calculation.c)
- [52 – Number Generator](scripts/52-generate_nums.c)
- [53 – Find Minimum Number](scripts/53-find_minimum_number.c)
- [54 – Find Maximum Number](scripts/54-find_maximum_number.c)
- [55 – Average of Array](scripts/55-average_array.c)
- [56 – Copy Array](scripts/56-copy_array.c)
- [57 – Reverse Array](scripts/57-reverse_array.c)
- [58 – Vector Addition](scripts/58-vector_addition.c)
- [59 – Print 2D Array](scripts/59-print2DArray.c)
- [60 – Count Characters](scripts/60-count_characters.c)
- [61 – Count Vowels in Word](scripts/61-count_vowel_word.c)
- [62 – Count Vowels in String](scripts/62-count_vowel_string.c)
- [63 – Count Words in String](scripts/63-count_words_string.c)
- [64 – Occurrences of Number](scripts/64-occurrences_num.c)
- [65 – Occurrences with `strncmp`](scripts/65-occurrences_strncmp.c)
- [66 – Occurrences of Word](scripts/66-occurrences_word.c)
- [67 – Convert Vowels to Uppercase](scripts/67-convert_vowel_touppercase.c)
- [68 – String Append (Dynamic Memory)](scripts/68-string_append-DynamicMemoryAllocation.c)
- [69 – Distance Calculation](scripts/69-distance_calculation.c)
- [70 – Source Code Print](scripts/70-source_code_print.c)
- [71 – Pointers Example](scripts/71-pointers_example.c)
- [72 – Pass by Reference Example](scripts/72-pass_by_reference_example.c)
- [73 – Prime Numbers (Recursion)](scripts/73-prime_numbers_recursion.c)
- [74 – Find Palindromes](scripts/74-find_palindroms.c)
- [75 – Number Guessing Game](scripts/75-number_guessing_game.c)
- [76 – Quiz Game](scripts/76-quiz_game.c)
- [77 – Tic-Tac-Toe](scripts/77-tic_tac_toe.c)
- [78 – Car Game](scripts/78-car_game.c)
- [79 – Car Game (Italian)](scripts/79-car_game_italian.c)
- [80 – Agenda](scripts/80-agenda.c)
- [81 – Agenda (Italian)](scripts/81-agenda_italian.c)

**Additional practice / experiments**

- [82 – ARBINi Strings](scripts/82-ARBINi_strings.c)
- [83 – ASOMRICDI](scripts/83-ASOMRICDI.c)
- [84 – Sum Array](scripts/84-sum_array.c)
- [85 – Sum (Recursion)](scripts/85-sum_recursion.c)

<br>

## 3. Exam-style algorithms
These files contain more advanced algorithms and exam practice tasks. They still use the same C features as the rest of the repo, just in more complex combinations.

- [Merge Arrays](scripts/exam/MergeArrays.c)
- [Iterative Binary Search](scripts/exam/IterativeBinarySearch.c)
- [Recursive Binary Search](scripts/exam/RecursiveBinarySearch.c)
- [Recursive Array Sum (Incremental Approach)](scripts/exam/RecursiveArraySum_Incremental.c)
- [Recursive Array Sum (Divide and Conquer)](scripts/exam/RecursiveArraySum_DivideAndConquer.c)
- [Selection Sort (Max version)](scripts/exam/SelectionSortMax.c)
- [Selection Sort (Min version)](scripts/exam/SelectionSortMin.c)
- [Bubble Sort](scripts/exam/BubbleSort.c)
- [Insertion Sort](scripts/exam/InsertionSort.c)
- [String Matching](scripts/exam/StringMatching.c)
- [Exercise 1](scripts/exam/exercise_1.c)
- [Exercise 2](scripts/exam/exercise_2.c)
- [Exercise 3](scripts/exam/exercise_3.c)
- [Exercise 4](scripts/exam/exercise_4.c)
- [Exercise 5](scripts/exam/exercise_5.c)
- [Exercise 7](scripts/exam/exercise_7.c)
- [Exercise 8](scripts/exam/exercise_8.c)
- [Exercise 9](scripts/exam/exercise_9.c)
- [Exercise 10](scripts/exam/exercise_10.c)
- [Exercise 11](scripts/exam/exercise_11.c)
- [Exercise 12](scripts/exam/exercise_12.c)
- [Exercise 13](scripts/exam/exercise_13.c)
- [Exercise 14](scripts/exam/exercise_14.c)
- [Exercise 15](scripts/exam/exercise_15.c)
- [Exercise 16](scripts/exam/exercise_16.c)
- [Exercise 18](scripts/exam/exercise_18.c)
- [Exercise 19](scripts/exam/exercise_19.c)
- [Exercise 20](scripts/exam/exercise_20.c)
- [Exercise 21](scripts/exam/exercise_21.c)
- [Exercise 22](scripts/exam/exercise_22.c)

<br>

## How to work through the repo
- **New to C?** Start at `libs/01-variables.c` and move forward in order.
- **Need a specific topic?** Jump to the section above (for example, pointers, files, or recursion) and open the matching numbered file.
- **Preparing for exams?** Focus on the `scripts/` practice programs first, then the `scripts/exam/` tasks.