#include <iostream>
 
using namespace std;

int main(){
  string str;
  char temp;
  cout << "Enter the string to be sorted: ";
  getline(cin,str);
  
  cout << "\n String before sorting: " << str << " \n";

  for (int i=0; i<str.length();i++){

    for (int j=0;j<str.length()-1 j++){
      if (str[j]>str[j+1]){ 

       	temp = str[j];
        str[j] = str[j + 1];
        str[j + 1] = temp;
      }
    }
  }

  cout << "\n String after sorting: " << str << " \n";
  return 0;
}
