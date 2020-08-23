#include <stdio.h>

void quitSort(int s[], int start, int end)
{
    int i, j;
    i = start;
    j = end;
    int box = s[start];
    while (i < j)
    {
        while (i < j && box <= s[j])
        {
            j--;
        }
        if (i < j)
        {
            s[i] = s[j];
            i++;
        }
        while (i < j && s[i] <= box)
        {
            i++;
        }
        if (i < j)
        {
            s[j] = s[i];
            j--;
        }
    }
    s[i] = box;
    if (start < i)
    {
        quitSort(s, start, i - 1);
    }
    if (i < end)
    {
        quitSort(s, i + 1, end);
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