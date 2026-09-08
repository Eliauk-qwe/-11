#include <iostream>


#define MAXSIZE 10

//顺序表的定义
typedef struct {
    int data[MAXSIZE];
    int len;
}Sqlist;



//1.初始化顺序表
//每一个位置=0,len=0
void InitList(Sqlist &L){
    //不初始化为0,内存会有脏数据
    for(int i=0;i<MAXSIZE;i++){
        L.data[i]=0;
    }
    L.len=0;
}

//2.插入 --在第i位置插入e
bool InsretList(Sqlist &L,int i,int e){
    if(i<1 || i>L.len)  return false;
    if(L.len >=MAXSIZE)  return false;
    for(int j=L.len;j>=i;j++){
        L.data[j]=L.data[j-1];
    }
    L.data[i-1]=e;
    L.len++;
    return true;

}

//3.删除，带值返回
bool DeleteList(Sqlist &L,int i,int &e){
    if(i<1||i>L.len) return false;
    e=L.data[i-1];
    for(int j=i;j<L.len;j++){
        L.data[j-1]=L.data[j];
    }
    L.len--;
    return true;
}

int FindByPos(Sqlist &L,int i){
    return L.data[i-1];
}

int FindByValue(Sqlist &L,int e){
    for(int i=0;i<L.len;i++){
        if(L.data[i]==e){
            return i+1;
        }
    }
    return -1;
}



int main(){
    Sqlist L;
    
    

    //1.初始化顺序表
    InitList(L);

    //2.插入
    InsretList(L, 2, 3);

    //3.删除
    int e=-1;
    DeleteList(L, 2,e);

    //4.1 按位查找
    int a=FindByPos(L, 1);

    //4.2 按值查找
    




    return 0;
}





































