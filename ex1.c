#include<stdio.h>
#include<stdlib.h>
/*typedef struct cellule
{
    int info;
    struct cellule* suivant;
} cellule;
typedef cellule* pile;
void empiler(pile *p,int e)
{
    pile n=malloc(sizeof(cellule));
    n->info=e;
    n->suivant=*p;
    *p=n;
}
void depiler(pile *p, int *e)
{
    pile ptemp=NULL;
    *e=(*p)->info;
    ptemp=*p;
    *p=(*p)->suivant;
    free(ptemp);
}
void afficher(pile *p)
{
    pile ptemp=NULL;
    int e;
    while(*p!=NULL)
    {
        depiler(p,&e);
        printf("%d \n",e);
        empiler(&ptemp,e);
    }

      while(ptemp!=NULL)
    {
        depiler(&ptemp,&e);
        empiler(p,e);

    }
}

void inverser(int t[])
{
    pile p;
    int e;
    for(int i=0;i<3;i++)
    {
        empiler(&p,t[i]);
    }
    for(int i=0;i<3;i++)
    {
        depiler(&p,&e);
        t[i]=e;
    }
}
void ranger_pair_impair(pile *p)
{
    int e;
    pile ppair=NULL;
    pile plmpair=NULL;
    afficher(p);
    while(*p!=NULL)
    {
        if((*p)->info%2==0)
        {
            printf("pairrr%d\n",(*p)->info );
            depiler(p,&e);
            empiler(&ppair,e);
        }
        else
        {
            depiler(p,&e);
            empiler(&plmpair,e);
        }
    }
    printf("pair:\n");
    afficher(&ppair);
    printf("Impair:\n");
    afficher(&plmpair);
    while(ppair!=NULL)
    {
        depiler(&ppair,&e);
        empiler(p,e);
    }
     while(plmpair!=NULL)
    {
        depiler(&plmpair,&e);
        empiler(p,e);
    }

}
int main()
{
    int t[3]={1,2,3};
    int e,b,c;
    pile p=NULL;
    printf("donner e :\n");
    scanf("%d",&e);
    empiler(&p,e);
    printf("donner b :\n");
    scanf("%d",&b);
    empiler(&p,b);
    printf("donner b :\n");
    scanf("%d",&c);
    empiler(&p,c);
    depiler(&p,&e);
    afficher(&p);
    inverser(t);
    for(int i=0;i<3;i++)
    {
        printf("%d",t[i]);
    }
ranger_pair_impair(&p);
afficher(&p);
}*/
