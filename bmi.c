#include <stdio.h>
int main(void)
{
    double a,b,bmi;
    
    while(1){
    printf("�g������͂��Ă������� \n");
    scanf("%lf", &a);
    
    printf("�̏d����͂��Ă������� \n");
    scanf("%lf", &b);
     
    if(a>3){
            a/=100;
    }
    
    bmi=b/(a*a);
    
    printf("BMI��%4.2f�ł�\n", bmi);
    
    }
    return 0; 
}
