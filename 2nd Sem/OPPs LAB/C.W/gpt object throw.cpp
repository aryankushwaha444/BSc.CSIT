#include <iostream>
using namespace std;
class Exception
{
private:
    string message;

public:
    Exception(string message) 
	{
	//	message = " ";
	} 

};

int main()
{
    try
    {
        throw Exception(" ");
    }
    catch (Exception )
    {
        cout << "Caught custom exception: "<<endl;
    }

    return 0;
}
