#include <iostream>
#include<string>
#include<limits>
#include<assert.h>
#include<stack>
using namespace std;
char* MyStrCpy(char *pDest, const char *pSrc);
int main(){
	cout<<"Hello World"<<endl;
	int i;
	for(i=1;i<9;i++){
		i = i*i;}
	cout<<i<<endl;
	cout << "double: \t" << "所占字节数：" << sizeof(double);  
	cout << "\t最大值：" << (numeric_limits<double>::max)();  
	cout << "\t最小值：" << (numeric_limits<double>::min)() << endl;  
	cout << "long double: \t" << "所占字节数：" << sizeof(long double);  
	cout << "\t最大值：" << (numeric_limits<long double>::max)();  
	cout << "\t最小值：" << (numeric_limits<long double>::min)() << endl;  
	cout << "float: \t\t" << "所占字节数：" << sizeof(float);  
	cout << "\t最大值：" << (numeric_limits<float>::max)();  
	cout << "\t最小值：" << (numeric_limits<float>::min)() << endl;  
	cout << "size_t: \t" << "所占字节数：" << sizeof(size_t);  
	cout << "\t最大值：" << (numeric_limits<size_t>::max)();  
	cout << "\t最小值：" << (numeric_limits<size_t>::min)() << endl;  
	cout << "string: \t" << "所占字节数：" << sizeof(string) << endl; 
   	const char *name ;
	name = "YuYuE";
	cout<<name<<endl;  
	char *newName = (char*) "Hello";
	newName = MyStrCpy(newName,name);
	cout<<newName<<endl;
	return 0;
}

char* MyStrCpy(char *pDest, const char *pSrc)
{
	if( nullptr == pDest || nullptr == pSrc){
		return nullptr;
	}
	if( pDest == pSrc){
		return pDest;
	}
	char *pIter = pDest;
	while((*pIter++=*pSrc++) != '\0');
	return pDest;
}
