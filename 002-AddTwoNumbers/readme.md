## Problem

You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order and each of their nodes contain a single digit. Add the two numbers and return it as a linked list.

You may assume the two numbers do not contain any leading zero, except the number 0 itself.

Example

Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
Output: 7 -> 0 -> 8
Explanation: 342 + 465 = 807.

## Solution

解题思路很简单，同时遍历两个链表，将对应元素相加，用结果的个位数用来建一个新节点, 保存十位数作为下一次遍历的输入.

但是关键是代码怎么写了，不同人写出来的东西真的差别太大了.

我就是怎么想的就怎么写，先保证两个链表都不为空时处理一下，然后再处理剩余的一个非空链表，最后处理最后一位进位.
另外，头节点的处理和其他的也不一样.
这样导致我的代码很长.

其实，链表长度不一致可以一起处理，每次加法时判断一下当前节点是不是空就行，另外最后一位进位也可以一起处理，在循环条件处加上一个判断它是不是0的条件.
另外，通过额外添加一个头节点，可以使后面的处理一致，这是链表比较常见的处理方法.

最后一种解法，由于链表是一种递归结构，可以使用递归方法解决.
