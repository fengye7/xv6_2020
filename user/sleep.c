// 实现sleep停止时钟周期的功能

#include "kernel/types.h"
#include "user/user.h"

int main(int argn, char *argv[]){
	if(argn != 2){
		fprintf(2, "must 1 argument for sleep\n");
		exit(1);
	}
	int sleepNum = atoi(argv[1]); // 将字符串转为整数
    if(sleepNum == 0 && *argv[1] != '0'){
        fprintf(2, "1 argument for sleep must be a num\n");
		exit(1);
    }
	printf("(nothing happens for a little while)\n");
	sleep(sleepNum);
	exit(0);
}
