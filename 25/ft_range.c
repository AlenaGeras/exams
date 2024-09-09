#include<stdlib.h>
int *ft_range(int start,int end)
{
    int *range;
    int size;
    int i;
    if(start<=end)
    {
        size = end - start + 1;
    }
    else
    {
        size = start - end + 1;
    }
    range = (int*) malloc(sizeof(int)*size);
    if(!range)
    return NULL;
    i = 0;
    while(i < size)
    {
        if(start <= end)
        {
            range[i] = start + i;
        }
        else
        {
            range[i] = start - i;
        }
    i++;
    }

return range;
}
// #include<stdio.h>
// int main(void)
// {
//     int start = 5;
//     int end = 10;
//     int *array;
//     int size;
//     int i;

//     array = ft_range(start, end);
//     if (array == NULL)
//     {
//         printf("Memory allocation failed\n");
//         return 1;
//     }

//     size = (start <= end) ? end - start + 1 : start - end + 1;

//     for (i = 0; i < size; i++)
//     {
//         printf("%d ", array[i]);
//     }
//     printf("\n");

//     free(array); // Освобождаем выделенную память
//     return 0;
// }
