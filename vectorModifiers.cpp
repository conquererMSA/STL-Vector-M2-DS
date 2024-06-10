#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v={1,2,3,4,5};
    vector <int> v2={6,7,8,9,0};
    v=v2; //size same hole time complexity hobe O(1) arsize same na hole time complexity hobe zar beshi size tar ta O(N)
    // for(int val:v){
    //     cout<<val<<" ";
    // }
    v.insert(v.begin()+1, 10); //ekhane update v er 1 number index e 10 notun add kora hoyeche.
    vector<int> b={23,55,90,12};
    v.insert(v.begin()+2, b.begin(), b.begin()+2); //ze array theke copy hobe sei array er ze index deya hobe tar ag porzonto copy hobe. ze array te copy hobe sei array er ze index deya hobe sei index theke copy hobe: v.begin()+2 v array er 2 no index theke copy howya value pawa zabe. kintu v.end() dile shesh index er valu'r por copy valu bosbe.
    for(int val:v){
        cout<<val<<" ";
    }
    return 0;
}