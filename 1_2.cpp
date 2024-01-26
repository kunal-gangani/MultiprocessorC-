#include<iostream>
using namespace std;
class Distance{
	int feet;
	int inch;
	public:
		void SetDistance(int feet,int inch){
			this->feet=feet;
			this->inch=inch;
		}
		void GetDistance(){
			cout<<feet<<" Feet "<<inch<<" Inch "<<endl;
		}
		Distance operator+(Distance num){
			int Feet=feet+d2.feet;
        	float Inch=inch+d2.inches;
			if(Inch>=12.0) {
            	Inch-=12.0;
            	newFeet++;
        	}
		}
		
};
int main(){
	Distance d1,d2,d3;
	d1.SetDistance(2,3);
	d2.SetDistance(4,5);
	d1.GetDistance();
	d2.GetDistance();
	d3=d1+d2;
	d3.GetDistance();
}
