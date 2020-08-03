#include<stdio.h>
int main()
{
   int i,h,k=0,p[100]={0},a[200]={0};
   for(i=1;i<200;i++)
     a[i]=i+1;
   for(i=0;i<200;i++)
     if(a[i]!=0)
       {
         p[k]=a[i];
         for(h=i;h<200;h++)
           if(a[h]%p[k]==0)
            a[h]=0;
         k++;
       }
   i=0;
   printf("primes:");
   while(p[i]!=0)
   {
    printf("%5d",p[i]);
    i++;
   }
}//200内的素数；

