#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v(n), v1(n);

    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    for(int i = 0; i < n; i++) {
        cin >> v1[i];
    }

    vector<int>c;

    for(int i=0;i<n;i++)
    {
        c.push_back(v1[i]);
    }

     for(int i=0;i<n;i++)
    {
        c.push_back(v[i]);
    }
    
     for(int i=0;i<c.size();i++)
    {
        cout<<c[i]<<" ";
    }

    return 0;
}             
 

