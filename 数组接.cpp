#include<stdio.h>
#include<string.h>
int main (){
    char arr1[100];
    char arr2[100];
    scanf("%s",arr1);
    scanf("%s",arr2);
    // 获取实际字符串长度
    int len1 = strlen(arr1); 
    int len2 = strlen(arr2);
    char arr[200]; 
    int k = 0;
    // 拼接 arr1
    for(int i = 0; i < len1; i++){
        arr[k++] = arr1[i];
    }
    // 拼接 arr2
    for(int j = 0; j < len2; j++){
        arr[k++] = arr2[j];
    }
    arr[k] = '\0'; 
    // 输出结果
    for(int j = 0; j < k; j++){
        printf("%c", arr[j]);
    }
    return 0;
}
 
