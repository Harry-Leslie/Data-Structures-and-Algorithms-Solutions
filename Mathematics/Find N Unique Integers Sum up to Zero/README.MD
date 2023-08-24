# 1304. Find N Unique Integers Sum up to Zero
Given an integer n, return any array containing n unique integers such that they add up to 0.

## Example 1:

Input: n = 5

Output: [-7,-1,1,3,4]

Explanation: These arrays also are accepted [-5,-1,1,2,3] , [-3,-1,2,-2,4].

## Example 2:

Input: n = 3

Output: [-1,0,1]

## Constraints
1 <= n <= 1000


# Explanation

because positive and negative number can be used we can use the fact that due -1 1 are opposite number but 
they add up 0 so

for even numbers
just start at 1 and use the complement -1 and increment until you reach n

so for n=4 it will be [1, -1, 2, -2]

for odd numbers 
just add 0 at the start then from 1 keep adding numbers until you reach n 

so for n=3 it will be [0, -1, 1]

