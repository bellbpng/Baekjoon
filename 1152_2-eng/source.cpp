#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main(){
    string str;
    int cnt = 0;
    getline(cin, str);
    
    for(int i=0; i<str.length(); i++){
	if(isalpha(str[i])){
    		cnt++;
    		while(isalpha(str[++i])){}
		}
	}
    printf("%d\n", cnt);
    return 0;
}