# Best Time to Buy and Sell Stock

## Problem

Find the maximum profit that can be made by buying a stock on one day and selling it on a later day.

## Approach

I keep track of the lowest price seen so far. For every price, I calculate the possible profit and keep the maximum profit.

## Example

Input:

[7,1,5,3,6,4]

Output:

5

## Complexity

Time Complexity: O(n)

Space Complexity: O(1)

## Test Case

Input: [7,1,5,3,6,4]

Expected Output: 5
