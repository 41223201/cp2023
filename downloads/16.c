#include<stdio.h>

void swap(int *, int *);

int main() {
    int n1, n2;
    int scanfResult1, scanfResult2; // 儲存 scanf 函式的返回值

    printf("\n\n 函式 : 使用函式交換兩個數字 :\n");
    printf("------------------------------------------------\n");

    printf("輸入第一個數字 : ");
    scanfResult1 = scanf("%d", &n1); // 儲存 scanf 函式的返回值

    printf("輸入第二個數字 : ");
    scanfResult2 = scanf("%d", &n2); // 儲存 scanf 函式的返回值

    // 檢查 scanf 的返回值
    if (scanfResult1 != 1 || scanfResult2 != 1) {
        printf("錯誤的輸入。\n");
        return 1; // 適當的錯誤處理
    }

    printf("交換前 : n1 = %d, n2 = %d ", n1, n2);
    swap(&n1, &n2);
    printf("\n交換後 : n1 = %d, n2 = %d \n\n", n1, n2);

    return 0;
}

void swap(int *p, int *q) {
    int tmp;
    tmp = *p;
    *p = *q;
    *q = tmp;
}
