#include<iostream>
#include<fstream>
using namespace std;

int main(int argc, char *argv[])
{
    char* FileName=argv[1];
    fstream new_file; //Creating a object of a  class fstream
    new_file.open(FileName,ios::in); //reading the data from "File_write.cpp"  File
    if(!new_file)
    {
        cout<<"No Such File"<<endl;
    }
    else
    { 
        char ch;
        while (!new_file.eof()) //Traversing the file // eof() is used to traverse the file till the end of the file. 
        {
            new_file>>ch;
            cout<<ch;
        }       
    }
    new_file.close();
    return 0;
}