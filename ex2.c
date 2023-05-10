#include<stdio.h>
#include<stdlib.h>
#include <string.h>
typedef struct cellule
{
    char info;
    struct cellule* suivant;
} cellule;
typedef cellule* pile;
void empiler(pile *p,char e)
{
    pile nv=malloc(sizeof(cellule));
    nv->info=e;
    nv->suivant=*p;
    *p=nv;
}
void depiler(pile *p,char *e)
{
    pile ptemp=NULL;
    *e=(*p)->info;
    ptemp=*p;
    *p=(*p)->suivant;
    free(ptemp);

}
int bienParenthesee(char ch[])
{
    pile p=NULL;
    int l = strlen(ch);
    for(int i=0;i<=l-1;i++)
    {
        if(ch[i]='(')
        {
            empiler(&p,'(');
        }
        else if(ch[i]=')')
            if(p!=NULL)
            {
                depiler(&p,'(');
            }
            else
            {
                return -1;
            }
    }
    if(p==NULL)
    {
        return 1;
    }
    else
    {
        return -1;
    }

}

int main()
{
    char ch[20];
    int x;
    printf("donner une chaine");
    scanf("%s",ch);
    x=bienParenthesee(ch);
    if(x==-1)
    {
        printf("chaine n'est pas bien former");
    }
    else
    {
        printf("chaine est bien former");
    }
}
