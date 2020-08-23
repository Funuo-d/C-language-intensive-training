#include <stdio.h>

void quitSort(int data[], int start, int end)
{
    int i, j;
    i = start;
    j = end;
    int box = data[start];
    while (i < j)
    {
        while (i < j && box <= data[j])
        {
            j--;
        }
        if (i < j)
        {
            data[i] = data[j];
            i++;
        }
        while (i < j && data[i] <= box)
        {
            i++;
        }
        if (i < j)
        {
            data[j] = data[i];
            j--;
        }
    }
    data[i] = box;
    if (start < i)
    {
        quitSort(data, start, i - 1);
    }
    if (i < end)
    {
        quitSort(data, i + 1, end);
    }
}

int main()
{
    int data[10] = {27, 37, 19, 43, 48, 9, 83, 142, 77, 68};
    // for (int i = 0; i < 10; i++)                        //输入值进行排序
    // {
    //     scanf("%d", &data[i]);
    // }
    quitSort(data, 0, 9); //因为数组起始位置是0，十个数，最后一位的标号为9
    for (int i = 0; i < 10; i++)
    {
        printf("%5d", data[i]);
    }
    return 0;
}