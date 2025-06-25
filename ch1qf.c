/*Q:(f) Paper of size A0 has dimensions 1189 mm x 841 mm. Each subsequent size A(n) is defined as A(n-1) cut in half parallel to its shorter sides.
Thus paper of size A1 would have dimensions 841 mm x 594 mm. Write a program to calculate and print paper sizes A0, A1, A2, … A8.*/
#include <stdio.h>
int main()
{
    double a[9][2]={{1189,841}};
    int i,j;
    for(i=1;i<=8;i++)
    {
        for(j=0;j<=0;j++)
        {
            if(a[i-1][j]>a[i-1][j+1])
            {
                a[i][j+1]=a[i-1][j]/2;
                a[i][j]=a[i-1][j+1];
            }
            else
            {
                a[i][j+1]=a[i-1][j+1]/2;
                a[i][j]=a[i-1][j];

            }
        }
    }
    for(i=0;i<=8;i++)
    {
        for(j=0;j<=1;j++)
        {
            printf("%lf\t",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
