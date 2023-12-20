#include <stdio.h>

int main() 
{
    double wi1, ci1, wi2, ci2, result; // 宣告變數表示重量和數量

    // 提示使用者輸入 item 1 的重量和數量
    printf("Weight - Item1: ");
    if (scanf("%lf", &wi1) != 1) {
        printf("Error: Please enter a valid number.\n");
        return 1;
    }

    printf("No. of item1: ");
    if (scanf("%lf", &ci1) != 1) {
        printf("Error: Please enter a valid number.\n");
        return 1;
    }

    // 提示使用者輸入 item 2 的重量和數量
    printf("Weight - Item2: ");
    if (scanf("%lf", &wi2) != 1) {
        printf("Error: Please enter a valid number.\n");
        return 1;
    }

    printf("No. of item2: ");
    if (scanf("%lf", &ci2) != 1) {
        printf("Error: Please enter a valid number.\n");
        return 1;
    }

    // 計算平均值
    result = ((wi1 * ci1) + (wi2 * ci2)) / (ci1 + ci2);

    // 輸出平均值
    printf("Average Value = %f\n", result);

    return 0;
}
