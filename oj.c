#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

#define MAX 300000

int main() {
    // 埃拉托斯特尼筛法生成素数表
    bool isPrime[MAX + 1];
    for (int i = 2; i <= MAX; i++) isPrime[i] = true;
    for (int i = 2; i * i <= MAX; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= MAX; j += i) {
                isPrime[j] = false;
            }
        }
    }

    // 收集[100000,300000]的素数到数组
    int primes[100000];  // 预分配足够大的数组
    int count = 0;
    for (int i = 100000; i <= MAX; i++) {
        if (isPrime[i]) {
            primes[count++] = i;
        }
    }

    // 处理查询
    int n, a, b;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d,%d", &a, &b);
        
        // 二分查找第一个 >=a 的素数位置
        int left = 0, right = count - 1, start = count;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (primes[mid] >= a) {
                start = mid;
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        
        // 二分查找最后一个 <=b 的素数位置
        left = 0, right = count - 1;
        int end = -1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (primes[mid] <= b) {
                end = mid;
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        
        // 计算区间内素数个数
        int result = (start <= end) ? (end - start + 1) : 0;
        printf("%d\n", result);
    }

    return 0;
}