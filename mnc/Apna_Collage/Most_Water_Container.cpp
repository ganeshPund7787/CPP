// #include <iostream> 
// #include <climits> 
// #include <vector> 
// using namespace std; 

// int main() 
// {
//     vector<int> arr = {1,8,6,2,5,4,8,3,7};
//     int ans = 0;
//     for(int i=0; i<arr.size(); i++)
//     {
//         for(int j=i+1; j<arr.size(); j++)
//         {
//             int h = min(arr[i],arr[j]);
//             int w = j-i;
//             ans = max(ans,h*w);
//         }        
//     }
//     cout << "Answer: " << ans;
// }

#include <iostream> 
#include <climits> 
#include <vector> 
using namespace std; 

int main() 
{
    vector<int> arr = {1,8,6,2,5,4,8,3,7};
    int ans = 0, lp = 0, rp = arr.size()-1;
    while(lp<rp)
    {
       int h = min(arr[lp],arr[rp]);
       int w = rp-lp;
       ans = max(ans,h*w);
       if(arr[lp] < arr[rp]) lp++;
       else rp--;
    }
    cout << "Answer: " << ans;
}