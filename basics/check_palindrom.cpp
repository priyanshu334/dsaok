#include<bits/stdc++.h>
using namespace std;

int getlen(char name[]){
    int cnt =0;
    for(int i =0; i<name[i]!='\0';++i){
        cnt++;
    }
    return cnt;
}
void reverse(char name[]){
    int s =0;
    int e = getlen(name)-1;
    while(s<e){
          swap(name[s++],name[e--]);
    }
}
bool check_palindrom(char name[]){
    int s =0;
    int e = getlen(name)-1;
    while(s<=e){
        if(name[s]!=name[e]){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}
char toLowercase(char ch){
    if(ch>='a' && ch<='z'){
        return ch;
    }else {
        char temp = ch-'A'+'a';
        return temp;
    }
   
}
// void reverseWords(string s){
//     string temp 
// }
int getMaxi(string s){
    int arr[26];
    for(int i =0; i<s.length(); i++){
            if(s[i]>='a'&&s[i]<='z'){
                arr[s[i]-'a']++;
            }
            else{
                arr[s[i]-'A']++;
            }
    }
    int maxi =INT_MIN;
    for(int i =0; i<26; ++i){
        if(maxi<arr[i]){
            maxi =arr[i];
        }
    }
    return maxi;
}
// string replace40(string s ){
//     string temp = "";
//     for(int i =0; i<s.length(); ++i){
//         if(s[i]==' '){
              
//               temp.push_back('@');
//               temp.push_back('4');
//               temp.push_back('0');
//         }
//         else{
//             temp.push_back(s[i]);
//         }

//         return temp;
// }


// }
string remove_all_occuranceOfaSubstr(string s,string part){
    while(s.length()!=0&& s.find(part) <s.length() ){
        s.erase(s.find(part),part.length());
    }
    return s;
}

int main(){

//    char name[20];
//    cout<<"Enter your name "<<endl ;
//    cin>>name;
//    cout<<"your name is " ;
//    cout<<name<<endl;
//    bool ans = check_palindrom(name);
//    if(ans ){
//     cout<<"the the sting is palindrome"<<endl;
//    }
//    else{
//     cout<<"the sting is not a plaindrom"<<endl;
//    }
//    int ans1 =getMaxi(name);
//    cout<<ans1<<endl;
   string s;
   cin>>s;
//    cout<<replace40(s)<<endl;
   cout<<remove_all_occuranceOfaSubstr(s,"riya")<<endl;


    return 0;
}