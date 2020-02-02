#include <stdio.h>
#include <stdlib.h>

typedef struct person {
    char name[30];
    unsigned int age;
    char cnp[13];
}person;


typedef struct personData {
    person data;
    struct personData *next;

} personData;

int insertPerson(person *p)
{
    char tempname[] = "";

    printf("Name:");

    while(strlen(tempname)<=1)
        {
        scanf("%s", tempname);
                if(strlen(tempname)>31)
                {
                    printf("Name too long. Please try again.\n");
                    tempname[] = "";
                }
                else
                    scanf("%s", p->name);
    }
    tempname[] = "";


    printf("\n");


    unsigned int tempage = 0;
    printf("Age:");

    while(tempage==0)
        {
        scanf("%d", tempage);
                if(tempage>120)
                {
                    printf("Invalid age. Please try again.\n");
                    tempage = 0;
                }
                else
                    scanf("%d", p->age);
    }
    tempage=0;


    printf("\n");


    char tempcnp[] = "";

    printf("CNP:");
    while(strlen(tempcnp)<=1)
        {
        scanf("%s", tempcnp);
                if(strlen(tempcnp)>31)
                {
                    printf("Invalid CNP. Please try again.\n");
                    tempcnp[] = "";
                }
                else
                    scanf("%s", p->cnp);
        }
    tempcnp[] = "";


    if (strcmp(p->name,".") == 0)
        return 0;

    return 1;
}

populatePersonData(personData *newPersonData)
{
    newPersonData->next = NULL;
    personData->next = *newPersonData;

    person *p;
    p = (person*)malloc(sizeof(person));
    if (insertPerson(p) == 0)
	    return 0;

    newPersonData->data = p;
    return 1;
}

show18({

}

deleteList()


int main()
{

    personData* list = NULL;

    while(insertPerson)
    {
        list = createPerson(insertPerson(),list);

    }

    show18(list);
    deleteList(list);






}
