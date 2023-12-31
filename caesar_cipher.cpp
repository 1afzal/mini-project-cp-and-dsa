//cp-dsa, caesar cipher
//encrpting and decrypting a message
//shifts=3
#include <iostream>
#include <string>

using namespace std;

//encrypting the message using a Caesar cipher
string encrypt(string message, int shift, int length)
{
    for (int i = 0; i < length; i++)
    {
        // Shift each character 
        message[i] += shift;

        while (message[i] > 'z')
            message[i] -= 26;
    }

    // printing thr encrypted message
    cout << "The encrypted message is: " << message;
}

// decrypting the message using a Caesar cipher
string decrypt(string message, int shift, int length)
{
    for (int i = 0; i < length; i++)
    {
        // Shift character
        message[i] -= shift;

        while (message[i] < 'a')
            message[i] += 26;
    }

    // printing the decrypted message
    cout << "The decrypted message is: " << message;
}

int main()
{
    int shift, length;
    string message, operation;

    // let the user choose between encryption and decrypton
    cout << "Enter 'encrypt' to encrypt or 'decrypt' to decrypt: ";
    cin >> operation;

    //user to enter the message
    cout << "Enter the message: ";
    cin >> message;

    //entering the number of shifts
    cout << "Enter the number of shifts: ";
    cin >> shift;

    // shift value inside 26
    while (shift > 26)
        shift -= 26;

    // length of the message
    length = message.length();

    // operation performing(encryption or decryption)
    if (operation == "encrypt")
        encrypt(message, shift, length);
    else if (operation == "decrypt")
        decrypt(message, shift, length);

    return 0;
}
