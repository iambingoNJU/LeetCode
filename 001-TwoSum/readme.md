## Problem

Given an array of integers, return indices of the two numbers such that they add up to a specific target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

Example:
Given nums = [2, 7, 11, 15], target = 9,

Because nums[0] + nums[1] = 2 + 7 = 9,
return [0, 1].


## Solution

��򵥵�˼·���Ǳ���������������ʼ�����ÿһ��Ԫ��`x`��Ȼ��ʣ���Ԫ�����Ƿ����`target - x`.

�������ʵ�־�������һ��ѭ����һ��`find`��ʵ�ֵģ���ʱ��`find`������ѭ�������Ǿ���`find`���ܸ���.
���Ǻ�������Ӧ�ò����, �������鲢��������ģ���������ʱ�临�ӶȻ������Եģ����ܵ�ʱ�临�ӶȻ���O(n^2).

���������˵Ľ����������`unordered_map`���洢`(value, index)`��ֵ�ԣ�ȥ�������ĵ���
> Unordered map is an associative container that contains key-value pairs with unique keys.  
> Search, insertion, and removal of elements have average constant-time complexity.  

���**ƽ��**����£����ң������ɾ��Ԫ���ǳ���ʱ�临�Ӷȣ���˶��ڴ���Ŀ�����Ի�����Ը��ӶȵĽ�.
