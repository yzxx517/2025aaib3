/// week01-4a.cpp �ϥ� c�y�� �g
#include <stdio.h> ///�ϥ� c�y�� �~��

int main()
{
    int a, b;
    scanf("%d %d", &a, &b); ///c�y�� Ū���
    int ans = 0;
    for(int i=a; i<=b; i++){
        if( i%3==0 ) ans += i;
    }
    printf("%d", ans); ///C�y�� �L���
}
