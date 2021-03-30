#include <iostream>
using namespace std;
bool CheckHang(int a[][2], int n){
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(a[i][0]==a[j][0]){
                return true;
            }
        }
    }
    return false;
}
bool CheckCot(int a[][2], int n){
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(a[i][1]==a[j][1]){
                return true;
            }
        }
    }
    return false;
}
bool CheckDuongCheo(int a[][2], int n){
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(((a[i][0]+a[i][1])==(a[j][0]+a[j][1]))||((a[i][0]-a[i][1])==(a[j][0]-a[j][1])))
                return true;
        }
    }
    return false;
}
int main(){
    int n;
    cin >> n;
    int a[n][2];
    for(int i=0; i<n; i++){
        for(int j=0; j<2; j++){
            cin >> a[i][j];
        }
    }
    if(CheckCot(a,n) == true || CheckDuongCheo(a,n) == true || CheckHang(a,n)==true){
        cout << "yes";
    }
    else{
        cout << "no";
    }

}
// toa do hoa
// 2 mang luu toa do: 1 mang luu x, 1 mang luu y
//(a[x][0], a[x][1]) la toa do cua con hau thu x
