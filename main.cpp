#include<bits/stdc++.h>
#include<string>
#include<algorithm>
using namespace std;
#define ll long long
#define line cout << "\n";
#define TEST ll T; cin>>T; while(T--)
#define yes cout<<"YES"<<endl;
#define no      cout<<"NO"<<endl;
#define adde for (int i = 0; i < s; i++)cin>>a[i];
#define vi vector<int>
#define vll vector<ll>
#define vs vector<string>
#define pb push_back
#define fi(l, r) for(ll i=l; i<r; i++)
#define fj(l, r) for(ll j=l; j<r; j++)
#define Mido  ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL);


//             "وَتَوَكَّلْ عَلَى ٱلْحَىِّ ٱلَّذِى لَا يَمُوتُ"
bool myComparison(const pair<int,int> &a,const pair<int,int> &b)
{
    return a.second<b.second;
}
int binary_search(int arr[],int n,int target){
    int left=0,right=n-1;
    while (left<=right){
        int mid=(left+right)/2;
        if (arr[mid]==target){
            return mid;
        } else if (arr[mid]<target){
            left=mid+1;
        } else
        {
            right=mid-1;
        }
    }
    return -1;
}
int binary_search_recursive(int arr[], int left, int right, int target){
    if (left<right){
        return -1;
    }
    int mid=(left+right)/2;
    if (arr[mid]==target)return mid;
    else if (arr[mid]<target)
        return binary_search_recursive(arr,mid+1,right,target);
    else
        return binary_search_recursive(arr,left,mid-1,target);
}
int solve (int a[],int n,int target){
    ll left=0,right=n-1,larg=-1;
    while (left<=right){
        int mid=(left+right)/2;
        if (a[mid]<=target){
            larg=mid;
            left=mid+1;
        }
        else
            right=mid-1;
    }
    return larg;
}

bool isPalindrome(string s) {
    string s2=" ";
//    std::transform(s.begin(),s.end(),s.begin(), ::tolower);
    for (char c : s) {
        if (std::isalpha(c)) {
            s2.push_back(std::tolower(c));
        }
    }

    int l=0,r= s2.size()-1;
    while (l<r){
        if (s2[l]!=s2[r]){
            return false;
        }
            ++l;
        --r;
    }
    return true;
}
int main() {
      cout<<isPalindrome("A man, a plan, a canal: Panama");
}
//10 3 5 1

