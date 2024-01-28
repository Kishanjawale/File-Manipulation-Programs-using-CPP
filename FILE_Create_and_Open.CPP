#include<iostream>
#include<fstream>
using namespace std;

const int INVALID_NUMBER_OF_ARGUMENTS =-1;

int main(int argc, char * argv[]) 
{
    if(argc!=2)
    {
        return INVALID_NUMBER_OF_ARGUMENTS;
    }
 
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
