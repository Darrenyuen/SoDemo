#include<stdio.h>
#include<stdlib.h>
 
int wust_test(int value);
 
int main(){
    wust_test(33);
    return 0;
}

//SO动态链接库文件的编译和使用https://blog.csdn.net/qq_41885673/article/details/118084792

// gcc main.c -o main -L. -ltest
// -L 指定依赖库文件所在的目录
// -l 指定依赖库 libtest.so --> -ltest

// so没有编译到源文件中，只是指定了库文件的路径，所以，编译之后源文件的执行还是依赖于so库文件。
// 静态链接库和动态链接库的区别在于，主程序在运行前，静态链接库的链接固定写入在程序中，而动态链接库则是在每次程序运行再加载链接。
// so库不会被编译成可执行将 
// 所以，还需要把so文件放进so加载目录才能成功运行可执行文件
