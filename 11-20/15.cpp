#include <stdio.h>

struct index //定义一个结构体，记录了数据块的起始值、结束值、最大值
{
    int key;
    int start;
    int end;
} index_table[3];

int block_search(int key, int a[])
{
    int i = 0, j;
    while (i < 3 && key > index_table[i].key) //寻找需要找的值在那个块当中
    {
        i++;
    }
    if (i >= 3)
    {
        return 0;
    }
    j = index_table[i].start;
    while (j <= index_table[i].end && a[j] != key) //在范围块当中寻找有没有目标值
    {
        j++;
    }
    if (j > index_table[i].end)
    {
        j = 0;
    }
    return j;
}

int main()
{
    int i, j = 0, k, key;
    int data[15] = {11, 12, 18, 28, 39, 56, 69, 89, 96, 122, 135, 146, 156, 256, 298};
    // for (int i = 0; i < 15; i++)                        //输入值进行排序
    // {
    //     scanf("%d", &data[i]);
    // }
    for (i = 0; i < 3; i++) //将程序分块，每一组的最大值都要小于后一组最小值
    {
        index_table[i].start = j;
        j += 5;
        index_table[i].end = j - 1;
        index_table[i].key = data[j - 1];
    }

    key = 39;
    k = block_search(key, data);

    if (k != 0)
    {
        printf("查找成功！其位置是：%d\n", k + 1);
    }
    else
    {
        printf("查找失败！\n");
    }

    return 0;
}