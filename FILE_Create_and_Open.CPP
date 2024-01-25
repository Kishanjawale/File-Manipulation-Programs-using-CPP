#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    fstream new_file;
    new_file.open("NewFile.Txt",ios::out);
    if(!new_file)
    {
        cout<<"Error: File Creation Failed..."<<endl;
    }
    else
    {
        cout<<"File Opened Successfully.."<<endl;
        new_file<<"File Data";// Writing data into the file.
        new_file.close();
    }
    return 0;

}