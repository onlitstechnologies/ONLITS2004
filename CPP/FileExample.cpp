#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	string text;
	
	cout<<"Enter a string: ";
	getline(cin,text);
	
	//--------------Writing -----------------
	
	ofstream fout("TEXT.001");		//Open
	fout<<text;			//Write
	fout.close();
	
	cout<<"Text saved in file is as follows:"<<endl;
	
	//---------- Reading ----------------------
	
	ifstream fin("TEXT.001");
	getline(fin,text);
	fin.close();
	cout<<text<<endl;

	return 0;
}
