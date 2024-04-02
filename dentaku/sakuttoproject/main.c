#include <stdio.h>
#include <stdlib.h>

int main()
{int num1,num2,sisoku;
 scanf("%d",&num1);
 scanf("%d",&num2);
 scanf("%d",&sisoku);
 if(sisoku==1){
    printf("%d+%d=%d",num1,num2,num1+num2);
 }
 if(sisoku==2){
    printf("%d-%d=%d",num1,num2,num1-num2);
 }
 if(sisoku==3){
    printf("%d*%d=%d",num1,num2,num1*num2);
     }
 if(sisoku==4){
    printf("%d/%d=%d\n",num1,num2,num1/num2);
    printf("%d",num1%num2);
 }
    return 0;
}
