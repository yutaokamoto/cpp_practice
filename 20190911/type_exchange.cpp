#include <stdio.h>

int main()
{
    /*整数同士の計算の実行結果は整数になってしまう*/
    printf("%d\n", 3/2);

    /*実数同士の計算の実行結果は実数になる*/
    /*従って、実行結果を実数表記にしたいときは注意*/
    printf("%f\n", 3.0/2.0);
    printf("%f\n", 3.0/2);
    printf("%f\n", 3/2.0);

    /*整数どうしの計算は、(演算の中で使われた型のうち)一番範囲の大きい型に変換される*/
    char c=10;
    short s=500;
    int i=c+s;
    printf("%d\n", i);
    printf("%d\n", c+s);/*short型になってるってこと？*/

    /*型の上限(下限)を超えた数を代入すると、溢れたビットは無視される(オーバーフロー)*/
    char a=128;
    printf("%d\n", a);
    a=-129;
    printf("%d\n", a);

    /*符号のない型に符号付きの値を代入すると、符号ビットは読み取られない*/
    unsigned char b=-1;
    printf("%d\n", b);

    /*キャスト演算子 : 型名を()でくくったものを、値や変数の前に置くとその型名に変換できる*/
    printf("%f\n", 3/(float)2);

    /*整数を実数表記することはできない, また実数を整数表記することはできない*/
    /*printf("%f\n", 3/2); -> 0.000000*/
    /*printf("%d\n", 3.0/2.0); -> 73896*/
}