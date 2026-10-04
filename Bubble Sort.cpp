#include <iostream>
using namespace std;

int main() {
    // 1. 定义题目要求的数组
    int a[] = { 8, 3, 6, 2, 7, 1 };
    int n = 6; // 数组长度

    // 2. 冒泡排序核心逻辑（双重循环）
    for (int i = 0; i < n - 1; i++) {          // 外层：控制轮数
        for (int j = 0; j < n - 1 - i; j++) {  // 内层：两两比较
            if (a[j] > a[j + 1]) {             // 如果前一个比后一个大
                swap(a[j], a[j + 1]);          // 交换它们 (C++自带交换函数，更简洁)
            }
        }
    }

    // 3. 输出结果
    for (int i = 0; i < n; i++) cout << a[i] << " ";

    return 0;
}