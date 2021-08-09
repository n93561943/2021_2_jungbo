#include<stdio.h>
#include<list>
using namespace std;
list<int> lt;
void view(){
	list<int>::iterator iter;
	
	for(iter=lt.begin();iter!=lt.end();iter++)
		printf("%d ",*iter);
	printf("\n");
}
int main(){
	list<int>::iterator iter;
	lt.push_back(3);
	lt.push_back(5);
	lt.push_front(1);
	lt.push_front(2);
	view();
	lt.pop_back();
	lt.pop_front();
	view();
	lt.push_back(9);
	lt.push_front(10);
	view();
	iter = lt.begin();
	iter++;
	iter++;
	lt.erase(iter);
	view();
	printf("%d\n",*iter);
	lt.sort();
	view();
}
