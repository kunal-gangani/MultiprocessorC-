#include<iostream>
using namespace std;
class Message{
    char defaultmsg[30];
	public:
		Message(){
        	cout<<"Enter a Default Message : ";
        	cin>>defaultmsg;
    }
	void Print(){
        cout<<defaultmsg<<endl;
    }
	void Print(char c){
        cout<<defaultmsg<<" "<<c<<endl;
    }
};

int main(){
    char c[30];
    Message m;
	cout<<"Enter Another String You want to add : ";
    cin>>c;
	m.Print();
    m.Print(c);
	return 0;
}
