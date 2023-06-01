#include<iostream>
using namespace std;

void patternsearching(string &txt,string &pat)
{
    int m= pat.length();
    int n= txt.length();
    for(int i=0;i<=n-m;i++)
    {
        int j;
        for(j=0;j<m;j++)
        {
           if(pat[j]!=txt[i+j])
           {
            break;
           }
        }

        if(j==m)
        {
            std::cout<<i<<" ";
        }

    }

}
int main()
{
    string txt = "AAAAAA";string pat="AAA";
    std:: cout<<"All index numbers where pattern found:"<<" ";
    patternsearching(txt,pat);
    return 0;
}