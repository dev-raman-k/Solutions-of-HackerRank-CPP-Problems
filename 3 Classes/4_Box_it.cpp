#include<bits/stdc++.h>

using namespace std;
class Box 
{
    private:
    int l=0,b=0,h=0;
    public:
    
    Box(){ }
    
    Box(int x,int y,int z)
    {
        l=x;
        b=y;
        h=z;
    }
    Box(Box &B)
    {
        l = B.l;
        h = B.h;
        b = B.b;
    }
    int getLength()
    {
        return l;
    }
    int getBreadth ()
    {
        return b;
    }
    int getHeight ()
    {
        return h;
    }
    long long CalculateVolume()
    {
        return (long long)l*b*h;
    }
    bool operator<(Box& x)
    {
    if(b < x.l or (b < x.b and l == x.l) or (h < x.h and l == x.l and b == x.b))
    return true;
    else
    return false;
    }
    
friend ostream& operator<<(ostream&, Box&);
};

ostream& operator<<(ostream& out, Box& x)
    {
        return cout<<x.l<<" "<<x.b<<" "<<x.h;
    }
// The class should have the following functions : 

// Constructors: 
// Box();
// Box(int,int,int);
// Box(Box);


//  // Return box's length
// ; // Return box's breadth
// ;  //Return box's height
// ; // Return the volume of the box

//Overload operator < as specified
//

//Overload operator << as specified
//


void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}
