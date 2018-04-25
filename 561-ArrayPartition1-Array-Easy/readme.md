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

˼·�ܼ򵥣����ǿ������������������������κ�������(����û���ظ�Ԫ��)����ô�������϶�������������ܺͣ�Ȼ��Ҫ��ʹ�����ܺ������ô����Ӧ�þ������Ƚϴ��Ԫ�ؼ����ܺͣ���ô�δ�������Լ����ܺ�����Ȼ���Եģ����ǰ��������ʹδ��������һ���飬��ô�δ�����Ϳ��Լ����ܺ��ˡ�����ȥ��������ʹδ�����ʣ���������һ�������⣬�������Ǿ͵õ������͵������������������������λ�õ�Ԫ�ؼ�Ϊ��������͵�n��Ԫ�ء�  

���뷽��Ļ�����򵥵ķ����Ƕ�����ֱ������Ȼ��������λ���ϵ�Ԫ��֮�ͣ�ʱ�临�Ӷ���nlogn��
���⣬���������ķ�Χ����[-10000, 10000]֮��ģ������ǿ�����һ��int��������¼[-10000, 10000]��ÿ�������������г��ֵĴ����������Ͳ�Ҫ����Ҳ�ܹ��õ����������д�С��������λ�õ�Ԫ�أ�ʱ�临�Ӷ�ΪO(n)��
