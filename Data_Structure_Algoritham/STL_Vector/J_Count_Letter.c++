#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    string s;
    cin>>s;

    vector<int>freq(26,0);
    for(int i=0;i<s.size();i++)
    {
        freq[s[i]- 'a']++;
    }

    for(int i=0;i<26;i++)
    {
        if(freq[i]>0)
        {
            char ch=i+'a';
            cout<<ch<<" : "<<freq[i]<<endl;
        }
    }

    return 0;
}             
 

