/// week01-4b.cpp �ϥ� c++ �g
#include <iostream> ///�ϥ� c++ �~��
using namespace std; ///
int main()
{
    int a, b;
    cin >> a >> b; ///c++ Ū���
    int ans = 0;
    for(int i=a; i<=b; i++){
        if( i%3==0 ) ans += i;
    }
    cout << ans; ///C++ �L���
}
