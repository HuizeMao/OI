#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <ctime>
#include <algorithm>
using namespace std;

inline int read() 
{//change type of var to read as needed
	int f=0,sign=1;char ch=getchar();
	while(!isdigit(ch)) {if(ch=='-')sign=-1;ch=getchar();}
	while(isdigit(ch)) {f=f*10+ch-48,ch=getchar();}
	return sign*f;
}

int main() {
	//modify file names
	freopen("data.txt","w",stdout);
	srand(time(NULL));
	
	//decide on # of cases
    int casos=read();
   
	while(casos--)
    {
    	//decide on value to % 
    	printf("%d\n",rand());
	}
    return 0;
}

