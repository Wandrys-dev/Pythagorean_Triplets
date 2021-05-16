#include<stdio.h>
#include<math.h>
#include<time.h>
void triplets(int a,int b,int c)
{
printf("Triplet Found - (%d,%d,%d) ",a,b,c);
printf("\n");
} 


int main()
{
int i,j,k,flag=0;
int n;
printf("Enter the limit : ");
scanf("%d",&n);
printf("\n");
clock_t begin ,end;
double time_spent;
begin = clock();
for( i=1;i<=n;i++)
 {
   for(j=1;j<=n;j++)
   {
     for(k=1;k<=n;k++)
      {

        if( pow(i,2)+pow(j,2)  ==  pow(k,2))
          {
            triplets(i,j,k);
            flag=flag+1;
            }
         }
}

}
end=clock();
time_spent = ((double)(end-begin))/(CLOCKS_PER_SEC) ;
printf("\nTotal Triplets - %d found in limit %d ",flag,n);
printf("\nTotal Execution Time - %lf ", time_spent);
return 0;
}
            
