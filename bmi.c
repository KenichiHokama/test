#include <stdio.h>
int main(void)
{
    double a,b,bmi;
    
    while(1){
    printf("身長を入力してください \n");
    scanf("%lf", &a);
    
    printf("体重を入力してください \n");
    scanf("%lf", &b);
     
    if(a>3){
            a/=100;
    }
    
    bmi=b/(a*a);
    
    printf("BMIは%4.2fです\n", bmi);
    
    }
    return 0; 
}
