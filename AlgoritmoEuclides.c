#include <stdio.h>

int Euclides(int, int);

int main(){
    int a,b;
    printf("\n\tIntroduce el dividendo: ");
        scanf("%d",&a);
    printf("\tIntroduce el divisor: ");
        scanf("%d",&b);
    if(b<0){
        b=-b;
    }
    if(a<0){
        a=-a;
    }
    if(b>a){
        int aux;
        aux=a;
        a=b;
        b=aux;
    }
    printf("\n\tEl m%cximo com%cn divisor es %d\n\n",160,163,Euclides(a,b));
    system("pause");
    return 0;
}

int Euclides(int a, int b){
    if(b==0){
        return a;
    }
    else{
        return Euclides(b,a%b);
    }
}
