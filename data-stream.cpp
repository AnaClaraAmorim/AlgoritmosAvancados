#include <iostream>
#include <queue>
#include <string>

using namespace std;

struct node
{
    int number_register; 
    int period;
    int current_time;
}reg;

//operator to order the priority_queue
bool operator < (node x, node y){   
    if(x.current_time == y.current_time) 
        return x.number_register > y.number_register;
    else    
        return x.current_time > y.current_time;    
}

priority_queue<node> control;

int main(){
    string x;
    node aux;
    int qtdd;

    while(1){
        cin >> x;
        if(int(x.size()) == 1) break; //# means final of read
        cin >> reg.number_register >> reg.period;
        reg.current_time = reg.period;
        control.push(reg);
    }

    cin >> qtdd;

    //print output
    while(qtdd--){
        cout << control.top().number_register << "\n";
        //update current time 
        aux.number_register = control.top().number_register;
        aux.period = control.top().period;
        aux.current_time = control.top().current_time + aux.period;
        control.pop();
        control.push(aux);
    }
}