#include<stdio.h>
struct bst
{
    struct bst *parent;
    int item;
    struct bst *left;
    struct bst *right;
    int pos;
};
int k;
k = 0;
int main()
{

    struct bst *root;
    root = NULL;
    int t,n,q,a,b,ele;
    int i;
    scanf("%d",&t);
    while(t--)
    {

        scanf("%d",&n);
        for(i = 0;i<n;i++)
        {

            scanf("%d  ",ele);
           k  = bst(root,ele);

        }
        scanf("%d\n",&q);
        scanf("%d%d\n",&a,&b);
        bst(root);


    }
    k++;
    return k;
}


void bst(struct bst *root,int x)
{
    struct bst *temp,*t;
    temp = (struct bst*)malloc(1*sizeof(bst));
    temp->parent =NULL;
    temp->pos= 1;
    temp->left = NULL;
    temp->right = NULL;
    temp->item = x;
    if(root==NULL)
            root=temp;
    else
    {

        temp= root;
        if((temp->item)<x)
           {

            bst(temp->left,x);
            temp->left->parent = temp;
            temp->left->pos = temp->pos+1;

           }
        else
           {
            bst(temp->right,x);
            temp->right->parent = temp;
            temp->right->pos = temp->pos+1;
           }

    }

}

int minimum_height_of_bst(struct bst *root,int size)
{
    int a[size];
    inorder(root);
}

void inorder(struct bst *root,int size)
{

    struct bst *temp;
    temp =root;
    if(temp==NULL)
    {

        return;

    }
    inorder(temp-left,int size);
    a[k++]

}
