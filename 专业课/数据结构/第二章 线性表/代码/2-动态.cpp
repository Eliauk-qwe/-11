#include <cstdlib>
#include <iostream>


#define INITSIZE 10

//顺序表的定义
typedef struct  {
    int *data;
    int MAXSIZE;
    int len;
}Sqlist;


//1.初始化顺序表
//每一个位置=0,len=0
void InitList(Sqlist &L){
    L.data=(int*)malloc(sizeof(int)*INITSIZE);
    L.len=0;
    L.MAXSIZE=INITSIZE;
}

//增加动态数组的长度
void IncreaseSize(Sqlist &L,int len){
    L.data=(int*)malloc(sizeof(int)*(L.MAXSIZE+len));
    int *p=L.data;
    for(int i=0;i<L.len;i++){
        L.data[i]=p[i];
    }
    L.MAXSIZE=L.MAXSIZE+len;
    free(p);
    
}



int main(){
    Sqlist L;
    
    
    //初始化顺序表
    InitList(L);





    return 0;
}





































