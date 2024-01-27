#include<iostream>
#include<fstream>
#include<cstdlib> //for exit()
using namespace std;

//declaration of Error Codes
const int SOURCE_FILE_NOT_FOUND = -1;
const int FAILED_TO_OPEN_SOURCE_FILE = -2;
const int FAILED_TO_OPEN_DESTINATION_FILE =-3;
const int FILE_COPY_OPERATION_FAILED=-4;
const int FILE_COPIED_SUCCESSFULLY=1;

int copy_data_from_one_file_to_another(const char *SourceFile, const char *DestinationFile)
{ 
    //creating object of ifstream and ofstream
    ifstream source_file(SourceFile, ios::binary);
    ofstream destination_file(DestinationFile, ios::binary);
    

    if (!destination_file.is_open()) 
    {
        return FAILED_TO_OPEN_DESTINATION_FILE;
    }
    if(!source_file.is_open())
    {
        return FAILED_TO_OPEN_SOURCE_FILE;
    }
    else
    {
        //Copying data from one file to another.
        char ch='\0';
        while(source_file.get(ch))
        {
            destination_file.put(ch);
        }
        source_file.close();
        destination_file.close();
     
        return FILE_COPIED_SUCCESSFULLY;
    }
    return FILE_COPY_OPERATION_FAILED;
}
    

int main(int argc,char* argv[]) 
{

    if(argc!=3)
    {
        cout<<"ERROR: insufficent number of argumnemts";
        return -1;
    }

    //Accepted the input from the commmand line arguments.
    char* SourceFileName= argv[1];
    char* DestinationFileName=argv[2];
    int iResult = copy_data_from_one_file_to_another(SourceFileName,DestinationFileName);
    if(iResult==SOURCE_FILE_NOT_FOUND) 
    {
        cout<<"ERROR: source file not found."<<endl;
    }
    if(iResult==FILE_COPY_OPERATION_FAILED) 
    {
        cout<<"ERROR: file copy operation failed.<<endl"<<endl;
    }
    if (iResult==FILE_COPIED_SUCCESSFULLY)
    {
        cout<<"File Copied Successfully"<<endl;
    }
    if (iResult==FILE_COPY_OPERATION_FAILED)
    {
        cout<<"ERROR: file copy operation failed"<<endl;
    }
    return 0;
}
