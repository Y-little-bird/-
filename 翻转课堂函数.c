#define _CRT_SECURE_NO_WARNINGS 1

#include "翻转课堂.h"

#include <stdio.h>

void insertion_Sort(int arr[], int n)
{
    int i, j, key;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        // 将比key大的元素向后移动
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }

        // 将key插入到合适的位置
        arr[j + 1] = key;
    }
}


