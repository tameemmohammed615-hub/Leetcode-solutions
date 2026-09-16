# Valid Parentheses

## Problem

Check whether a string containing brackets has valid matching pairs.

## Approach

I use a stack. Opening brackets are pushed into the stack. When a closing bracket appears, I check whether it matches the top opening bracket.

## Example

Input:

"()[]{}"

Output:

true

## Complexity

Time Complexity: O(n)

Space Complexity: O(n)

## Test Cases

1. "()" → true
2. "()[]{}" → true
3. "(]" → false
