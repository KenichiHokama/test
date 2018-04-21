#include <stdio.h>
int main(void)
{
    double a,b,bmi;
    
    while(1){
    printf("g’·‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢ \n");
    scanf("%lf", &a);
    
    printf("‘Ìd‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢ \n");
    scanf("%lf", &b);
     
    if(a>3){
            a/=100;
    }
    
    bmi=b/(a*a);
    
    printf("BMI‚Í%4.2f‚Å‚·\n", bmi);
    
    }
    return 0; 
}
