#include <bits/stdc++.h>
#include <fstream>
using namespace std;

int main()
{
    // string baseFilename;
    // cin >> baseFilename;
    // ofstream Myfile1("c_baseFilename.txt");
    // ofstream Myfile2("cs_baseFilename.txt");
    // ofstream Myfile3("cpp_baseFilename.txt");
    // ifstream MyReadFile(baseFilename);

    // while (!MyReadFile.eof())
    // {
    //     string temp;
    //     getline(MyReadFile, temp);
    //     cout << temp << endl;
    //     if (temp.find(".cpp") != string::npos)
    //     {
    //         Myfile1 << temp;
    //     }
    //     else if (temp.find(".cs") != string::npos)
    //     {
    //         Myfile2 << temp;
    //     }
    //     else
    //     {
    //         Myfile3 << temp;
    //     }
    // }
    fstream newfile;
    newfile.open("input.txt", ios::in);

    if(newfile.is_open()){
        cout<<"Yes";
    }
    else cout<<"No";

    string tp;
    while (getline(newfile, tp))
    {
        cout << tp << "\n";
    }
    newfile.close();
    return 0;
}