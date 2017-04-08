//要注意的就是当数组中只有0和负数或只有0的情况下，输出结果不是整个数组的首尾，而是0子列的首位，(⊙﹏⊙)|||因为题目没有说明最大子列和必须是正数
#include <stdio.h>
 
int MaxSubseqSumWithLocation(int List[], int left, int right, int *pbegin, int *pend);
 
int main(int argc, const char * argv[]) {
    // insert code here...
    int list[10000];
    int num;
    int MaxSum;
    int begin, end;
    int i;
    scanf("%d", &num);
    for(i=0; i<num; i++)
    {
        scanf("%d", &list[i]);
    }
     
    //MaxSum = MaxSubseqSum(list, 0, num-1);
    //printf("%d\n", MaxSum);
    MaxSum = MaxSubseqSumWithLocation(list, 0, num-1, &begin, &end);
    printf("%d %d %d\n", MaxSum, list[begin], list[end]);
     
    return 0;
}
 
// 在线处理，返回最大和子列的首尾
int MaxSubseqSumWithLocation(int List[], int left, int right, int *pbegin, int *pend) {
    int ThisSum, MaxSum;
    int i;
    int rebegin;
    ThisSum = 0;
    MaxSum = -1;
    *pbegin = rebegin = left;
    *pend = right;
    for(i=left; i<=right; i++)
    {
        ThisSum += List[i];
        if(ThisSum > MaxSum)
        {
            *pbegin = rebegin;
            *pend = i;
            MaxSum = ThisSum;
        }
        else if (ThisSum < 0)
        {
            rebegin = i + 1;
            ThisSum = 0;
        }
    }
    if(MaxSum < 0)
    {
        MaxSum = 0;
    }
    return MaxSum;
}