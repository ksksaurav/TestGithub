#include<stdio.h>
void push( int **,long long int i, long long int j,long long int pairs );
int main()
{

    long long int n,pairs;
    scanf("%lld",&n);
    scanf("%lld",&pairs);
    long long int a[n],e[pairs][2];
    int i,j;
    for(i=0;i<n;i++)
    {

        scanf("%lld",&a[i]);
    }
    printf("\n");
    for(i=0;i<pairs;i++)
        for(j=0;j<2;j++)
    {

        scanf("%lld",&e[i][j]);
        if(j==1)
            printf("\n");
    }
   int t[pairs][pairs];
    for(i=0;i<pairs;i++)
    {

        for(j=0;j<pairs;j++)
        {

            t[i][j] = 0;

        }
    }

    for(i=0;i<pairs;i++)
    {

        for(j=0;j<1;j++)
        {
            if(e[i][j]!=e[i][j+1])
            {
                long long int a,b;
                a = e[i][j];
                b = e[i][j+1];
                push(t,a,b,pairs);
                printf("helo");
            }
        }
    }
    for(i=0;i<pairs;i++)
    {

        for(j=0;j<pairs;j++)
        {

            printf("%d",t[i][j]);
            if(j==pairs-1)
                printf("\n");
        }
    }


}

void push(int **t ,long long int i, long long int j , long long int pairs)
{


printf("%lld%lld",i,j);
            t[i][j] = 1;
            t[j][i] = 1;



}
