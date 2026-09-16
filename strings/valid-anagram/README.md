# Valid Anagram

## Problem

Check whether two strings are anagrams of each other.

## Approach

I use an array of 26 characters to count how many times each letter appears in both strings. If all counts become zero, the strings are anagrams.

## Example

Input:

s = "anagram"
t = "nagaram"

Output:

true

## Complexity

Time Complexity: O(n)

Space Complexity: O(1)

## Test Case

Input: "anagram", "nagaram"

Expected Output: true
