#include <stdio.h>

int main() 
{
    int arr[5];
    int i;
    printf("请输入五个整数:\n");
    for (i = 0; i < 5; i++) 
    {
        scanf("%d", &arr[i]);      
    }
    printf("\n");
    for (i = 4; i >= 0; i--)
    {     
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
