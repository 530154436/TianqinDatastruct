//
// Created by Edward on 2020/9/3.
//
#ifndef TIANQINDATASTRUCT_EXERCISES_HPP
#define TIANQINDATASTRUCT_EXERCISES_HPP

#include "../templates/LinkListTemplate.hpp"
#include "../templates/SqStackTemplate.hpp"
#include "../templates/SqQueueTemplate.hpp"

typedef int ElemType;

/*
 * 练习 3.1 栈 p71
 */
int dc(LNode<char> *L, int n);                                  // 4. 判断链表的全部 n 个字符是否中心对称

                                                                /** ★★☆ */
typedef struct sstk{                                            // 5. 共享栈
    int top[2];
    ElemType data[MaxStackSize];
};
int push(ElemType i, ElemType x);
int pop (ElemType i);

/*
 * 练习 3.2 队列
 */
                                                                /** ★★☆ */
typedef struct tqueue{                                          // 1. 设置一个标志域 tag 的入队和出队算法
    ElemType data[MaxStackSize];
    int front,rear,tag;
};
int tEnQueue(tqueue &s, ElemType x);
int tDeQueue(tqueue &s, ElemType &x);

void Inverse(SqQueue<ElemType> &Q, SqStack<ElemType> &S);       // 2. Q 是一个队列，S 是一个空栈，实现将队列中的元素逆置的算法。

                                                                /** ★★☆ */
typedef struct SSQueue{                                         // 3. 利用两个栈 S1, S2 来模拟一个队列
    SqStack<ElemType> S1,S2;
};
int EnSSQueue(SSQueue &q, ElemType x);
int DeSSQueue(SSQueue &q, ElemType &x);
int SSQueueEmpty(SSQueue q);

/*
 * 3.3 核和队列的应用 p96-97
 */
bool BracketsCheck(char *str);                                 // 1. 判别表达式中的括号是否配对

                                                                /** ★☆☆ 这个题的官方解答有点繁琐，直接迭代搞定*/
double p(int n,double x);                                      // 2. 利用一个找实现递归函数的非递归计算

/** ★★☆ */
/*
 * 思维拓展
 * 设计一个栈，使它可以在O(1)的时间复杂度内实用 Push、 Pop 和 min 操作。所谓min操作，是指得到栈中最小的元素。
 */
typedef struct MinStack{
    SqStack<ElemType> s, min_stack;
};
bool Push(MinStack &ms, ElemType x);
bool Pop(MinStack &ms, ElemType &x);
bool min(MinStack ms, ElemType &x);

#endif //TIANQINDATASTRUCT_EXERCISES_HPP
