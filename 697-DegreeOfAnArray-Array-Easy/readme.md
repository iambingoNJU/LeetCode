## Problem

Given a non-empty array of non-negative integers nums, the degree of this array is defined as the maximum frequency of any one of its elements.
Your task is to find the smallest possible length of a (contiguous) subarray of nums, that has the same degree as nums.


Example 1:
Input: [1, 2, 2, 3, 1]
Output: 2

Explanation: 
The input array has a degree of 2 because both elements 1 and 2 appear twice.
Of the subarrays that have the same degree:
[1, 2, 2, 3, 1], [1, 2, 2, 3], [2, 2, 3, 1], [1, 2, 2], [2, 2, 3], [2, 2]
The shortest length is 2. So return 2.


Example 2:
Input: [1,2,2,3,1,4,2]
Output: 6

Note: 
nums.length will be between 1 and 50,000.
nums[i] will be an integer between 0 and 49,999.

## Solution

首先要找到数组的degree, 然后对所有的degree求取最小子数组，由于在求最小子数组的过程中又需要知道每个元素出现的所有位置，而在之前统计每个元素出现的次数过程中会知道这个信息。
所以一个比较好的方案是存一个inverted index数组，鉴于数组中元素的范围是在0~49999之间，我们建一个大小为50000的数组index，数组的每个元素是一个int vector，这样index[i]这个int vector记录的就是整数i在数组中出现的所有位置下标集合。得到这个inverted index之后，我们求index[i].size()的最大值，就可以得到数组的degree，然后由于我们知道了每个元素出现的位置，于是就直接用每个元素出现的位置的最大下标减去最小下标加1便可得到最小子数组的长度。  

**需要注意的是max_element返回的是迭代器而不是最大值。**
