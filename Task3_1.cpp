#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
 string line;
 string a;
    cout << "Vvdeite text";
    cin >> a;
    ofstream out("hello.txt");       
    if (out.is_open())
    {
        out << a <<endl;
    }
    out.close(); 
    ifstream in("Hello.txt");
    if (in.is_open())
    {
        getline(in, line);
        cout << line << endl;
        
    }
    in.close(); 

}