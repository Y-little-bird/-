#define _CRT_SECURE_NO_WARNINGS 1

#include "��ת����.h"

#include <stdio.h>

void insertion_Sort(int arr[], int n)
{
    int i, j, key;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        // ����key���Ԫ������ƶ�
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }

        // ��key���뵽���ʵ�λ��
        arr[j + 1] = key;
    }
}


