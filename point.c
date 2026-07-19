#include<stdio.h>
#include<string.h>

int main()
{
    printf("请输入字符串\n");
    char arr[100];
    scanf("%s",arr);
    int len=0;
    char * p = arr;
    while(*p != '\0')
    {
        len++;
        p++;
    }
    char *left = arr;
    char *right = arr + len - 1;
    char temp;
    while(left < right)
    {
        temp = *left;
        *left = *right;
        *right = temp;
        left++;
        right--;
    }
    printf("逆序后\n%s", arr);
    return 0;
}