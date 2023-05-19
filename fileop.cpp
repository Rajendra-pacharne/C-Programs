#include <iostream>
#include <fstream>
#include <string>
using namespace std;
class files{

    public:
    fstream my_file;
    void creadfile();
    void readfile();
};

void files::creadfile()
{
my_file.open("my_file.txt", ios::out);
	if (!my_file) {
		cout << "\n File not created";
	}
	else {
		cout << "\n File created ";
        cout <<"\n ";
        my_file <<"File Created using Fileop program";
		my_file.close(); 
	}
}
void files::readfile()
{
    my_file.open("my_file.txt", ios::in);
	if (!my_file) 
    {
		cout << "file not found ";
	}
	else 
    {
		char ch;
		while (1)
       {
			my_file >> ch;
			if (my_file.eof())
            {
				break;
            }
			cout << ch;
		}
    }

}

int main() {
    files f1;
	f1.creadfile();
    f1.readfile();
    cout<<"\n ........End of program ........";
	return 0;
}