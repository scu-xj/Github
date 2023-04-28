#ifndef _MEMSWAP_H
#define _MEMSWAP_H
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <conio.h>
#define P 3 //进程分配的物理页块数
#define RS_MAX_SIZE 50 //引用串最大长度
int rs[RS_MAX_SIZE]; //引用串数组
int rs_size; //引用串实际长度
int pf[P]; //物理页框
int call_loc[P]; //缺页发生后，存储计算淘汰物理块号
int swap_loc; //换出物理块号
//页面置换
void Swap(int which);
//最佳置换算法，返回最佳置换淘汰物理页块号
int OPT(int begin);
//创建页面号引用串
void CreateRS();
//显示进程装在物理页框中的页面号
void printPF(int n);
//进程物理块中是否包含逻辑页，包含不置换，否则块满，置换
int Contains(int rs_p); //rs_p: 虚存上的逻辑页号
//标记清理
void cleanFlag();
#endif
