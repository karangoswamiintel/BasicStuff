#include "MessageApplication.h"

using namespace std;

string MessageApplication::encryptDataByLetterInc(string data)
{
    int n = data.size();
    for (int i=0; i<n; i++)
    {
        if((data[i] >= 'a' && data[i] <= 'z') ||
        (data[i] >= 'A' && data[i] <= 'Z'))
            data[i]++;
    }
    return data;
}
