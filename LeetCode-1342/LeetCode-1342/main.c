//
//  main.c
//  LeetCode-1342
//
//  Created by HiLau on 2023/6/19.
//

#include <stdio.h>
//给你一个非负整数 num ，请你返回将它变成 0 所需要的步数。 如果当前数字是偶数，你需要把它除以 2 ；否则，减去 1 。

//自己写的解
int numberOfSteps(int num){
    int count = 0;
    while(num != 0)
    {
           if(num%2 == 0)
    {
        num = num/2;
        count++;
    }
    else if(num%2 == 1)
    {
        num = num - 1;
        count ++;
    }
    else
    break;
    }
    return count;
}

int main()
{
    int num = 123;
    int step = 0;
    step = numberOfSteps(num);
    printf("step = %d\n",step);
    return 0;
}


//力扣上看到比较有学习意义的解
//移位操作符和异或操作符
//int numberOfSteps (int num){
//    int count = 0;
//    while(num)
//    {
//        if(num % 2)
//            num ^= 1;
//        else
//            num >>= 1;
//        count++;
//    }
//    return count;
//}
//
//链接：https://leetcode.cn/problems/number-of-steps-to-reduce-a-number-to-zero/solutions/348240/wei-yun-suan-qiu-jie-by-shguan/

