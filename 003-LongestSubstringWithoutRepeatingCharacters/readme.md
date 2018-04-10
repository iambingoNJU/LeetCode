## Problem

Given a string, find the length of the longest substring without repeating characters.

Examples:

Given "abcabcbb", the answer is "abc", which the length is 3.

Given "bbbbb", the answer is "b", with the length of 1.

Given "pwwkew", the answer is "wke", with the length of 3. Note that the answer must be a substring, "pwke" is a subsequence and not a substring.

## Solution

第一想法就是依次遍历每个字符，计算从该字符开始的不包含重复字符的最长子串长度，记录最大值。在求最长子串的长度时，依次向后遍历，用一个集合来存遍历到的字符，一旦发现重复字符，停止计算，此时就是最长子串，这样的做法时间复杂度是O(n^3)，复杂度很高，但还是通过了测试。

然后再想想，发现为什么要用集合来存已经遇到的字符呢？其实是没有必要的，直接用一个包含256个bool变量的数组就可以记录遇到的字符，这样记录和查找字符可以在常数时间完成，于是复杂度立即变成了O(n^2)。

再思考一下，发现还可以优化。在计算从第i+1个字符开始的最长子串的长度时，可以利用第i个字符开始的最长子串的结果，如果第i个字符开始的最长子串长度是m，那么我们知道从第i个字符到第i+m个字符中不存在重复字符，那么在计算从第i+1个字符开始的最长子串的长度时，直接从第i+m个字符开始计算，而不是从第i+1个字符开始，因为从第i+1个字符到第i+m个字符中不存在重复字符, 这时内层循环的循环变量只增不减，于是复杂度可以降低到O(n)。
