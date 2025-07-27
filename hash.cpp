#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int arr[5] = {1,2,3,4,6};
    unordered_map<int, int> map;
    for(int i = 0; i<5; i++){
        map[arr[i]] = i;
    }
    if(map.find(6) != map.end()){
        cout << 6 << " is found";
    }else{
        cout << "Not found";
    }

    return 0;
}
