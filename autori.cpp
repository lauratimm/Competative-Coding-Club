#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cin>>s;
    cout<<s[0];
    for(int i = 1; i < s.length(); i++) {
        //if there is a hyphen print following letter
        if(s[i] == '-') {
            cout<<s[i+1];
            i++;
        }
    }
    return 0;
}