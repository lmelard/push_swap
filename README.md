# Push Swap: Radix Sort Algorithm

# Project overview
push_swap is a sorting algorithms projet. This project involves sorting data on a stack, with a limited set of instructions, and the smallest number of moves.

# Project Overview
The goal is to sort a random set of integers using two stacks, named a and b, and a set of instructions. The program outputs a sequence of these instructions that results in the integers being sorted in stack a.

# Radix Sort Implementation
Radix Sort is a non-comparative sorting algorithm that avoids comparison by creating and distributing elements into buckets according to their radix. For this implementation:

- ***Bitwise Operations***: The algorithm sorts based on the binary representation of the numbers. It groups numbers by each bit, starting from the least significant bit.
- ***Shifting Bits***: Numbers are processed and grouped based on shifting bits, using bitwise operations. This process repeats for each bit until the stacks are sorted.
- ***Efficiency***: While not the fastest for all datasets, Radix Sort in this context demonstrates a good balance of efficiency and complexity, especially when dealing with large sets of numbers.

# Sorting Instructions
The allowed operations to manipulate the stacks are:

- `sa` (swap a): Swap the first 2 elements at the top of stack a.
- `sb` (swap b): Swap the first 2 elements at the top of stack b.
- `ss` : sa and sb simultaneously.
- `pa` (push a): Move the top element from stack b to stack a.
- `pb` (push b): Move the top element from stack a to stack b.
- `ra` (rotate a): Rotate stack a so that the first element becomes the last.
- `rb` (rotate b): Rotate stack b so that the first element becomes the last.
- `rr` : ra and rb simultaneously.
- `rra` (reverse rotate a): Reverse rotate stack a.
- `rrb` (reverse rotate b): Reverse rotate stack b.
- `rrr` : rra and rrb simultaneously.
  
# Setup and Execution
Compile the program with make and run it with a list of integers as arguments. The output will be the sequence of operations to sort the stack.
