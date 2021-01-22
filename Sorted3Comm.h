#include<bits/stdc++.h>
using namespace std;
//Find common in 3 sorted array.

vector<int> common(int a[],int b[],int c[],int n,int m,int o){
	int i=0,j=0,k=0;
	vector<int> ans;
	
	while(i<n && j<m && k<o){
		if(a[i]==b[j] && b[j]==c[k]){
			ans.push_back(a[i]);
			i++;
			j++;
			k++;
		}
		else if(a[i]<b[j]){
			i++;//x<y
		}
		else if(b[j]<c[k]){
			j++; //y<z
		}
		else{
			k++; //z<y 
		}
	}
	return ans;
}
int main(){

}