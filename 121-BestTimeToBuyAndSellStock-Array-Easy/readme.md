## Problem

Say you have an array for which the ith element is the price of a given stock on day i.
If you were only permitted to complete at most one transaction (i.e., buy one and sell one share of the stock), design an algorithm to find the maximum profit.
Note that you cannot sell a stock before you buy one.

Example 1:
Input: [7,1,5,3,6,4]
Output: 5
Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
             Not 7-1 = 6, as selling price needs to be larger than buying price.


Example 2:
Input: [7,6,4,3,1]
Output: 0
Explanation: In this case, no transaction is done, i.e. max profit = 0.

## Solution

如果把原数组中相邻的两个元素作差得到新的diff数组，那么问题就转化为一个常规的求一个数组的最大和的连续子数组的问题了，这是一个O(n)的问题，解决起来也很方便。关键是要转化到这个问题，其实这个转化启发自之前的问题122，那个问题是可以进行多次交易的，所以就直接求diff数组，然后把diff数组中所有的正值加起来即可。

另一种更直观也更简单的做法是直接遍历原数组，记录当前的最小的price，然后遍历的过程中用当前的price减最小的price，从中选出最大值即可。
