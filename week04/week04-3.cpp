#include <stdio.h>

int main()
{
    int a=10,b=20;

    int *p1=&a;
    int *p2=&b;

    printf("p1���Ъ��ܼƭȬO%d\n",*p1);
    printf("p2���Ъ��ܼƭȬO%d\n",*p2);

    p1=p2;
    printf("p1���쪺�ܼƭȬO%d\n",*p1);
    printf("p2���쪺�ܼƭȬO%d\n",*p2);

}