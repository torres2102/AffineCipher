//Author Ziad Mohammed Ibrahim  
#include <iostream>
#include <string>

using namespace std;

string encryption(string word,int a,int b) {
    string encrypted_word = "";
    for (int i{}; i < word.size(); i++) {
        int x = ((a*(word[i] - 'A')) + b) % 26;
        encrypted_word += (char(x) + 'A');
    }
    return encrypted_word;
}
string decryption(string word, int c, int b) {
    string decrypted_word = "";
    for (int i{}; i < word.size(); i++) {
        int y = (c * ((word[i]- 'A') - b)) % 26;
        if (y < 0)
            y += 26;

        decrypted_word += (char(y) + 'A');
    }
    return decrypted_word;
}
int main()
{
    int a{}, b{}, c{}, choice;
    string word;
    cin >> word;
    cin >> a >> b >> c;
    while (true) {
        cin >> choice;
        if ((a * c) % 26 == 1) {

            switch (choice) {
                case 1:
                    cout << encryption(word,a,b);
                    break;
                case 2:
                    cout << decryption(word,c,b);
                    break;
                case 3:
                    return 0;
            }
        }
        else
            cin >> a >> b >> c;




    }
    return 0;
}