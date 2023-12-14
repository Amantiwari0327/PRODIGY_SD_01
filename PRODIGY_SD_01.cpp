#include<bits/stdc++.h>
using namespace std;


void solvec(int t){
    cout<<((9/5)*t) + 32<<" F"<<endl;
    cout<<273 + t<<" K"<<endl;
}

void solvef(int t){
    int c = (5/9)*(t-32);
    cout<<(5/9)*(t-32)<<" C"<<endl;
    cout<<c+273<<endl;
}
void solvek(int t){
    int c = t-273;
    cout<<t-273<<" C"<<endl;
    cout<<((9/5)*c) + 32<<" F"<<endl;
}

int main()
{
    cout<<"Enter the value of temperature"<<endl;
    int t;
    cin>>t;
    string temperture_type;
    cout<<"Enter the unit of the temperature as follows:: "<<endl;
    cout<<"for Celsius enter: C; for fahrenheit enter: f; for kelvin enter: k"<<endl;
    cin>>temperture_type;  

    if(temperture_type == "c" or temperture_type =="C"){
        solvec(t);
    }
    else if(temperture_type == "f" or temperture_type=="F"){
        solvef(t);
    }
    else if(temperture_type == "K" or temperture_type == "k"){
        solvek(t);
    }
    else {
        cout<<"enter a valid unit"<<endl;
    }


    return 0;
}