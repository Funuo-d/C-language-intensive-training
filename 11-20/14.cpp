#include <stdio.h>

void binary_search(int key, int data[], int len)
{
    int left = 0, right = len - 1, middle, content = 0;
    while (left < right)
    {
        content++;
        middle = (right + left) / 2;
        if (key > data[middle])
        {
            left = middle;
        }
        else if (key < data[middle])
        {
            right = middle;
        }
        else if (key == data[middle])
        {
            printf("\n查找成功！一共查找了%d次，排在数组的第%d位\n", content, middle + 1);
            return;
        }
    }
    printf("\n查找失败！\n");
}

int main()
{
    int data[10] = {11, 13, 18, 28, 39, 56, 69, 89, 98, 122};
    // for (int i = 0; i < 10; i++)                        //输入值进行排序
    // {
    //     scanf("%d", &data[i]);
    // }
    binary_search(28, data, 10);
    return 0;
}