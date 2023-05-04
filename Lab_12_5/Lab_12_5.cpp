#include <iostream>
#include <stack>
using namespace std;

void sortStack(stack<char>& s1)
{
    stack<char> s2;
    while (!s1.empty())
    {
        char temp = s1.top();
        s1.pop();
        
        while (!s2.empty() && s2.top() < temp)
        {
            s1.push(s2.top());
            s2.pop();
        }
        
        s2.push(temp);
    }
    
    while (!s2.empty())
    {
        s1.push(s2.top());
        s2.pop();
    }
}

int main()
{
    stack<char> s1;
    char ch;
    cout << "Введіть послідовність символів: ";
    
    while (cin >> ch)
    {
        s1.push(ch);
        if (cin.get() == '\n')
        {
            break;
        }
    }
    cout << "Неупорядкований стек: ";
    
    while (!s1.empty())
    {
        cout << s1.top() << " ";
        s1.pop();
    }
    cout << endl;
    
    sortStack(s1);
    cout << "Упорядкований стек: ";
    
    while (!s1.empty())
    {
        cout << s1.top() << " ";
        s1.pop();
    }
    
    cout << endl;
    return 0;
}
