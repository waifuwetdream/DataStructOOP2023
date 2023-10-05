#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

struct HashTable
{
    string username, password;
} dataAkun[26];

int HashFunction( string password ) {
    return tolower(password[0]) - 69;
}

int main() {
    string username, password;

    cin >> username;
    cin >> password;
    int index = HashFunction(password);

    return(index);
}