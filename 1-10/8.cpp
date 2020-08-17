#include <stdio.h>

void inSort(int data[], int i) //插入排序
{
    int box = 0, j, k;
    for (j = 1; j < i; j++)
    {
        box = data[j];
        for (k = j; k > 0; k--)
        {
            if (box < data[k - 1])
            {
                data[k] = data[k - 1];
            }
            else
            {
                break;
            }
        }
        data[k] = box;
    }
}

int main()
{
    int data[10] = {25, 12, 36, 45, 2, 9, 39, 22, 98, 37}; //为了调试方便，给数组直接赋值
    // for (int i = 0; i < 10; i++)                        //输入值进行排序
    // {
    //     scanf("%d", &data[i]);
    // }
    inSort(data, 10);
    for (int i = 0; i < 10; i++)
    {
        printf("%5d", data[i]);
    }
    return 0;
}