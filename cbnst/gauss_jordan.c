// program for gauss jordan method
#include <stdio.h>

int main()
{
      int n;
    printf("Enter the number of unkonwn:  ");
    scanf("%d",&n);
    
    float mat[n][n+1];
    
    printf("\nEnter the coeffients:\n ");
    for(int i=0;i<n;i++)
      { for(int j=0;j<=n;j++)
           scanf("%f",&mat[i][j]);
          
      }
           
    printf("\nThe input matrix is \n");
    for(int i=0;i<n;i++)
       {for(int j=0;j<=n;j++)
           printf("%f ",mat[i][j]);
           printf("\n");
       }

         // diagoanl
         for(int i=0;i<n;i++)
         {
             for(int j=0;j<=n;j++)
             {
                 if(j!=i)
                 {
                    float t = mat[j][i]/mat[i][i];
                    for(int k=0;k<=n;k++)
                    {
                        mat[j][k] -= t*mat[i][k]; 
                    }
                 }
             }
         }
  printf("\nThe Diogan matrix is \n");
    for(int i=0;i<n;i++)
       {for(int j=0;j<=n;j++)
           printf("%f ",mat[i][j]);
           printf("\n");
       }
       
       printf("The solution is: \n");
       
       for(int i=0;i<n;i++)
       {
           printf("\t x[%d] is : %f\n",i,mat[i][3]/mat[i][i]);
       }
       
    return 0;
