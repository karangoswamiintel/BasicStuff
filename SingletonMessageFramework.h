#ifndef SINGLETONMESSAGEFRAMEWORK_H
#define SINGLETONMESSAGEFRAMEWORK_H
class SingletonMessageFramework
{
public:
    // Returns the reference to the singleton static instance of this class
    static SingletonMessageFramework& getInstance();
private:
    // Private constructor that cannot be accessed directly
    SingletonMessageFramework() {}
    // Copy Constructors to not implemented and private
    SingletonMessageFramework(SingletonMessageFramework const& copy);
    // = operator copy overload to not implemented
    SingletonMessageFramework& operator=(SingletonMessageFramework const& copy);
};

#endif
