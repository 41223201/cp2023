#include <stdio.h>

int checkOddEven(int n1)
{   
    return (n1 & 1);
}

int main()
{
    int n1;
    int scanfResult; // 儲存 scanf 函式的返回值

    printf("\n\n 函式：檢查數字是奇數還是偶數：\n");
    printf("------------------------------------------------\n");

    printf("輸入任意數字：");
    scanfResult = scanf("%d", &n1); // 儲存 scanf 函式的返回值

    if (scanfResult != 1) {
        printf("無效的輸入。\n");
        return 1; // 適當的錯誤處理
    }

    if(checkOddEven(n1))
    {
        printf("輸入的數字是奇數。\n\n");
    }
    else
    {
        printf("輸入的數字是偶數。\n\n");
    }
    return 0;
}
