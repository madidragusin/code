#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct people {

    char name[30];
    unsigned int age;
    char cnp[13];

} people;


people enterPerson()
{
    people ppl;
    char nume;

    printf("Name:\n");
    scanf("%s", nume);


    printf("Age:\n");
    scanf("%d", &ppl.age);

    printf("CNP:\n");
    scanf("%s", &ppl.cnp);

    return ppl;

};


void displayPeople(people ppl)
{
    printf("Name: %s  CNP: %s  Age: %d", ppl.name, ppl.cnp, ppl.age);

};


typedef struct node {

    people info;
    struct node *next;

} node;


node* createNode(people p, node*nextnode)
{
    node* newnode;
    newnode = (node*)malloc(sizeof(node));
    newnode->info = p;
    newnode->next = nextnode;

    return newnode;
}


void showPeopleOver18(node* endOfList,node* list)
{
    while(endOfList)
    {
        if(people.age >= 18)
            printf("%s %s \n", people.name, people.cnp);

        endOfList = endOfList->next;

    }
}



node* deleteList(node* endOfList)
{
    while(endOfList)
    {
        free(endOfList->info.name);
        node* aux = endOfList;
        endOfList = endOfList->next;
        free(aux);
    }

    return NULL;
}


//node* addAnotherPerson()
//{

//}




int main()
{
    int numberOfPeople;
    int i=0;
    node* list = NULL;

    printf("How many people do you want to add? ");
    scanf("%d", numberOfPeople);

    for(i=1; i<=numberOfPeople; i++)
    {
        list = createNode(enterPerson(),list);
    }

    showPeopleOver18(list);

    list = deleteList(list);

}
