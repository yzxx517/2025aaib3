///week04-6.cpp
//CPE YKL08.UVA100
#include <iostream>
using namespace std;

int main()
{
	int a,b,a2,b2; ///Part 1:input
	while( cin >>a >> b){ /// 	Part 1
		int ans = 0;
		if(a<b) {a2 =a;b2=b;}
		else{ a2 =b;b2 =a;}
		for(int i=a2;i<=b2;i++){
			int now = 1,n=i;
			while(n!=1){
				if(n%2==1) n = 3*n+1;
				else n = n / 2;
				now++;
			}
			if(now>ans) ans = now;
		}
		printf("%d %d %d\n",a,b,ans);  //c
	}///c language casier Part 2: Output
}
