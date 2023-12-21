#include <stdio.h>

double square(double num) {
    return (num * num);
}

int main() {
    int num;
    double n;
    int scanfResult; // 變數用於儲存 scanf 的返回值

    printf("\n\n 函式：計算任意數字的平方值 :\n");
    printf("------------------------------------------------\n");

    printf("輸入任意數字以計算平方值：");
    scanfResult = scanf("%d", &num); // 將 scanf 的返回值儲存在變數中

    if (scanfResult != 1) {
        printf("輸入錯誤或無效的數字。\n");
        return 1; // 適當的錯誤處理
    }

    n = square(num);
    printf("%d 的平方是：%.2f\n", num, n);

    return 0;
}
