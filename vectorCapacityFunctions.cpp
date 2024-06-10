#include<bits/stdc++.h>
using namespace std;
int main(){
    // size and capacity related functions
    vector<int> v;
    v.push_back(4);
    v.push_back(3);
    // cout<<v.size(); //size() function vector er previous size calculated kore rakhe, zokhon kuno elem push ba pop hoy, tokhon tar ager size theke 1 + ba - hoy, tai er complexity O(1).
    // cout<<v.max_size(); //max_size() kuno ekti vector array te kototi elem rakha zabe tar value return kore. er time coplexity O(1)
    // cout<<v.capacity(); // kuno ekta vector array te current time e sorbucco kototi elem rakha zabe seti return kore. tobe current size er ceye zodi ekti elem beshi push kora hoy tobe array er capacity previous size er digun hoye zay. zemon zodi kuno vector array er size 2 hoy and aro ekti elem push kora hoy tokhon sei array er capacity 4 hoye zabe. zodeo notun elem push korar por er size 3 hobe. er time complexity hocce O(1);

    // v.clear() //clear() func vector array er size 0 kore dey, tobe vector ke memmory theke delete kore na. loop caliye value pawya na geleo , v[index] syntex te value access kora zay. er time complexity hocce O(N);
    vector<int> arr={1,2,3,4,5};
    arr.resize(2);//1 2 //ekhane arr er size komiye dui kore deya hoyeche and array er protom duita index value theke zabe baki gulu delete hoye zabe.
    arr.resize(5);//1 2 0 0 0 //ekhane arr er size 2 theke bariye 5 kora hoyeche. ekhane prevoius size er value 1 2 asbe and notun index value hobe 0 0 0. orthat notun index value gulu 0 diye fillup hobe.
    arr.resize(7,7); // er time complexity hobe O(sizeDifference)
    // for(int i=0; i<arr.size(); i++){
    //     cout<<arr[i]<<" "; // 1 2 0 0 0 7 7
    // }
    return 0;
}