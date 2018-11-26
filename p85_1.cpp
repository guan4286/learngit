/*************************************************************************
    > File Name: p85_1.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2018年09月12日 星期三 21时41分15秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int main()
{
	string s("some thing");
	for (decltype(s.size()) index = 0;index != s.size() && !isspace(s[index]);++index)
		s[index] = toupper(s[index]);
	cout << s << endl;
	return 0;
}
