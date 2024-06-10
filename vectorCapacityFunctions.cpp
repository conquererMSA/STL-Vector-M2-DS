#include<bits/stdc++.h>
using namespace std;
int main(){
    // size and capacity related functions
    vector<int> v;
    v.push_back(4);
    v.push_back(3);
    // cout<<v.size(); //size() function vector er previous size calculated kore rakhe, zokhon kuno elem push ba pop hoy, tokhon tar ager size theke 1 + ba - hoy, tai er complexity O(1).
    // cout<<v.max_size(); //max_size() kuno ekti vector array te kototi elem rakha zabe tar value return kore. er time coplexity O(1)
    cout<<v.capacity(); // kuno ekta vector array te current time e sorbucco kototi elem rakha zabe seti return kore. tobe current size er ceye zodi ekti elem beshi push kora hoy tobe array er capacity previous size er digun hoye zay. zemon zodi kuno vector array er size 2 hoy and aro ekti elem push kora hoy tokhon sei array er capacity 4 hoye zabe. zodeo notun elem push korar por er size 3 hobe.
    return 0;
}