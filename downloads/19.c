#include<stdio.h>

long toBin(int);

int main()
{
    long bno;
    int dno;
    int scanfResult; // 儲存 scanf 函式的返回值

    printf("\n\n 函式 : 十進制轉二進制 :\n");
    printf("-------------------------------------------\n");
    printf(" 輸入任意十進制數字 : ");

    scanfResult = scanf("%d", &dno); // 儲存 scanf 函式的返回值

    if (scanfResult != 1) {
        printf("輸入錯誤或無效的數字。\n");
        return 1; // 適當的錯誤處理
    }

    bno = toBin(dno);
    printf("\n 二進制值為 : %ld\n\n", bno);

    return 0;
}

long toBin(int dno)
{
    long bno = 0, remainder, f = 1;
    while(dno != 0)
    {
        remainder = dno % 2;
        bno = bno + remainder * f;
        f = f * 10;
        dno = dno / 2;
    }
    return bno;
}
