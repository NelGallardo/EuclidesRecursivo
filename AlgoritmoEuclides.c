#include <stdio.h>
#include <stdlib.h>

int Euclides(int, int);

int main(){
    int a,b;
    printf("\n\tIntroduce el dividendo: ");
        scanf("%d",&a);
    printf("\tIntroduce el divisor: ");
        scanf("%d",&b);
    if(a>b){
        printf("\n\tEl m%cximo com%cn divisor es %d\n\n",160,163,Euclides(abs(a),abs(b)));
    }
    else{
        printf("\n\tEl m%cximo com%cn divisor es %d\n\n",160,163,Euclides(abs(b),abs(a)));    
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
