#include <iostream>
#include <fstream>

using namespace std;

int main()
 {

    ofstream file("sample.txt");

    file << "Hello abc (R.N) abc  i'm abcd your  abc Gifrd ";

    file.close();

    fstream readfile("sample.txt");

    char text[6];
    
    for (int i = 0; !readfile.eof(); i+=10)
	 {
        readfile.seekg(i, ios::beg);
        readfile.read(text, 5);
        
        if(readfile.eof())
        break;
        cout <<text<<"\t";
        
        //readfile.seekp(i, ios::beg);

    }

    readfile.close();

    return 0;
}
