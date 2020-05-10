//c语言各数据类型及其格式化输出
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a=100,rw;
    float b=2.1234;
    printf("10进制=%d,8进制=%o,16进制=%x\n",a,a,a);//输出8、10、16进制
    printf("10进制=%d,8进制=%#o,16进制=%#x\n",a,a,a);//以8、10、16进制打印

    printf("%.f\n",b);
    printf("%.0f\n",b);
    printf("%.1f\n",b);
    printf("%.2f\n",b);

    rw = printf("% .2f\n",b);
    printf("=%d\n",rw);
    getchar();
    return 0;
}
