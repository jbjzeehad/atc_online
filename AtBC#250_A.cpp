/*

    @ Jbj Zeehad

*/
#include <bits/stdc++.h>
using namespace std;
int main(){
int R,H,C,W;
cin>>H>>W;
cin>>R>>C;
int cnt=0;
if(R+1<=H)
	cnt++;
if(R-1>0 && R-1<=H)
	cnt++;
if(C+1<=W)
	cnt++;
if(C-1>0 && C-1<=W)
	cnt++;
cout<<cnt<<endl;
}