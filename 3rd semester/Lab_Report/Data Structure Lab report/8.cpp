// 8. Write a program to delete a substring from a text
/*
-----------------------------------------------------------
|Algorithm:                                               |
|step-1: set K:=Index(T,P)                                |
|step-2: Repeat while K!=0                                |
|            (a) set T:= Delete(T,Index(T,p),Length(p))   |
|            (b) set K:= Index(T,P)                       |
|step-3: write: T                                         |
|step-4: Exit                                             |
-----------------------------------------------------------
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    string text, old_sub, result;
    cout << "\nEnter the text: ";
    getline(cin, text);
    int text_len = text.size();
    cout << "Delete string: ";
    getline(cin, old_sub);
    int old_sub_len = old_sub.size();
    for(int i = 0; i < text_len; i++){
        bool flag = true;
        for(int j = 0; j < old_sub_len; j++){
            if(i + j >= text_len or text[i+j] != old_sub[j]){
                flag = false;
                break;
            }
        }
        if(flag) i += old_sub_len - 1;
        else result += text[i];
    }
    cout << "Final text: " << result << '\n' << '\n';
    return 0;
}

/*
--------------------------------------------------------
time complexity: O(text_length × old_substring_length)
space complexity: O(text_length + old_substring_length)
--------------------------------------------------------
*/
