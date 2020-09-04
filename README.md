# Dynamic Programming
*Those who  can't remember their past are condemned to repeat it.*

### Where to apply?
 1. Optimal substructure
 2. Overlapping subproblems

<hr/> 

### Top-down approach: Recursion+Memoisation
### Bottom-up approach: Iterative approach in a bottom up manner

### Time complexity: O(n)
### Space complexity: O(n)

<hr/>

## Fibonacci
 * <a href="https://github.com/sanya2508/Dynamic-Programming/blob/master/01-fib.cpp">Top down</a>
 * <a href="https://github.com/sanya2508/Dynamic-Programming/blob/master/02-fib%20bottom%20up.cpp">Bottom up</a>
 * <a href="https://github.com/sanya2508/Dynamic-Programming/blob/master/fib%20space%20and%20time%20optimized.cpp">Space and time optimized

<hr/>

## <a href="https://github.com/sanya2508/Dynamic-Programming/blob/master/03-%20reduce%20number%20to%20one%20in%20min%20steps.cpp">Minimum steps to one</a>
 * Top down
 * Bottom up

<hr/>

## Coins change
 * Top down
 * Bottom up

<hr/>

## <a href="https://github.com/sanya2508/Dynamic-Programming/blob/master/wine%20problem.cpp">Wine problem</a>
*In one year you have to sell one bottle (from extreme last or first of the given array). Prices of bottle increases every year. (price x year)*

<hr/>

## <a href="https://github.com/sanya2508/Dynamic-Programming/tree/master">Maximum subarray sum</a>
 * In this, we can do space optimization as well. (Kadaen's algo)

<hr/>

## Ladder Problem //add code
 * Top down
 * Bottom up O(nk)
 * Optimised O(n)

<hr/>

## Rod cutting to maximize profit
 * <a href="https://github.com/sanya2508/Dynamic-Programming/blob/master/06-%20rod%20cutting%20(recursion).cpp">Recursion</a>
 * <a href="https://github.com/sanya2508/Dynamic-Programming/blob/master/06-%20rod%20cutting%20(memoization).cpp">Top down</a>
 * <a href="https://github.com/sanya2508/Dynamic-Programming/blob/master/06-%20rod%20cutting%20(bottom%20up%20dp).cpp">Bottom up</a>

<hr/>

## <a href="https://github.com/sanya2508/Dynamic-Programming/blob/master/09-longest%20common%20subsequence.cpp">Longest common subsequence</a>

## <a href="https://github.com/sanya2508/Dynamic-Programming/blob/master/11-cell%20mitosis.cpp">Cell Mitosis</a>
 * Break the problem into odd and even case.

<hr/>

## <a href="https://github.com/sanya2508/Dynamic-Programming/blob/master/13-mixtures.cpp">Mixtures</a>

<hr/>

## Friend's pairing problem
 * Try to break down, and make a recurrence.
 * f(N)= f(N-1) + ((N-1)C1 x f(N-2))

<hr/>

## Catalan Number
*Count number of BST's that can be formed using n number of nodes numbered from 1 to n.*

 * Any ith node can become the root node.
 * Reference: https://www.youtube.com/watch?v=0s20L4-chDA
 * Number of binary tree= n!* Number of BST.
 * Number of unlabelled binary tree= same as BST.

<hr/>

## Optimal game strategy

<hr/>

## Grid based DP
 * Common Variants:
     * Finding the min/max cost path in a grid.
     * Finding the number of ways to reach a particular position from a given starting point in 2D grid and so on.
     
 * ### Minimum cost path
 * ### Rat and Elephant Ways
     * Rat version:
         * Recursive
         * DP O(n^2)
         * PnC O(n)
     * Elephant version:
         * DP O(n^3)
     * <a href="https://github.com/sanya2508/Dynamic-Programming/blob/master/12-robot%20paths.cpp">Robot Paths</a>

<hr/>


## Longest Increasing Subsequence
 * DP-1 (Standard) --> `O(n^2)`
 * DP-2 (Tricky) --> `O(n^2)`
 * DP-2 with binary search --> `O(nlogn)`
 * DP with segment trees --> `O(nlogn)`
