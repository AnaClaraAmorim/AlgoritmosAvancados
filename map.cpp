#include <iostream>
#include <map>
#include <string>
#include <array>

using namespace std;

struct node{
    string name;
    string ip;
    string comment;
}reg; 

int main(){
    map <string, string> nginx;//store the key(ip) and the name
    int n,m; // n lines contain the names and ips of the servers
    //m lines contain the commands in the configuration file
    cin >> n >> m;
    string a,b;

    //read the names and ips of the servers and put then on the map nginx 
    for(int i=0;i<n;i++){
        cin >> a >> b;
        b.push_back(';');
        nginx.insert(pair<string,string>(b,a));
    }

    //read the commands in the configuration file and print the comments to nginx configuration
    for(int i=0;i<m;i++){
        cin >> reg.name >> reg.ip;
        reg.comment = nginx.find(reg.ip) -> second;//search the ip on the map and store the name(second)
        cout << reg.name << " "<< reg.ip << " "<< "#" << reg.comment << "\n";
    }
}