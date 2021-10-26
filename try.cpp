#include<bits/stdc++.h>
using namespace std;

int rec(int a, int b) {
    if(a < b)
        return rec(b, a);
    else if(b != 0)
        return a * rec(a, b - 1);
    else    
        return 0;        
}

int main() {
    cout<<rec(5,5);
    return 0;    
}    