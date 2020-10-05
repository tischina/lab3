//variant 15;
//Дана целочисленная прямоугольная матрица. Определить номер первого из столбцов, содержащих хотя бы один нулевой элемент.
//Характеристикой строки целочисленной матрицы назовем сумму ее отрицательных четных элементов.
//Переставляя строки заданной матрицы, расположить их в соответствии с убыванием характеристик.

#include <stdio.h>
#include <stdlib.h>

#define N 3
#define R 4

int main(int argc, char const *argv[]) {

int array[N][R] = {
        {-1, -2, 8, -5},
        {-3, 0, -7, -13},
        {4, 6, 8, 14},
    };

    int a = 0; int b = 0; int c=0;

    for (int i = 0; i < R; ++i) {         //номер первого из столбцов, содержащего 0;
        for (int j = 0; j < N; ++j) {
            if(array[j][i] == 0) {
                printf("%d\n", i+1); break;
            }
        }
    }
      for (int i = 0; i < N; ++i){
        for (int j = 0; j < R; ++j) 
        {
            if (i==0 && array[i][j]<0) {a=a+1;}
            if (i==1 && array[i][j]<0) {b=b+1;}
            if (i==2 && array[i][j]<0) {c=c+1;}
            
        } 
      }

      int p1=a, p2=b, p3=c;
        

  if(b > a) a ^= b ^= a ^= b;
  if(c > a) a ^= c ^= a ^= c;  //в порядок убывания по переменным a(большое), b(среднее), c(маленькое);
  if(c > b) b ^= c ^= b ^= c;



        //соответствие отсортированной последовательности и строки массива. вывод строки.
        if (p1==a) { for (int i=0; i<R; i++) { printf("%d ", array[0][i]);}}
        if (p1==b) { for (int i=0; i<R; i++) { printf("%d ", array[1][i]);}}
        if (p1==c) { for (int i=0; i<R; i++) { printf("%d ", array[2][i]);}}
        printf("\n");
        if (p2==a) { for (int i=0; i<R; i++) { printf("%d ", array[0][i]);}}
        if (p2==b) { for (int i=0; i<R; i++) { printf("%d ", array[1][i]);}}
        if (p2==c) { for (int i=0; i<R; i++) { printf("%d ", array[2][i]);}}
        printf("\n");
        if (p3==a) { for (int i=0; i<R; i++) { printf("%d ", array[0][i]);}}
        if (p3==b) { for (int i=0; i<R; i++) { printf("%d ", array[1][i]);}}
        if (p3==c) { for (int i=0; i<R; i++) { printf("%d ", array[2][i]);}}

    return 0;
}
