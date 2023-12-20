#include <stdio.h>

int main() 
{
    int x;    // 用來儲存總行駛公里數
    float y;  // 用來儲存總耗油量

    // 提示用戶輸入總行駛公里數並存儲在 'x' 中
    printf("Input total distance in km: ");
    if (scanf("%d", &x) != 1) { // 檢查 scanf 的返回值
        printf("Error: Please enter a valid integer.\n");
        return 1; // 返回1表示出錯
    }

    // 提示用戶輸入總耗油量並存儲在 'y' 中
    printf("Input total fuel spent in liters: ");
    if (scanf("%f", &y) != 1) { // 檢查 scanf 的返回值
        printf("Error: Please enter a valid float number.\n");
        return 1; // 返回1表示出錯
    }

    // 檢查總耗油量是否為0，以避免除以0的情況
    if (y == 0) {
        printf("Error: Total fuel spent cannot be zero.\n");
        return 1; // 返回1表示出錯
    }

    // 計算並輸出平均油耗
    printf("Average consumption (km/lt): %.3f\n", x / y);

    return 0; // 返回0表示程式正常結束
}
