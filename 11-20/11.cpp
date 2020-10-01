#include <stdio.h>

void quitSort(int data[], int start, int end)
{
    int i, j;
    i = start;
    j = end;
    int box = data[start]; //取第一个值为基准值
    while (i < j)
    {
        while (i < j && box <= data[j]) //从数组右边开始寻找一个比基准值小的数，找到则退出while循环
        {
            j--;
        }
        if (i < j) //找到比基准值小的数过后将这个数放在基准值的位置上，此时的基准值只在box中
        {
            data[i] = data[j];
            i++;
        }
        while (i < j && data[i] <= box) //从基准值位置后面开始寻找一个比基准值大的数，找到则退出while循环
        {
            i++;
        }
        if (i < j) //找到过后，将该数放在刚才找到的比基准值小的数的位置上
        {
            data[j] = data[i];
            j--;
        }
    }

    //此时的i=j，i和j代表的位置就是基准值的位置，左边都比基准值小，右边都比基准值大
    data[i] = box; 

    if (start < i)//现在基准值的位置已经固定，将本次的数组分为了两个部分
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