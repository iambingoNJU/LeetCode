## Problem
Given an array of size n, find the majority element. The majority element is the element that appears more than ⌊ n/2 ⌋ times.  
You may assume that the array is non-empty and the majority element always exist in the array.  

Example 1:
Input: [3,2,3]
Output: 3


Example 2:
Input: [2,2,1,1,1,2,2]
Output: 2


## Solution

有一种策略是两两PK，将所有元素两两比较，如果两个元素相等，就保留一个，如果不等，就都扔掉，经过`n/2`次比较后，剩下元素数量肯定不超过`n/2`，而且在这个PK过程中，我们保证了我们丢掉的主元素不超过丢掉的非主元素，这样剩余的元素中主元素依然存在，但是问题规模减少了一半，递归解决就可以。但是这种策略要求每次比较时候元素个数总为偶数个，否则剩余的一个元素没法参与比较，就不知道该保留它还是扔掉它，目前也没想到什么好的方法解决。这种解法要求出事数组中元素个数为`2^n`。

另一个解决方案是直接遍历整个数组，记录当前的主元素出现的次数，遇到主元素，计数器加一，遇到非主元素，计数器减一；计数器为0时，重置主元素。遍历完之后，当前的主元素就是我们需要的主元素。
