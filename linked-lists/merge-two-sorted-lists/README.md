# Merge Two Sorted Lists

## Problem

Merge two sorted linked lists into one sorted linked list.

## Approach

I compare the first nodes of both lists. I connect the smaller node to the result and continue until both lists are processed.

## Example

Input:

1 -> 2 -> 4

1 -> 3 -> 4

Output:

1 -> 1 -> 2 -> 3 -> 4 -> 4

## Complexity

Time Complexity: O(n + m)

Space Complexity: O(1)

## Test Case

List 1:

1 -> 2 -> 4

List 2:

1 -> 3 -> 4

Expected Output:

1 -> 1 -> 2 -> 3 -> 4 -> 4
