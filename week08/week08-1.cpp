#include <stdio.h>
#include <vector>

int main()
{
    std::vector<int> a(3);

    a[0]=100;
    a[1]=101;
    a[2]=102;

    for(int i=0;i<3;i++)
    {
        printf("%d ",a[i]);
    }
}
