#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

void showTable(int rows, int columns){
cout<<"A"<<setw(3)<<"0"<<setw(3)<<"1"<<endl;
cout<<" /B"<<endl;


}

int main(){
cout<<"Enter the number of rows followed by the number of columns: ";
cin>>rows>>columns;
showTable(rows, columns);

}