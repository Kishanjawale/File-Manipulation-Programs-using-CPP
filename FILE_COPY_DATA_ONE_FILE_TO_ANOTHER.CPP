#include<iostream>
#include<fstream>
#include<cstdlib> //for exit()
using namespace std;

int main() 
{

    ifstream source_file("SourceFile.Txt", ios::binary);
    ofstream destination_file("DestinationFile.txt", ios::binary);

    if (!destination_file.is_open()) 
    {
        cout << "ERROR: File open failed..." << endl;
        exit(EXIT_FAILURE);
    }
    else 
    {
        cout << "Both files opened successfully..." << endl;
        
        char ch='\0';
        while(source_file.get(ch))
        {
            cout<<ch; // Display data which is copying.
            destination_file.put(ch);
        }
    
        source_file.close();
        destination_file.close();
    
        cout<<"Data copied Sucessfully."<<endl;
    }
    return 0;
}
