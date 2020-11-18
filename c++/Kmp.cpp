#include<bits/stdc++.h>
using namespace std;
void kmpPreProcess(string pattern, vector<int>&lps){
	int i = 0,j=-1;
	lps[0] = -1;
	while(i<pattern.size()){
		while(j>=0 && pattern[i]!=pattern[j])j = lps[j];
		i++,j++;
		lps[i]=j;
	}
}
vector<int> kmpSearch(string text, string pattern){
	vector<int> ans;
	vector<int> lps(pattern.size()+1);
	kmpPreProcess(pattern, lps);
	int i = 0, j=-1;
	while(i<text.size()){
		while(j>=0 && pattern[j]!=text[i])j=lps[j];
		i++;j++;
		if(j==pattern.size()){
			ans.push_back(i-pattern.size());
			j = lps[j];
		}
	}
	return ans;
}
int main(){

	string text = "Hey there! this is a text string, within which we wanna search a pattern.  \
	Note that pattern repeats itself, so search for pattern if you wanna see can this report multiple occurrences of pattern.";
	string pattern = "pattern";
	vector<int> indices = kmpSearch(text,pattern);
	for(auto i:indices){
		cout<<i<<",";
	}
}