## Problem

Given an array of 2n integers, your task is to group these integers into n pairs of integer, say (a1, b1), (a2, b2), ..., (an, bn) which makes sum of min(ai, bi) for all i from 1 to n as large as possible.  

Example 1:  
```
Input: [1,4,3,2]

Output: 4
Explanation: n is 2, and the maximum sum of pairs is 4 = min(1, 2) + min(3, 4).
```

Note:
1. n is a positive integer, which is in the range of [1, 10000].
1. All the integers in the array will be in the range of [-10000, 10000].

## Solution

思路很简单：我们考虑最大的数，由于最大的数比任何数都大(假设没有重复元素)，那么最大的数肯定不会计入最后的总和，然而要想使最后的总和最大，那么我们应该尽量将比较大的元素计入总和，那么次大的数可以计入总和吗？显然可以的，我们把最大的数和次大的数放在一个组，那么次大的数就可以计入总和了。这样去掉最大数和次大数，剩余的问题是一个子问题，这样我们就得到了最大和的情况：将数组排序，所有奇数位置的元素即为所求的最大和的n个元素。  

代码方面的话，最简单的方法是对数组直接排序，然后求奇数位置上的元素之和，时间复杂度是nlogn。
另外，由于整数的范围是在[-10000, 10000]之间的，故我们可以用一个int数组来记录[-10000, 10000]中每个整数在数组中出现的次数，这样就不要排序也能够得到所有数组中从小到大奇数位置的元素，时间复杂度为O(n)。
