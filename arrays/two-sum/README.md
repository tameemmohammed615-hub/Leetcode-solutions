# Two Sum

## Problem

Given an array of integers and a target value, find two numbers whose sum is equal to the target.

## Approach

I use two loops to check every possible pair of numbers. If the sum of two numbers is equal to the target, their indexes are printed.

## Example

Input:

nums = [2, 7, 11, 15]

target = 9

Output:

[0, 1]

## Complexity

Time Complexity: O(n²)

Space Complexity: O(1)

## Test Cases

### Test Case 1
Input: [2, 7, 11, 15], target = 9  
Expected Output: [0, 1]

### Test Case 2
Input: [3, 2, 4], target = 6  
Expected Output: [1, 2]

### Test Case 3
Input: [3, 3], target = 6  
Expected Output: [0, 1]
