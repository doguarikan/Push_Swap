# push_swap
A C project for sorting numbers with given operations and 2 stacks using radix algorithm
## Operations
- sa swap top 2 numbers in stack a
- sb swap top 2 numbers in stack b
- ss swap top 2 numbers in stack a and b
- pa push the top element of stack b to stack a
- pb push the top element of stack a to stack b
- ra put top element of stack a to bottom
- rb put top element of stack b to bottom
- rr put top element of stack a and stack b to bottom
- rra put bottom element of stack a to top
- rrb put bottom element of stack b to top
- rrr put bottom element of stack a and stack b to top

## Sorting algorithm
The binary radix algorithm is a non-comparative sorting algorithm that sorts numbers by processing individual bits, starting from the least significant bit (LSB) to the most significant bit (MSB), or vice versa. It groups numbers into buckets based on each bit's value (0 or 1), sorting them progressively as it moves through the bits. This method works efficiently on integers and can achieve linear time complexity, O(n), depending on the input size and bit length.

You can check more details about [Radix Sort](https://en.wikipedia.org/wiki/Radix_sort).

## Usage
First clone the repo

```bash
git clone https://github.com/doguarikan/Push_Swap.git
```

Run make
```bash
make
```

Execute the program 
```bash
./push_swap 2 1 3 6 5 8
```
