#include<stdio.h>
void bubbleSort(int data[],int i)
{
    int j, k, box;
    for ( j = 0; j <  i-1; j++)  
    {
        for (k = 0; k < i-j-1; k++)
        {
            if (data[k]>data[k+1])
            {
                box = data[k];
                data[k] = data[k + 1];
                data[k + 1] = box;
            }
        }
    }
}

int main()
{
    int data[10] = {27, 37, 19, 43, 47, 33, 83, 142, 77, 68};
    // for (int i = 0; i < 10; i++)                        //输入值进行排序
    // {
    //     scanf("%d", &data[i]);
    // }

    bubbleSort(data, 10);
    for (int i = 0; i < 10; i++)
    {
        printf("%5d", data[i]);
    }
    return 0;
}