#include<stdio.h>
#include<math.h>
#include<time.h>
#include<stdio.h>
/*void triplets(int a,int b,int c)
{
printf("Triplet Found - (%d,%d,%d) ",a,b,c);
printf("\n");
} */
float area(int a , int b)
{ float area_t;
  area_t=(a*b)/2;
  return area_t;
}


int main()
{
int i,j,k,l,flag=0;
int n,m;
float z;
FILE *fp;
fp = fopen("plot3d.txt","w");
printf("Enter the limit : ");
scanf("%d",&m);
printf("\n");
clock_t begin ,end;
double time_spent;
begin = clock();
for(n=1;n<=m;n++)
{
for( i=1;i<=n;i++)
 {
   for(j=1;j<=n;j++)
   {
     for(k=1;k<=n;k++)
      {

        if( pow(i,2)+pow(j,2)  ==  pow(k,2))
          {
            /*triplets(i,j,k);*/
            /*flag=flag+1;*/
            z=area(i,j);
            fprintf(fp,"%d,%d,%f\n",i,j,z);
           
            }
         }
}
}
 /*fprintf(fp,"%d,%d\n",n,flag);
printf("\nTotal Triplets - %d found in limit %d \n",flag,n);
flag=0; */
}
end=clock();
time_spent = ((double)(end-begin))/(CLOCKS_PER_SEC) ;
/*printf("\nTotal Triplets - %d found in limit %d ",flag,n);*/
printf("\nTotal Execution Time - %lf ", time_spent);
return 0;
}
            
