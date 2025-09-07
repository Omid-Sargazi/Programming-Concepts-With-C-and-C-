#include <stdio.h>
#include <string.h>

typedef struct {
    char name[50];
    int age;
} Person;

void setName(Person *p, const * name)
{
    strcpy(p->name,name);
}

void setAge(Person *p,int age)
{
    p->age = age;
}

void printPerson(const Person *p)
{
    printf("Name:%s,Age:%d\n",p->name,p->age);
}


int main()
{
    Person p1;
    setName(&p1,"Omid");
    setAge(&p1,42);
    printPerson(&p1);
    return 0;
}

