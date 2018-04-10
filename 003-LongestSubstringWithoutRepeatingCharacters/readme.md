## Problem

Given a string, find the length of the longest substring without repeating characters.

Examples:

Given "abcabcbb", the answer is "abc", which the length is 3.

Given "bbbbb", the answer is "b", with the length of 1.

Given "pwwkew", the answer is "wke", with the length of 3. Note that the answer must be a substring, "pwke" is a subsequence and not a substring.

## Solution

��һ�뷨�������α���ÿ���ַ�������Ӹ��ַ���ʼ�Ĳ������ظ��ַ�����Ӵ����ȣ���¼���ֵ��������Ӵ��ĳ���ʱ����������������һ������������������ַ���һ�������ظ��ַ���ֹͣ���㣬��ʱ������Ӵ�������������ʱ�临�Ӷ���O(n^3)�����ӶȺܸߣ�������ͨ���˲��ԡ�

Ȼ�������룬����ΪʲôҪ�ü��������Ѿ��������ַ��أ���ʵ��û�б�Ҫ�ģ�ֱ����һ������256��bool����������Ϳ��Լ�¼�������ַ���������¼�Ͳ����ַ������ڳ���ʱ����ɣ����Ǹ��Ӷ����������O(n^2)��

��˼��һ�£����ֻ������Ż����ڼ���ӵ�i+1���ַ���ʼ����Ӵ��ĳ���ʱ���������õ�i���ַ���ʼ����Ӵ��Ľ���������i���ַ���ʼ����Ӵ�������m����ô����֪���ӵ�i���ַ�����i+m���ַ��в������ظ��ַ�����ô�ڼ���ӵ�i+1���ַ���ʼ����Ӵ��ĳ���ʱ��ֱ�Ӵӵ�i+m���ַ���ʼ���㣬�����Ǵӵ�i+1���ַ���ʼ����Ϊ�ӵ�i+1���ַ�����i+m���ַ��в������ظ��ַ�, ��ʱ�ڲ�ѭ����ѭ������ֻ�����������Ǹ��Ӷȿ��Խ��͵�O(n)��
