#include <iostream>
using namespace std;

string xorEncryptDecrypt(string toEncrypt, char key) {
    for (int i = 0; i < toEncrypt.size(); i++) {
        toEncrypt[i] = toEncrypt[i] ^ key;
    }
    return toEncrypt;
}

int main() {
    string plaintext = "Selamat dan Sukses Ujian Akhir Semester Gasal 2022-2023";
    char key = 'hendi';
    cout << "Plaintext : " << plaintext << endl;
    string ciphertext = xorEncryptDecrypt(plaintext, key);
    cout << "Ciphertext : " << ciphertext << endl;
    string decryptedtext = xorEncryptDecrypt(ciphertext, key);
    cout << "Decryptedtext : " << decryptedtext << endl;
    return 0;
}
