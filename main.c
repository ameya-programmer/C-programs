#include <stdio.h>
#include <stdlib.h>
//to check if a matrix is symmetric or not
int main()
{
    int a[300][300],r,i,j,c,flag;
    printf("Enter the number of rows:  ");
    scanf("%d",&r);
    printf("Enter the number of columns: ");
    scanf("%d",&c);
    if(r!=c)
    {
        printf("The input has to be a square matrix ");
        return 0;
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("Enter the %dth row and %dth column: ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    //reading and displyaing the matrix
    flag=1;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(a[i][j]!=a[j][i])
            {
                flag=0;
                break;
            }
        }
        if(flag==0)
        {
            break;
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    if(flag==1)
    {
        printf("The above matrix is a symmetric matrix");
    }
    else
    {
        printf("the above matrix is not a symmetric matrix");
    }
    return 0;
}
