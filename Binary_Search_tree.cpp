#include<stdio.h>
#include<conio.h>
void insert(int);
void inorder(struct node*);
struct node
{
    int data;
    struct node *left;
    struct node *right;

}*root=NULL;



int main()
{
    int n;
    int ar[50];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
        insert(ar[i]);


    }
    inorder(root);

}


void insert( int d)
{
    struct node *t,*p;
    t=malloc(sizeof(struct node));
    t->data=d;
    t->left=null;
    t->right=null;
    p=root;
    if(root==null)
        root=t;
    else
    {
        struct node *c;
        c=root;
        while(c)
        {
            p=c;
            if(t->data>c->data)
                c=c->right;
            else
                c=c->left;

        }
        if(p->data<t->data)
            p->right=t;
        else
            p->left=t;

    }
}



void inorder(struct node *temp)
{
    if(temp->left)
        inorder(temp->left);
    printf(temp->data);
}

