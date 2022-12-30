#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

vector<string> tag_stack;
map<string,string> attrs;

void insert_attr(string &name, string &val)
{
    string full;
    for(string &str : tag_stack)
    {
        full += str + "."; //tag1.tag2.
    }
    full.pop_back(); // removing extra dot :: tag1.tag2. ---> tag1.tag2
    full += "~" + name; //tag1.tag2~name
    attrs[full] = val;
}
int main() {
    //input part
    int n,q;
    cin>>n>>q;
    for(int i=0;i<n;i++)
    {
        char c;
        cin>>c;  //taking single char <
        if(cin.peek()=='/')
        {
            string cn;
            cin>>cn;
            tag_stack.pop_back();
        }
        else
        {
            string name;
            cin>>name; // taking tag name
            if(name.back() == '>')
            {
                name.pop_back();            // tag1> ---> tag1
                tag_stack.push_back(name);  // adding tag name in vector
            }
            else 
            {
                tag_stack.push_back(name);  // adding tag name in vector
                for(;;) //single time usage for loop
                {
                    string attr_name,eq,attr_val;
                    cin>>attr_name>>eq>>attr_val; 
                    //attribute name + equal to sign + attribute value
                    if(attr_val.back()=='>')
                    {
                        // Filtering the attribute value
                        /* "HelloWorld"> ---> "HelloWorld" ---> "HelloWorld 
                        ---> HelloWorld */
                        attr_val.pop_back();
                        attr_val.pop_back();
                        attr_val = attr_val.substr(1);
                        
                        // inserting attribute name and filtered attribute value
                        insert_attr(attr_name,attr_val);
                        break;
                    }
                    else
                    {
                        attr_val.pop_back();
                        attr_val = attr_val.substr(1);
                        insert_attr(attr_name,attr_val);
                    }
                }
            }
        }
    }
    //Query Taking Part
    
    for(int i=0;i<q;i++)
    {
        string query;
        cin>>query;
        if(attrs.find(query) != attrs.end())
        {
            cout<<attrs[query]<<endl;
        }
        else
        {
            cout<<"Not Found!"<<endl;
        }
    }
    return 0;
}

