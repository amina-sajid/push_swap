# 42 Push_Swap

Push Swap is a project that tackles the task of sorting an array of integers using two stacks and a predefined set of commands. The objective is to minimize the number of moves required to sort the input integers. This program generates a sequence of instructions for the Push Swap algorithm to arrange the given integers.

| Code  | Instruction                         | Action                                                 |
| ----- | ----------------------------------- | ------------------------------------------------------ |
| `sa`  | swap a                              | swaps the 2 top elements of stack a                    |
| `sb`  | swap b                              | swaps the 2 top elements of stack b                    |
| `ss`  | swap a + swap b                     | both `sa` and `sb`                                     |
| `pa`  | push a                              | moves the top element of stack b at the top of stack a |
| `pb`  | push b                              | moves the top element of stack a at the top of stack b |
| `ra`  | rotate a                            | shifts all elements of stack a from bottom to top      |
| `rb`  | rotate b                            | shifts all elements of stack b from bottom to top      |
| `rr`  | rotate a + rotate b                 | both `ra` and `rb`                                     |
| `rra` | reverse rotate a                    | shifts all elements of stack a from top to bottom      |
| `rrb` | reverse rotate b                    | shifts all elements of stack b from top to bottom      |
| `rrr` | reverse rotate a + reverse rotate b | both `rra` and `rrb`                                   |

## Algorithm
1. Simple Sorting (For Stacks with Size < 6)
For smaller stacks (size < 6), a straightforward sorting is done.

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

Consider an array of numbers: 20, 101, 986, 256, 702, 153, 43, and 858. To efficiently sort these numbers, imagine we have ten labeled boxes, numbered 0 through 9.

We'll start the sorting process by focusing on the least significant digit, which is the digit in the one's place. Each number will be placed in the box corresponding to this digit. For our given numbers, the placement process proceeds as follows:

20, 20 has 0 in the one's place, so it goes into box 0.
101, 101 has 1 in the one's place, so it goes into box 1.
986, 986 has 6 in the one's place, so it goes into box 6.
256, 256 has 6 in the one's place, so it goes into box 6 as well.
702, 702 has 2 in the one's place, so it goes into box 2.
153, 153 has 3 in the one's place, so it goes into box 3.
43, 43 has 3 in the one's place, so it goes into box 3.
858, 858 has 8 in the one's place, so it goes into box 8.

In this algorithm, we assume non-negative integers. However, since negative numbers may be present in this project, we first simplify the numbers.

To achieve this, we assign indexes to each number in a stack. The smallest number receives index 0, the next smallest gets index 1, and so on. This simplifies any list of integers to fit within the range [0, N), where N represents the size of the list.

After simplification, we adapt to work with two stacks instead of ten boxes. We apply a radix sort with a base of 2, using stack A as box 1 and stack B as box 0. The process begins from the rightmost bit and proceeds to the leftmost bit.

At each bit position, if the bit of the top number in stack A is 0, we execute a pb (push B) operation to place that number in stack B. If the bit is 1, we use ra to leave it in stack A. After one operation for each number, they end up in the box corresponding to their digit, similar to the box arrangement in radix sort.

Then, we use pa (push A) until stack B is empty, effectively connecting the numbers as in radix sort. This process is repeated for every bit, resulting in the sorted numbers in stack A.

for more info
- [Push Swap Tutorial](https://medium.com/nerd-for-tech/push-swap-tutorial-fa746e6aba1e)
