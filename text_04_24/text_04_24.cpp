#define _CRT_SECURE_NO_WARNINGS 1
//#define N 4
//#define M 4
//#define Sizetwo N
//#define Sizeone (Sizetwo + M)
////#define Max 4
////#include<stdio.h>
int removeElement(int* nums, int numsSize, int val)
{
    int count = numsSize;
    for (int i = 0; i < count; i++)
    {
        if (nums[i] == val)
        {
            for (int j = i + 1; j < count; j++)
            {
                nums[j - 1] = nums[j];
            }
            count--;
            i--;
        }
    }
    for (int k = 0; k < count; k++)
    {
        printf("%d", nums[k]);
    }
    return count;
}
////给你两个按 非递减顺序 排列的整数数组 nums1 和 nums2，另有两个整数 m 和 n ，分别表示 nums1 和 nums2 中的元素数目。
////
////请你 合并 nums2 到 nums1 中，使合并后的数组同样按 非递减顺序 排列。
////
////注意：最终，合并后数组不应由函数返回，而是存储在数组 nums1 中。为了应对这种情况，nums1 的初始长度为 m + n，其中前 m 个元素表示应合并的元素，后 n 个元素为 0 ，应忽略。nums2 的长度为 n 。
////
////来源：力扣（LeetCode）
////链接：https ://leetcode.cn/problems/merge-sorted-array
////著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
//#include<stdio.h>
//#include<string.h>

void merge(int* arr1, int size1, int m, int* arr2, int size2, int n)
{
    //两个数组都是递增的
    //我们要把2放到1中，且保证递增的顺序
    //首先2中的数据要逐个过去
    for (int i = 0; i < n; i++)
    {
        int j = 0;
        while (arr1[j] < arr2[i])///比较，找位置
        {
            j++;
            if (j > m - 1)
            {
                break;
            }
        }
        for (int k = m - 1; k >= j; k--)///挪动
        {
            arr1[k + 1] = arr1[k];
        }
        arr1[j] = arr2[i];///插入
        m++;
    }
    //从1中第一个数据开始走，比较大小，当遇到相等时，或者大于它的数时停止
    //也就是  2【】大于1【】时且下标小于等于m时下标++，
    //如2 在1,2,3,4中停止在下标为2处
    //然后1【】从最后一个元素开始挪动
    //挪动到2停在的1【】的下标，2【】停止的那个也要挪动
    //然后把2【】插进去，再看下一个，此时再找直接从上一个元素进去的位置开始找就完了，节省时间
    //2【】进行的次数一定，所以用for，但每次插入一个1【】元素个数就得++一下
}
int main(void)
{
    //int size1 = 0, size2 = 0;
    //int arr1[Sizeone] = { 1,2,2,3 };
    //int arr2[Sizetwo] = { 5,6,6,7 };
    //size1 = sizeof(arr1);
    //size2 = sizeof(arr2);
    //int m = M;
    //int n = N;
    //merge(arr1, size1, &m, arr2, size2, n);
    //for (int i = 0; i < m; i++)
    //{
    //    printf("%d\n", arr1[i]);
    //}
    return 0;
}