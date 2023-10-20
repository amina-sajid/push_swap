Push Swap
Push Swap is a project that tackles the task of sorting an array of integers using two stacks and a predefined set of commands. The objective is to minimize the number of moves required to sort the input integers. This program generates a sequence of instructions for the Push Swap algorithm to arrange the given integers.

Caution: Ensure a thorough understanding of the code and refrain from blind copy-pasting. This practice is crucial for both your learning and maintaining academic integrity.

Command Set
The Push Swap algorithm operates with the following instructions:

sa: Swap A - Exchanges the top two elements of stack A.
sb: Swap B - Exchanges the top two elements of stack B.
ss: Swap A and Swap B - Executes both sa and sb operations.
pa: Push A - Moves the top element of stack B to the top of stack A.
pb: Push B - Transfers the top element of stack A to the top of stack B.
ra: Rotate A - Shifts all elements of stack A from the bottom to the top.
rb: Rotate B - Shifts all elements of stack B from the bottom to the top.
rr: Rotate A and Rotate B - Performs both ra and rb operations.
rra: Reverse Rotate A - Shifts all elements of stack A from the top to the bottom.
rrb: Reverse Rotate B - Shifts all elements of stack B from the top to the bottom.
rrr: Reverse Rotate A and Reverse Rotate B - Executes both rra and rrb operations.
Sorting Algorithm
The Push Swap algorithm employs a combination of strategies to sort the input integers efficiently:

1. Simple Sorting (For Stacks with Size < 6)
For smaller stacks (size < 6), a straightforward sorting approach is utilized, which can be found in the src folder.

2. Radix Sort (For Larger Stacks)
For larger stacks, Radix Sort serves as the primary sorting algorithm. Radix Sort is a fast sorting technique with a time complexity of O(n). It begins by sorting numbers based on their least significant digit and gradually proceeds to the most significant digit.

The algorithm:

Simplifies the input numbers to the range [0, N) by assigning each number an index.
Sorts the numbers in base 2 using two stacks (A and B).
Iteratively processes each bit from right to left, pushing numbers to stack B based on the current bit.
After processing all bits, the numbers are sorted in stack A.
Performance
The performance of the Push Swap algorithm is as follows:

Sorts 3 numbers with a maximum of 3 instructions.
Sorts 4 numbers with a maximum of 7 instructions.
Sorts 5 numbers with a maximum of 11 instructions.
Sorts 100 numbers with a maximum of 1084 instructions, achieving 3 points.
Sorts 500 numbers with a maximum of 6785 instructions, earning 4 points.
The algorithm is designed to meet the project's requirements and can exceed 105% when bonus tasks are completed.

