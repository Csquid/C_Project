#include <stdio.h>
#define null 0

void CheckEnglish(char* nString);
void PrintMorse(char nChar);

int main()
{
    char   TestChar[] = "hello";
    char*  pChar = TestChar;
    CheckEnglish(pChar);
}

void CheckEnglish(char* String)
{
    for(int i = 0; String[i] != null; i++)
    {
        for(int j = 'a'; j <= 'z'; j++)
        {
            if(j == String[i])
            {
                PrintMorse(String[i]);
            }
        }
    }
}

void PrintMorse(char nChar) 
{
    const char* MorseCode[27] = {
        ". _", "_ . . .", "_ . _ .", "_ . .", ".", 
        ". . _ .", "_ _ .", ". . . .", ". .", ". _ _ _", 
        "_ . _", ". _ . .", "_ _", "_ .", "_ _ _", 
        ". _ _ .", "_ _ . _", ". _ .", ". . .", "_", 
        ". . _", ". . . _", ". _ _", "_ . . _", "_ . _ _", 
        "_ _ . ."
    };


    for(int i = 0; i < 26; i++)
    {
        if(nChar == (i + 97))
        {
            printf("%s   ", MorseCode[i]);
        }
    }

}