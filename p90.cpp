/*************************************************************************
    > File Name: p90.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2018年09月21日 星期五 12时28分55秒
 ************************************************************************/

#include<iostream>
#include<vector>
using namespace std;
int main()
{

	vector<int> v;
	for(int i=0;i != 100; ++i)
		v.push_back(i);

	for(auto i : v )
		cout << i << endl;
	string word;
	vector<string> text;
	while(cin >> word)
	{
		text.push_back(word);
	}
	for(auto j:text)
		cout << j << endl;

}
