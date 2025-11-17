#include <stdio.h>

// 汉诺塔递归函数：将n个盘子从source移到target，借助auxiliary
void hanoi(int n, char source, char auxiliary, char target) {
    if (n == 1) {
        printf("将盘子1从%c移到%c\n", source, target);
        return;
    }
    // 步骤1：n-1个盘子从source移到auxiliary
    hanoi(n - 1, source, target, auxiliary);
    // 步骤2：第n个盘子从source移到target
    printf("将盘子%d从%c移到%c\n", n, source, target);
    // 步骤3：n-1个盘子从auxiliary移到target
    hanoi(n - 1, auxiliary, source, target);
}

int main() {
    int n;
    printf("请输入汉诺塔的盘子数量：");
    scanf("%d", &n);
    // 调用函数，柱子命名为A、B、C
    hanoi(n, 'A', 'B', 'C');
    return 0;
}
