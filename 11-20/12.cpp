#include <stdio.h>

void chooseShort(int data[],int i)
{
    int j, k,box;
    for ( j = 0; j < i-1; j++)
    {
        for ( k = j+1; k < i; k++)
        {
            if(data[k]<data[j])
            {
                box = data[k];
                data[k] = data[j];
                data[j] = box;
            }
        }
        
    }
    
}

int main()
{
    int data[10] = {695,458,362,789,12,15,163,23,2,986};
    // for (int i = 0; i < 10; i++)                        //输入值进行排序
    // {
    //     scanf("%d", &data[i]);
    // }
    chooseShort(data, 10);
    for (int i = 0; i < 10; i++)
    {
        printf("%5d", data[i]);
    }
    return 0;
}