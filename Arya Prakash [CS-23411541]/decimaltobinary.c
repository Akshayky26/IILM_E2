#include<stdio.h>
int main()
{
int dec[10],n,i;
printf("enter the number to convert");
scanf("%d",&n);
for(i=0;n>0;i++){
    dec[i]=n%8;
    
    n=n/8;
}
printf("binary of given number is =");
for(i=i-1;i>=0;i--){
    scanf("%d",dec[i]);
}

return 0;
} 