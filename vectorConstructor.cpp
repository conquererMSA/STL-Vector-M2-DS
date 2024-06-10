#include<bits/stdc++.h>
using namespace std;
int main(){
    // initialization method
    //vector<data_type> name(size, value)
    //constructor<template> arr_name(size, initialize value)
    vector<int> numArr; //1 m
    //ekhane size and value kunotii nai
    vector<int> numArr2(5); //2 m
    //ekhane size 5 and proti index er value 0 ba garbage
    vector<int> numArr3(5,0); // 3 m
    //ekhane size 5 and proti index er value 0.
    int arr[3]={1,2,3}; //declare a array
    vector<int> numArr4(arr,arr+3); //numArr4 e kuno vector arr dile pointer dite hoto na. zehetu arr[] declare kora arr er jonno kuno stl nei, tai arr[] evabe declare kora array vector e copy korar jonno arr[] er pointer dite hoy.
    // for(int i=0; i<numArr4.size(); i++){
    //     cout<<numArr4[i]<<" ";
    // }
    vector<int> vNum={12, 34, 56}; //m 4
    //cout<<vNum.size()<<endl;
    vector<int> copyvNum(vNum); // m 5 //ekhane size na dileo copy korar somoy zetar theke copy hobe setar size o niye nibe.
    for(int i=0; i<copyvNum.size(); i++){
        cout<<copyvNum[i]<<" ";
    }

    return 0;
}