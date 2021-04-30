#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n; //quantity of bags
    vector <int> bags;
    int count = 0;
    cin >> n;

    //read
    for(int i=0;i<n;i++){
        int aux;
        cin >> aux;
        bags.push_back(aux);
    }

    sort(bags.begin(), bags.end()); //sort the vector
    
    for(int i=1; i<n; i++){
        if(bags[i] == bags[i-1]){ //both have the same value
            bags[i]++; //increase the value
            count ++;
        }else if (bags[i] < bags [i-1]){ //if the sort has been affected
            //means that the vector is something like: 1 1 1 1 1 3 4
            int a = (bags[i-1] - bags[i]) + 1;
            bags[i] += a;
            count += a;
        }
        
    }

    cout << count;
}
