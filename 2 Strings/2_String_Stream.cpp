#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
    vector<int> res;
    string s = "";
	for(int i=0;i<str.length();i++)
    {
        if(str.at(i) != ',')
        {
            s += str.at(i);
        }
        else
        {
            int x = stoi(s);
            res.push_back(x);
            s = "";
        }
        if(i == str.length()-1)
        {
            int x = stoi(s);
            res.push_back(x);
            s = "";
        }
    }
    return res;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
