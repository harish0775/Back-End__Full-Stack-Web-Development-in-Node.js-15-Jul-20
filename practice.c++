  #include<stdio.h>
#include<stdlib.h>
 struct Node
        {
        int data;
        struct Node *next;
        }*first=NULL;
        void create(int A[],int n)
        {
        int i;
        struct Node *t,*last;
        first=(struct Node *)malloc(sizeof(struct Node));
        first->data=A[0];
        first->next=NULL;
        last=first;

        for(i=1;i<n;i++)
        {
        t=(struct Node*)malloc(sizeof(struct Node));
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
        }
        }
        void Display(struct Node *p)
        {
        while(p!=NULL)
        {
        printf("%d ",p->data);
        p=p->next;
        }
        }
        void RDisplay(struct Node *p)
        {
        if(p!=NULL)
        {
        RDisplay(p->next);
        printf("%d ",p->data);

        }
        }
        int Delete(struct Node *p ,int index)
        {
            struct Node *q = NULL;
            int x = -1;
            int i;
            if(index < 1 || index > count(p))
            return -1;
            if(index == 1)
            { 
                q = first;
                x = first->data;
                p = first->next;
                free(q);
                return x;
            }else{
                for (int i = 0; i <index -1; i++)
                {
                    q= p;
                    p = p->next;
                     
                }
                q= p;
                p= first->next;
                x = first->data;
                free(p);
                return x;

            }
        }
         
         int isSorted(struct Node*p)
         {
             int x = -65536;
             while(p!= NULL)
             {
                 if(p->data < x)
                 return 0;
                 x = p->data;
                 p = p->next;
             }
             return 1;
             }
         } 
          void RemoveDuplicate(struct Node *p){
            struct Node *q = p->next;
            while(q != NULL)
            {
                if(p->data =  q->data)
                {
                    p = q ;
                    q = q->next;

                }
                else{
                    p->next = q->next;
                    free(q);
                    q = p->next;
                }
            }
          }
          void Reverse2(struct Node *p)
          {
              struct Node *q = NULL ,*r = NULL;
              while(p!= NULL)
              {
                  r = q;
                  q = p;
                  p = p->next;
                  q = q->next = r;
              }
              first = q;
          }
          
                  int main()
        {

        int A[]={10,20,30,40,50};
        create(A,5);

        printf(“%d\n",Delete(first),2);
        Display(first);

        return 0;
        }
         
