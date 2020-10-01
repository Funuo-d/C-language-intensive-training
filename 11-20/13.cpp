#include <stdio.h>
#include <stdlib.h>

int min(int x, int y)
{
    return x < y ? x : y;
}
void merge_sort(int arr[], int len)
{
    int *a = arr;
    int *b = (int *)malloc(len * sizeof(int)); //创建一个len长度的整数空间，指针b是该内存块的起始指针
    int seg, start;                            //seg变量是每一组的个数，start变量是每一组开头数的位置
    for (seg = 1; seg < len; seg += seg)       //把传入的数组归化到最小单元，通过自增进行归化合并
    {
        for (start = 0; start < len; start += seg + seg)
        {
            int low = start,
                mid = min(start + seg, len),        //mid是第一个归化块结束数的后一个数的位置
                high = min(start + seg + seg, len); //high是第二个归化块结束数的后一个数的位置，用min判断是否超出最大位置
            int k = low;
            int start1 = low, end1 = mid;
            int start2 = mid, end2 = high;
            while (start1 < end1 && start2 < end2)
                b[k++] = a[start1] < a[start2] ? a[start1++] : a[start2++]; //中括号里面的自增运算是先赋值再输出，优先级在赋值运算之后
            while (start1 < end1)
                b[k++] = a[start1++];
            while (start2 < end2)
                b[k++] = a[start2++];
        }
        int *temp = a; //一次执行过后，b为一次归化后的数组指针，a、b两个指针互换进行下一次循环
        a = b;
        b = temp;
    }
    if (a != arr) //判断a是否指向的是原数组，否则就是b指向的是原数组，但是上一步当中直接换了a、b的指向，a是最后排序的值，需要更改原数组的值，再拿到a的指向方便释放内存
    {
        int i;
        for (i = 0; i < len; i++)
            b[i] = a[i];
        b = a;
    }
    free(b); //释放内存块
}

int main()
{
    int data[10] = {695, 458, 362, 789, 12, 15, 163, 23, 986, 2};
    // for (int i = 0; i < 10; i++)                        //输入值进行排序
    // {
    //     scanf("%d", &data[i]);
    // }
    merge_sort(data, 10);
    for (int i = 0; i < 10; i++)
    {
        printf("%5d", data[i]);
    }
    return 0;
}
