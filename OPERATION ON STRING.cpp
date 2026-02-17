//1?Concatenation (Join strings)
#include<iostream>
using namespace std;
int main(){

string s1 = "Hello";
string s2 = "World";
string s3 = s1 + " " + s2;//Hello World
cout<<(s3)<<endl;
//2 find length of the string
cout << s3.length()<<endl;   // 11
//3 Access / Modify Character
cout << s1[1];   // e
s1[0] = 'Y';     // Yello
//4 Create & Initialize String
string s = "Hello";
//5 Substring
cout << s.substr(1, 3);   // ell

}   