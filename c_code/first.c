#include <stdio.h>
void main(void)
{
    char str[20];  /*定义一个最大长度为19, 末尾是'\0'的字符数组来存储字符串*/
    printf("请输入一个字符串:");
    fgets(str, 7, stdin);  /*从输入流stdin即输入缓冲区中读取7个字符到字符数组str中*/
    printf("%s\n", str);
    

    
    getchar();
        
    
}