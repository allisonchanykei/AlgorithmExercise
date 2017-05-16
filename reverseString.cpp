/* 
Additional Exercise 1
Write a function that will take as an input a C-style string (char* newStr), and output the same string in reverse
*/
#include <iostream>
using namespace std;

char* newString (char* newStr){
	if (!newStr){
		return NULL;
	}
	char* last = newStr;
	//get the null in the string (the end)
	while (*last){
		last++;
	}
	//since last is now point to null, decrement 1
	last--;
	char* first = newStr;	
	//swapping the first and last character
	while(last>first){
		char temp = *first;
		*first = *last;
		*last = temp;
		last--;
		first++;
	}
	return newStr;
}

int main(){
	char test[5]= {'H','e','l','l','o'};
	newString("test");
	cout<<test;
}
