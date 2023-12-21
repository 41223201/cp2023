#include <stdio.h>

int PrimeOrNot(int);

int main() {
    int n1, prime;
    int scanfResult; // 儲存 scanf 函式的返回值

    printf("\n\n 函式 : 檢查一個數字是否為質數 :\n");
    printf("---------------------------------------------------------------\n");

    printf(" 輸入一個正數 : ");
    scanfResult = scanf("%d", &n1); // 儲存 scanf 函式的返回值

    // 檢查 scanf 的返回值以確保成功讀取一個整數
    if (scanfResult != 1) {
        printf("輸入無效。\n");
        return 1; // 適當的錯誤處理
    }

    prime = PrimeOrNot(n1);

    if (prime == 1)
        printf(" 數字 %d 是質數。\n", n1);
    else
        printf(" 數字 %d 不是質數。\n", n1);

    return 0;
}

int PrimeOrNot(int n1) {
    int i = 2;
    while (i <= n1 / 2) {
        if (n1 % i == 0)
            return 0; // 若能被除了1和自身以外的數整除，則不是質數
        else
            i++;
    }
    return 1; // 若無法被其他數整除，則是質數
}
