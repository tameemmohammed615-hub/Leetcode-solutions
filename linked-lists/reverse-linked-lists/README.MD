# Reverse Linked List

## Problem

Reverse a singly linked list and return the reversed list.

## Approach

I use three pointers: previous, current, and next. Each node is connected to the previous node until the complete list is reversed.

## Example

Input:

1 -> 2 -> 3 -> NULL

Output:

3 -> 2 -> 1 -> NULL

## Complexity

Time Complexity: O(n)

Space Complexity: O(1)

## Test Case

Input:

1 -> 2 -> 3

Expected Output:

3 -> 2 -> 1
