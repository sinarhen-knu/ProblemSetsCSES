#include <iostream>
#include <vector>
 
using namespace std;
 
void generateGrayCode(int n, vector<string>& grayCode) 
{
    if (n == 1) 
    {
        grayCode = { "0", "1" };
        return;
    }
 
    generateGrayCode(n - 1, grayCode);
 
    int size = grayCode.size();
    for (int i = size - 1; i >= 0; --i) 
    {
        grayCode.push_back("1" + grayCode[i]);
        grayCode[i] = "0" + grayCode[i];
    }
}
int main() 
{    
    int n;
    cin >> n;
 
    vector<string> grayCode;
    generateGrayCode(n, grayCode);
 
    for (const string& code : grayCode) 
    {
        cout << code << endl;
    }
 
    return 0;
}