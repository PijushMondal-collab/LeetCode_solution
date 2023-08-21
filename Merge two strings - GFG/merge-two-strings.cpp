//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

string merge (string s1, string s2);

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s1; cin >> s1;
        string s2; cin >> s2;

        cout << merge (s1, s2) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends



string merge (string S1, string S2)
{
    // your code here
    int m=S1.size();
    int n=S2.size();
    string s="";
    
    int i=0,j=0;
    while(i<m || j<n){
        if(i<m){
            s=s+S1[i];
            i++;
            
        }
        if(j<n){
            s=s+S2[j];
            j++;
        }
        
    }
    return s;
}