#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, z, result, max; // 宣告變數

    // 提示用戶輸入第一個整數並存儲在 'x' 中
    printf("\nInput the first integer: ");
    if (scanf("%d", &x) != 1) { // 檢查 scanf 的返回值
        printf("Error: Please enter a valid integer.\n");
        return 1; // 返回1表示出錯
    }

    // 提示用戶輸入第二個整數並存儲在 'y' 中
    printf("\nInput the second integer: ");
    if (scanf("%d", &y) != 1) { // 檢查 scanf 的返回值
        printf("Error: Please enter a valid integer.\n");
        return 1; // 返回1表示出錯
    }

    // 提示用戶輸入第三個整數並存儲在 'z' 中
    printf("\nInput the third integer: ");
    if (scanf("%d", &z) != 1) { // 檢查 scanf 的返回值
        printf("Error: Please enter a valid integer.\n");
        return 1; // 返回1表示出錯
    }

    // 計算結果
    result = (x + y + abs(x - y)) / 2;

    // 計算最大值
    max = (result + z + abs(result - z)) / 2;

    // 輸出最大值
    printf("\nMaximum value of three integers: %d\n", max);

    return 0; // 返回0表示程式正常結束
}