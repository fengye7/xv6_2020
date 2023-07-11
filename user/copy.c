// copy.c: 将控制台输入的内容输出到控制台，用于熟悉操作

#include "./kernel/types.h"
#include "./user/user.h"

int main(){
    char buf[64];

    while(1){
        //从console读取输入，通过system call的read函数实现
        int n = read(0,buf,sizeof(buf));
        //无输入或字符串为quit就结束程序
        if(n <=0 || buf[0] == 'q'){
            break;
        }
        //将console的输入输出到控制台，通过system call的write函数实现
        write(1,buf,n);
    }

    // exit退出程序
    exit(0);
}