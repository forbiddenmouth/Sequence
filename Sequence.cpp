#include"Sequence.h"

Sequence::Sequence(){
	a=0;t=0;c=0;g=0;
	s="";
}

Sequence::Sequence(string filename){
	freopen(filename.c_str(),"r",stdin);
	a=0;t=0;c=0;g=0;
	char n;
	while(cin>>n)
	{
		if (n=='A'||n=='T'||n=='G'||n=='C')
		{
		
		if(n=='A'){
			a++;
		}
		if(n=='T'){
			t++;
		}
		if(n=='C'){
			c++;
		}
		if(n=='G'){
			g++;
		}
		s+=n;
		}
	}
	freopen("CON","r",stdin);
}


int Sequence::length(){
	return s.length();
}

int Sequence::numberOf(char base){
	switch(base)
	{
		case 'A':{
		return a;}
		case 'T':{
		return t;}
		case 'C':{
		return c;}
		case 'G':{
		return g;}
		default :
		{
			return 0;	
		}
	}
}

string Sequence::longestConsecutive(){
	int n,m,i,j,k,max;
	m=s.length();
	n=1;k=0;i=1;
	while (n<m)
	{
		if (s[n]==s[n-1])
		{
			i++;
		}
		else
		{
			if(i>max)
			{
				max=i;k=n;
			}
			i=1;
		}
		n++;
	}
	return s.substr(k-i+1,max);
}

string Sequence::longestRepeated(){
	string ss,maxstr;
	int i,j,k,fr,ba;
	k=s.length();
	for (i=0;i<k/2+1;i++)
	{
		for (int j=k-i;j>=1;j--)
		{
			ss=s.substr(i, j);
			fr = s.find(ss);
			ba = s.rfind(ss);
			if (fr != ba && ss.size() > maxstr.size())
            {
            	maxstr = ss;
			}
		}
	}
	return maxstr;
}































