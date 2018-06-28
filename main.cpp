#include"Sequence.cpp"
	Sequence x("dna.txt");
int main(){

	cout<<"length:"<<x.length()<<endl;
	cout<<"A:"<<x.numberOf('A')<<endl;
	cout<<"T:"<<x.numberOf('T')<<endl;
	cout<<"C:"<<x.numberOf('C')<<endl;
	cout<<"G:"<<x.numberOf('G')<<endl;
	cout<<"longestConsecutive:"<<x.longestConsecutive()<<endl;
	cout<<"longestRepeated:"<<x.longestRepeated();
	return 0;
}
