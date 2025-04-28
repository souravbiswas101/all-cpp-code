#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int n, m;
    cin>>n>>m;
    vector<int> a(m);

    for(int i=0; i<m; i++){
        cin>>a[i];
    }
    long long total_time=0;
    int current_house = 1;

    for(int target_house: a){
        if(target_house>=current_house){
            total_time += (target_house - current_house);
        }
        else{
            total_time +=(n-current_house + target_house);
        }
        current_house = target_house;
    }

    cout<<total_time<<endl;
    return 0;
}

