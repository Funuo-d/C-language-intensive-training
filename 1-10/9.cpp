#include <stdio.h>

void hashSort(int data[], int i)
{
    int dif, m, n, box;
    dif = i / 2;
    while (dif > 0)
    {
        for (m = 0; m < i - dif; m++)
        {
            n = dif + m;
            box = data[n];
            while ((box < data[n - dif]) && (n - dif >= 0))
            {
                data[n] = data[n - dif];
                n = n - dif;
            }
            data[n] = box;
        }
        dif = dif / 2;
    }
}

int main()
{
    int data[10] = {69, 56, 12, 136, 3, 55, 46, 99, 88, 25};
    // for (int i = 0; i < 10; i++)                        //输入值进行排序
    // {
    //     scanf("%d", &data[i]);
    // }
    hashSort(data, 10);
    for (int i = 0; i < 10; i++)
    {
        printf("%5d", data[i]);
    }
}