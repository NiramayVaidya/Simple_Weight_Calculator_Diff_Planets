#include <iostream>
#include <string.h>
using namespace std;

class planet {
        char name[30];
        char color[20];
        float gravity;
        float mass;
        float astronaut_weight;
        public:
                int calculateWeight(){
                            astronaut_weight = mass * gravity;
                            return 0;
                }
                int displayInformation() {
                            cout<<"Planet Name : "<<name<<endl;
                            cout<<"Color : "<<color<<endl;
                            cout<<"Gravity : "<<gravity<<endl;
                            cout<<"Mass : "<<mass<<endl;
                            cout<<"Weight : "<<astronaut_weight<<endl;
                            return 0;
                }
                planet(char a[30], char b[20], float c, float m) {
                            strcpy(name, a);
                            strcpy(color, b);
                            gravity = c;
                            mass = m;
                }
                planet() {
                }
};

int main() {
 	planet p[100];
 	int n, i;
 	char a[30], b[20];
 	float c, m;
 	cout<<"Welcome to ISRO's Space station\n";
 	cout<<"Enter the mass of the Astronaut\n";
 	cin>>m;
 	cout<<"Enter the number of planets \n";
 	cin>>n;
 	for(i = 0; i < n; i++) {
 		cout<<"Enter the planet name\n";
 		cin>>a;
 		cout<<"Enter the planet color\n";
 		cin>>b;
 		cout<<"Enter gravity value in metre per second square\n";
 		cin>>c;
 		p[i] = planet(a, b, c, m);
 		p[i].calculateWeight();
 		cout<<endl;
 	}
 	for(i = 0; i < n; i++) {
 		p[i].displayInformation();
 		cout<<endl;
 	}
        return 0;
}
