#include<iostream>
#include<stdlib.h>
#include<fstream>
using namespace std;

bool openChrome(char *fileName)
{
    int result=system(fileName); 
    if(result==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main(int argc,char *argv[])
{
  
    char file_name[100]="\"F:/New Start/Addition.exe\"";

    if(argc !=2)
    {
        cout<<"invalid number of arguments:"<<endl;
    }
    bool bReturn=false;
    bReturn=openChrome(file_name);
    
    if(bReturn ==true)
    {
        cout<<endl<<"File is opened Successfully:"<<endl;
    }
    else
    {
        cout<<"Error: Error while opening the file."<<endl;
    }

    return 0;
}