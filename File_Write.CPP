<<<<<<< HEAD
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    fstream new_file; ////Creating the object of fstream class
    new_file.open("New_File_To_Write.txt",ios::out); //created a new file named as "New_File_To_Write.txt"
    if(!new_file)
    {
        cout<<"ERROR: File Creation Failed..."<<endl;
    }
    else
    {
        cout<<"New file created";
        new_file<<"Learning File handling";    //Writing data into the file
        new_file.close(); 
    }

    return 0;
=======
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    fstream new_file; ////Creating the object of fstream class
    new_file.open("New_File_To_Write.txt",ios::out); //created a new file named as "New_File_To_Write.txt"
    if(!new_file)
    {
        cout<<"ERROR: File Creation Failed..."<<endl;
    }
    else
    {
        cout<<"New file created";
        new_file<<"Learning File handling";    //Writing data into the file
        new_file.close(); 
    }

    return 0;
>>>>>>> 465d21ce515b6285a4b56992e96db71985a52209
}