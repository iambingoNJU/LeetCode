## Problem

Given an array of integers where 1 ≤ a[i] ≤ n (n = size of array), some elements appear twice and others appear once.  
Find all the elements of [1, n] inclusive that do not appear in this array.  
Could you do it without extra space and in O(n) runtime? You may assume the returned list does not count as extra space.  

Example:  
Input:  
[4,3,2,7,8,2,3,1]  

Output:  
[5,6]  

## Solution

开始自己做一直纠结为什么有些元素只出现一次或者两次，这个两次有什么含义？事实上这个条件似乎并没有什么作用，并没有看到什么有效的solution能充分利用这个条件。

实际上，这个题的关键是数组中的数字范围和数组大小n相关的，每个数字都是`1-n`之间的数字。

如何利用好这个条件才是关键。

一个比较好的方法就是用`nums[i]`是正数还是负数来表示数字`i + 1`有没有出现在数组中，然后遍历整个数组，每次遇到`nums[i]`，先求绝对值(可能之前被设为负值)，然后减1当作下标去访问`nums[abs(nums[i] - 1]`, 如果该值大于零，则将其设为负值，否则是已经访问过，不用管它。这样一次遍历后就可以根据`nums[i]`的正负判断`i + 1`是否在原数组中存在。

注意这种解法其实不管每个数字在数组中出现的次数的，只要数字范围是在`1 ~ n`之间就行了。

对于这种数字范围受限的问题，要充分利用数组的下标。八皇后问题也有一个类似的解法。
