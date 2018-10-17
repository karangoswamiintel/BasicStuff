#include "SingletonMessageFramework.h"
using namespace std;

SingletonMessageFramework& SingletonMessageFramework::getInstance()
{
    // The only instance
    // Guaranteed to be initialized
    // Guaranteed to be destroyed correctly at end of scope of object.
    static SingletonMessageFramework instance;
    return instance;
}

string SingletonMessageFramework::buildCompleteMessage(string rawData, string (*encryptorFunCB)(string))
{
    // Add a header and footer
    rawData = "[HEADER]" + rawData + "[FOOTER]";
    // Encrypt this data as per application logic
    rawData = encryptorFunCB(rawData);
    return rawData;
}
