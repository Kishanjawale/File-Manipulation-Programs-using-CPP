#include<iostream>
#include<fstream>
using namespace std;

int main(int argc, char * argv[])
{
    char *FileName=argv[1];
    fstream new_file; //Creating the object of fstream class
    new_file.open(FileName,ios::out); //created a new file named as "NewFile.txt"
    if(!new_file)
    {
        cout<<"Error: File Creation Failed..."<<endl;
    }
    else
    {
        cout<<"File Opened Successfully.."<<endl;
        new_file.close(); //Closing the opened file
    }   
    return 0;

}
