#include<iostream> 
#include<string> 
#include<cstdio> 
#include<vector> 
#include<algorithm> 
#include<cstring> 

using namespace std;

class Sequence
{
	public:
		Sequence();
		Sequence(string filename);
		int length();
		int numberOf(char base);
		string longestConsecutive();
		string longestRepeated();
	private:
		string s;
		int a,t,c,g;
		
};
