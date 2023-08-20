#include<iostream>
using namespace std;
void printNewLine() {
  string sentence = "I love The ÂN";
  for (int i = 0; i < sentence.length(); i++) {
    if (sentence[i] == ' ') {
      std::cout << std::endl;
    } else {
      std::cout << sentence[i];
    }
  }
}

//{ Driver Code Starts.
int main(){
    //function call
    printNewLine();
}
// } Driver Code Ends
