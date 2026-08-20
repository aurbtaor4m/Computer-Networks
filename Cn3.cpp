# include <iostream>
# include <string>
# include <sstream>
using namespace std ;

int main(){
    int octet1, octet2 , octet3, octet4;
    char d1,d2,d3;
    string IPaddress;
    
    cout<<"Subnet : smaller logical division of a larger IP network. It is created by dividing a network into smaller parts using a subnet mask."<<endl;
    cout<<"Enter the IPaddress "<<endl;
    cin>>IPaddress;
    stringstream ss(IPaddress);
    
    if(!(ss >> octet1>>d1>>octet2>>d2>>octet3>>d3>>octet4)|| d1 !='.' ||d2 !='.'||d3 !='.'||ss.peek() != EOF){
        cout<<"Invalid IPaddress"<<endl;
    }
    
    if(octet1 >=1 && octet1<=126){
        cout<<"IPclass : Class A"<<endl;
        cout<<"Subnet mask : 255.0.0.0"<<endl;
        cout<<"host per network : 2^24 -2"<<endl;
        cout<<"octet1 range : 1 - 126"<<endl;
    }
    else if(octet1 == 127){
        cout<<"IPAddress belongs to loopback range"<<endl;
    }
    else if(octet1 >=192 && octet1<=223){
        cout<<"IPclass : Class B"<<endl;
        cout<<"Subnet mask : 255.255.0.0"<<endl;
        cout<<"host per network : 2^16 -2"<<endl;
        cout<<"octet1 range : 192 - 223"<<endl;
    }
    else if(octet1 >=224 && octet1<=239){
        cout<<"IPclass : Class C"<<endl;
        cout<<"Subnet mask : 255.255.255.0"<<endl;
        cout<<"host per network : 2^8 -2"<<endl;
        cout<<"octet1 range : 224 - 239"<<endl;
    }
    
    else if(octet1 >=240 && octet1<=255){
        cout<<"IPclass : Class D"<<endl;
       
    }
    return 0 ;
}
