/*
・課題9‐2：以下の機能を満たすプログラムを作成せよ。
・4個の整数値をキーボードから入力すると、小さい順に並び変えたものを表示する。
・ただし、以下の仕様を満たす関数sortを作成し使用すること。
    ・引数：4個の整数値、4個のポインタ変数
    ・処理：与えられた整数値を並び替えてポインタ変数に値をコピーする。
*/
#include <stdio.h>

void sort(int *n1, int *n2, int *n3, int *n4){
    n1 = (n1<n2)? n1 : n2;
    n2 = (n2<n3)? n2 : n3;
    n3 = (n1<n2)? n3 : n4;
    n1 = (n1<n2)? n1 : n2;
    n2 = (n2<n3)? n2 : n3;
    n1 = (n1<n2)? n1 : n2;
    
}

int main(void){
    int n1, n2, n3, n4;
    printf("整数を４つ入力して下さい\n")
    scanf("%d")
    sort(&n1, &n2, &n3, &n4);
    print("%d<%d<%d<%d",n1,n2,n3,n4);
}