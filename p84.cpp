/*************************************************************************
    > File Name: p84.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2018年09月24日 星期一 17时15分09秒
 ************************************************************************/

#include<iostream>
using namespace std;
int main()
{
	string s("some string");
	if(!s.empty())
		s[0] = toupper(s[0]);
	cout << s << endl;
}
