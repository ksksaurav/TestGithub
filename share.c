    #include<stdio.h>
    #include<math.h>
    struct stock
    {
        long long int item;

        long long int pos;

    };

    void maxheapify(struct stock a[], long long int i,long long int size);
    void buildheap(struct stock a[],long long int size);
    long long int right(long long int i);
    long long int left(long long int i);
    void buildheap(struct stock a[],long long int size);
    void updatekey(struct stock a[],long long int i,long long int size);
    long long int main()
    {

        long long int t,x,temp;
        long long int i;
        scanf("%lld%lld",&t,&x);
        struct stock a[t+1];
        for(i=1;i<=t;i++)
        {

            scanf("%lld",&(a[i].item));

        }
        printf("\n");
        for(i=1;i<=t;i++)
        {

            a[i].pos = i-1;

           }
         buildheap(a,t+1);
        for(i=1;i<=t;i++)
        {

       // prlong long intf("%d",a[i].item);
        }
        while(x>0)
        {

        if(a[1].item>x)
        {
            temp =a[1].item;
            a[1].item = a[t].item;
            a[t].item = temp;
            t = (t+1) - 1;
            maxheapify(a,1,t);
            x=x - a[1].item;
            //printf("%lld\n",a[1].item);
            printf("%lld",a[1].pos);
            updatekey(a,1,t);
        }
        else{
                x=x - a[1].item;
               // printf("%lld\n",a[1].item);
                printf("%lld",a[1].pos);
                updatekey(a,1,t+1);
        }




        }


    return 0;

    }

    void buildheap(struct stock a[],long long int size)
    {
        long long int i ;
        for(i=(size)/2;i>=1;i--)
        {

            maxheapify(a,i,size);

        }

    }



    long long int  left(long long int i)
    {
        return 2*i;
    }

     long long int right(long long int i)
     {

         return 2*i+1;

     }


    void maxheapify(struct stock a[], long long int i,long long int size)
    {

        long long int l,r,temp;
        long long int largest;
        l = left(i);
        r = right(i);
        //prlong long intf("%d",r);
    if((l < size) &&((a[l].item)>a[i].item))
    {
        largest = l;
        a[i].pos = l-1;


    }
    else{
        largest =i;
        a[i].pos = i-1;
    }
    if((r<size)&&((a[r].item) > a[largest].item))
    {

        largest =r;
        a[i].pos = r-1;
    }
    if(largest!=i)
    {
        temp = a[largest].item;
        a[largest].item =a[i].item;
        a[i].item = temp;
        a[largest].pos = largest-1;
        maxheapify(a,largest,size);

    }


    }

    void updatekey(struct stock a[],long long int i,long long int size)
    {

        (a[i].item) = (a[i].item) -ceil(a[i].item/10);
        maxheapify(a,i,size);
    }
