#include <iostream>
#include <string>
using namespace std;

int vowel_count(string name){
    int count=0;
    for(int i = 0; i < name.length(); i++)
    {
        char ch = name[i];

        if(ch == 'a'|| ch== 'e' || ch== 'i'|| ch =='o' || ch=='u' )
        {
            count++;
        }
    }
    return  count;
}

int main(){
    string name;

    cout << "Enter a name: ";
    getline(cin, name);

    int count = vowel_count(name);
    
    cout << "Number of vowels in " << name << " is: " << count << endl;
    return 0;
}