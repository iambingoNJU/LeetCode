## Problem

You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order and each of their nodes contain a single digit. Add the two numbers and return it as a linked list.

You may assume the two numbers do not contain any leading zero, except the number 0 itself.

Example

Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
Output: 7 -> 0 -> 8
Explanation: 342 + 465 = 807.

## Solution

����˼·�ܼ򵥣�ͬʱ����������������ӦԪ����ӣ��ý���ĸ�λ��������һ���½ڵ�, ����ʮλ����Ϊ��һ�α���������.

���ǹؼ��Ǵ�����ôд�ˣ���ͬ��д�����Ķ�����Ĳ��̫����.

�Ҿ�����ô��ľ���ôд���ȱ�֤����������Ϊ��ʱ����һ�£�Ȼ���ٴ���ʣ���һ���ǿ�������������һλ��λ.
���⣬ͷ�ڵ�Ĵ����������Ҳ��һ��.
���������ҵĴ���ܳ�.

��ʵ�������Ȳ�һ�¿���һ����ÿ�μӷ�ʱ�ж�һ�µ�ǰ�ڵ��ǲ��ǿվ��У��������һλ��λҲ����һ������ѭ������������һ���ж����ǲ���0������.
���⣬ͨ���������һ��ͷ�ڵ㣬����ʹ����Ĵ���һ�£���������Ƚϳ����Ĵ�����.

���һ�ֽⷨ������������һ�ֵݹ�ṹ������ʹ�õݹ鷽�����.
