// Date:27\3\2022.
// Atpash_cipher.
// version:01.
// Author:Magdy Ibrahim Sayed Ahmed.


#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main() {

    int operation_num;
    string user_name;

    // user is asked to enter his name.

    cout<<"please, enter your name: ";
    cin>>user_name;

    cout<<"Hello"<<' '<<user_name<<

    // user should enter the number of operation he wants to do.

    "\n1_ choose it to encrypt\n" << "2_ choose it to decrypt\n" << "please, enter your operation number : ";
    cin >> operation_num;

    // I make while loop to check if user enter invalid number.

    while (operation_num != 1 && operation_num != 2) {
        cout << "your choice is not valid\n";
        cout << "1_ choose it to encrypt\n" << "2_ choose it to decrypt\n" << "please , enter your choice : ";
        cin >> operation_num;
    }

    // here if user choose operation 1 that is Encrypt the message the user entered.

    if (operation_num == 1 ) {


        const int letterCount = 'z' - 'a' + 1;
        string word;
        cout << "Please Enter a Message to Encrypt:";
        cin.ignore();
        getline(cin, word);
        for (auto &letter: word) {
            if (!isalpha(letter)) {
                continue;
            }
            const bool isUpper = isupper(letter);
            const char baseOffset = isUpper ? 'A' : 'a';
            const auto distanceFromAlphabetStart = letter - baseOffset;
            letter = (baseOffset + letterCount - 1) - distanceFromAlphabetStart;
        }
        cout << "Your Encrypted Message is:" << word;
    }

        // here if user choose operation 2 that is Decrypt the message the user entered.

    else if (operation_num == 2){


        const int letterCount = 'z' - 'a' + 1;
        string word;
        cout << "Please, Enter a Message to Decrypt:";
        cin.ignore();
        getline(cin, word);
        for (auto &letter: word) {
            if (!isalpha(letter)) {
                continue;
            }
            const bool isUpper = isupper(letter);
            const char baseOffset = isUpper ? 'A' : 'a';
            const auto distanceFromAlphabetStart = letter - baseOffset;
            letter = (baseOffset + letterCount - 1) - distanceFromAlphabetStart;
        }

        //here is the output of the operation that is the user choose.

        cout << "Your Decrypted Message is:" << word;
    }

    //here I thanked the user for using the program.

    cout<<"\nThanks "<<' '<<user_name;
}