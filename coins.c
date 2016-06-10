#include<stdio.h>
#include<math.h>
int chef( long long int );
int misha(long long int );
int main()
{

   long long  int n;
   int  flag,t;

    scanf("%d\n",&t);
    while(t--)
    {

        scanf("%lld\n",&n);
        int ch;
        ch = 1;
        while(n>0)
        {

            switch(ch)
            {

                case 1: n =chef(n);
                            ch = 2;
                            flag = 1;
                            break;
                case 2 : n = misha(n);
                            ch = 1;
                            flag=2;
                            break;
            }


        }

    switch(flag)
    {

        case 1 : printf("Chef\n");
                break;
        case 2 : printf("Misha\n");
                break;
    }

    }

    return 0;
}

int chef( long long int n)
{
int i;
for(i=1;i<=n;i++)
{

    int t;
    t = pow(n,i);
    if(n%t == 0)
        n  = 0;
    else
        n= n- 1;
}

return n;

}

int misha(long long int n)

{
int i;
for(i=1;i<=n;i++)
{
    int t;
    t = pow(n,i);
    if(n%t == 0)
        n  = 0;
    else
        n= n- 1;
}
return n;
}

