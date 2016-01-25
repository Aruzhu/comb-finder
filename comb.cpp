// all combination finder without laying back each element
#include <iostream>
#include <string>
#include <stringstream>
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
int toint(string str){
	stringstream stream;
	stream << str;
	
	int OurInteger;
	stream >> OurInteger;
	stream.str("");
	stream.clear();
	
	return OurInteger;
}
int main(){
	//get user input
	cout << "write numbers to use (seperate with , and without spaces): ";
	string ElementInput;
	getline(cin, ElementInput);
	cin.clear();
	
	cout << endl;
	
	int Elements[ occs(ElementInput, ",") ];
	int ElementsIter = 0;
	for(int i = 0; i<ElementInput.size(); i++){
		string letter = ElementInput.at(i);
		
		if(letter != ","){
			// yes we are that simple
			Elements[ElementsIter] = toint(letter);
		}
	}
	int Spots;
	cout << "numbers of spots? (whole number): ";
	cin >> Spots;
	cin.clear();
	cout << endl;
	
	// handle the data
	int SpotData[Spots][Elements.size()] = Elements*Spots
	
}
