#include <iostream>
#include <string>

using namespace std;

string deleteSpace(string s);

int main()
{

    string text;

    cout << "please enter some text and the program will remove any spaces.\n";

    getline(cin, text);

    text = deleteSpace(text);

    cout << "the text now reads:\n\n";
    cout << text << endl;


    return 0;
}

string deleteSpace(string s)
{
    string newText = "";

    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] != ' ')
            newText += s[i];
    }

    return newText;
}