#include <bits/stdc++.h>
using namespace std;

int main()
{
    int stu_num,num_puzz, m = 0, ans;
    cin>>stu_num>> num_puzz;
    int arr[num_puzz];
    for(int i=0; i<num_puzz; i++){
        cin>>arr[i];
    }
    sort(arr,arr+num_puzz);
    m = arr[num_puzz - 1] - arr[0];
    for(int i= stu_num; i <= num_puzz; i++){
        ans = arr[i-1] - arr[i-stu_num];
        ans = abs(ans);
        m = min(m,ans);
    }
    cout<<m;

return 0;
}
