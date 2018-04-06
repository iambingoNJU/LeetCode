## Problem

Given an array of integers, return indices of the two numbers such that they add up to a specific target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

Example:
Given nums = [2, 7, 11, 15], target = 9,

Because nums[0] + nums[1] = 2 + 7 = 9,
return [0, 1].


## Solution

最简单的思路就是暴力方法，遍历初始数组的每一个元素`x`，然后看剩余的元素中是否存在`target - x`.

我最初的实现就是利用一层循环套一个`find`来实现的，当时用`find`而不是循环遍历是觉得`find`可能更快.
但是后来想想应该不会快, 由于数组并不是有序的，查找起来时间复杂度还是线性的，故总的时间复杂度还是O(n^2).

看到其他人的解决方案是用`unordered_map`来存储`(value, index)`键值对，去查了下文档：
> Unordered map is an associative container that contains key-value pairs with unique keys.  
> Search, insertion, and removal of elements have average constant-time complexity.  

因此**平均**情况下，查找，插入和删除元素是常数时间复杂度，因此对于此题目，可以获得线性复杂度的解.
