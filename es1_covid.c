#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>

int N, contg;
float R , t;
float A[30];
int main(){
printf("inserisci il numero R ");
scanf("%f", &R);
printf("insrisci il numero degli alunni ");
scanf("%d", &N);

A[0]=1;

for(int y=1;y<30;y++){
    A[1]=R*A[y-1];

    if(A[y]>=N){
        printf("per contagiare tutta la classe ci vogliono %d giorni ", y);

    }

}
return 0;
}
