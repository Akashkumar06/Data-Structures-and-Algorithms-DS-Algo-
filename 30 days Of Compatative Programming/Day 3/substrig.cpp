/*Lots of geeky customers visit our chef's restaurant everyday. So, when asked to fill the feedback form, these customers represent the feedback using a binary string (i.e a string that contains only characters '0' and '1'.

Now since chef is not that great in deciphering binary strings, he has decided the following criteria to classify the feedback as Good or Bad :

If the string contains the substring "010" or "101", then the feedback is Good, else it is Bad. Note that, to be Good it is not necessary to have both of them as substring.

So given some binary strings, you need to output whether according to the chef, the strings are Good or Bad.*/

#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
    string s1;
    cin>>s1;
    int val1=s1.find("010");
    int val2=s1.find("101");


    if(val1>=0||val2>=0){
        cout<<"Good"<<endl;
        }else{
        cout<<"Bad"<<endl;    }
    }


	return 0;
}

