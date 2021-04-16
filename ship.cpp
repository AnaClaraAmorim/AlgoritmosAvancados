#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    string name, classification;
    vector <string> rat, womanchildren, man,captain; 
    while (n--)
    {
        cin >> name >> classification;
        if(classification == "rat"){
            rat.push_back(name);
        }else if (classification == "woman"){
            womanchildren.push_back(name);
        }else if (classification == "child"){
            womanchildren.push_back(name);
        }else if (classification == "man"){
            man.push_back(name);
        }else if(classification == "captain"){
            captain.push_back(name);
        }
    }

    for(int i=0; i<int(rat.size());i++)
        cout << rat[i] << "\n";
    for(int i=0; i<int(womanchildren.size());i++)
        cout << womanchildren[i]<< "\n";
    for(int i=0; i<int(man.size());i++)
        cout << man[i]<< "\n";
    for(int i=0; i<int(captain.size());i++)
        cout << captain[i]<< "\n";
    
}