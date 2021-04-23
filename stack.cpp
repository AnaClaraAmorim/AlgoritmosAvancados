#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main(){
    string word;
    cin >> word;
    stack<char> stack1;
    
    //store the letters of string word in stack1 
    for(int i=int( word.length() - 1);i >= 0 ;i--){
        if(!stack1.empty() && stack1.top() == word[i]  ){
            stack1.pop(); //remove all pairs of identical letters
        }else{
            stack1.push(word[i]);  //only insert letters not indentical in pair
        }
    }

    //print
    while(!stack1.empty()){
        cout << stack1.top();
        stack1.pop();
    }
        
}