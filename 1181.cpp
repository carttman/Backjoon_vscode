#include <iostream>
#include <algorithm>
#include <vector>
#include <set>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;

    cin >> N;

    vector<string> A(N);
    set<string> s;
    // 짧은 것부터
    // 길이가 같으면 사전 순

    for(int i=0; i<N; i++)
    {
        cin >> A[i];
        s.insert(A[i]);
       
    }

    for(auto it = s.begin(); it != s.end(); it++)
    {
        cout << *it << "\n";
    }

    // sort(A.begin(), A.end(), [](string a, string b){

    //     if(a.size() < b.size())
    //     {
    //         return b;
    //     }

    // });

    // for(int i=0; i < N; i++)
    // {
    //     cin >> A[i];
    // }

    // sort(A.begin(), A.end(), [](string a, string b){
    //     if(a.size() < b.size())
    //     {
    //         return a < b;
    //     }

    //     if(a.size() == b.size())
    //     {
    //         return a < b;
    //     }

    //     return a < b;
    // });

    // set<string> s;

    

    // for(int i=0; i<A.size(); i++)
    // {
    //     s.insert(A[i]);
    //     //cout << A[i] << "\n";
    // }

    // for(auto i = s.begin(); i != s.end(); i++)
    // {
    //     cout << &i << "\n";
    // }

    return 0;
}