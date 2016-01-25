// all combination finder without laying back each element
#include <iostream>
#include <string>
#include
using namespace std;
int occurances(string subject, string totest){
	int occs = 0;
	for(int i = 0; i<subject.size(); i++){
		if(totest == subject.at(i)){
			occs += 1;
		}
	}
	return occs;
}

int main(){
	//get user input
	cout << "write numbers to use (seperate with , and without spaces): ";
	string ElementInput;
	getline(cin, ElementInput);
	cin.clear();
	
	int Elements[ occs(ElementInput, ",") ];
	int ElementsIter = 0;
	for(int i = 0; i<ElementInput.size(); i++){
		string letter = ElementInput.at(i);
		
		if(letter != ","){
			Elements[ElementsIter] = 	
		}
	}
}
