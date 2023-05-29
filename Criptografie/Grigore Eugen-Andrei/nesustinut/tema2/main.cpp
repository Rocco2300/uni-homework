#include <iostream>
#include <sstream>
#include <fstream>
#include <vector>

constexpr int AlphabetSize = 128;

std::string encrypt(const std::string& text, const std::string& key) {
    std::string res;
    int keyIndex = 0;
    for (const auto& ch : text) {
        int8_t offset = toupper(key[keyIndex]) - 65;
        keyIndex = (keyIndex + 1) % key.length();

        int8_t cypherCh = ch;
        cypherCh = (cypherCh + offset) % AlphabetSize;
        res += cypherCh;
    }
    return res;
}

std::string decrypt(const std::string& encryptedText, const std::string& key) {
    std::string res;
    int keyIndex = 0;
    for (const auto& ch : encryptedText) {
        int8_t offset = toupper(key[keyIndex]) - 65;
        keyIndex = (keyIndex + 1) % key.length();

        int8_t cypherCh = ch;
        cypherCh = (((cypherCh - offset) % AlphabetSize) + AlphabetSize) % AlphabetSize;
        res += cypherCh;
    }
    return res;
}

int main()
{
    std::string key = "key";

    std::string text;
    std::cout << "Introdu text: ";
    std::getline(std::cin, text);

    std::string encrypted = encrypt(text, key);

    std::cout << "Criptat: " << encrypted << std::endl;

    std::string decrypted = decrypt(encrypted, key);

    std::cout << "Decriptat: " << decrypted << std::endl;

    return 0;
}   