#include <iostream>
using namespace std;

void swap(int *a, int *b){
	int x = *a;
	*a = *b;
	*b = x;
}


int euclides_largo(int a, int b, int &x, int &y)
{

    if(a<b) swap(a,b);

    if (b == 0)
    {
        x = 1;
        y = 0;
        return a;
    }
 
    int x1, y1; 
    int mcd = euclides_largo(b, a%b, x1, y1);
 

    x = y1;
    y = x1 - (a/b)*y1;
 
    return mcd;
}
 

int main(){
    int a, b;
    int x, y;

    cout<<"Ingresar valor de a: "; cin>>a;
    cout<<"Ingresar valor de b: "; cin>>b;
    
    int mcd = euclides_largo(a, b, x, y);
    cout<<"Maximo comun divisor: "<<mcd<<", x = "<<x<<", y = "<<y<<endl;
    cout<<a<<"("<<x<<") + "<<b<<"("<<y<<") = "<<mcd;

   return 0;
}