#include<stdio.h>
#include<stdlib.h>
 
int wust_test(int value){
    printf("%d\n",value);
    return 0;
}

//gcc test.c  -fPIC -shared -o libtest.so
 
// gcc 依赖库文件 -fPIC -shared -o libxxx.so
 
// libxxx.so 必须以 lib 开头 .so结尾
 
// -fPIC       作用于编译阶段，告诉编译器产生与位置无关代码(Position-Independent Code)，
//   则产生的代码中，没有绝对地址，全部使用相对地址，故而代码可以被加载器加载到内存的任意
//   位置，都可以正确的执行。这正是共享库所要求的，共享库被加载时，在内存的位置不是固定的。
 
// -shared     目的是使源码编译成动态库 .so 文件