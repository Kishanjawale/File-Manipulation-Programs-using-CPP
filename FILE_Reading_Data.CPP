#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    fstream new_file; //Creating a object of a  class fstream
    new_file.open("File_Write.CPP",ios::in); //reading the data from "File_write.cpp"  File
    if(!new_file)
    {
        cout<<"No Such File"<<endl;
    }
    else
    { 
        char ch;
        while (!new_file.eof()) //Traversing the file 
        {
            new_file>>ch;
            cout<<ch;
        }
        
    }
    new_file.close();
    return 0;
}