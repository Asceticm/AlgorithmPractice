#include <iostream>
#include <vector>
#include <string>

using namespace std;

class StackMin {
    public:
    vector<int> a;
    vector<int> b;

    StackMin() {
        cout << "Stack Contructor" << endl;
    }

    bool push(int tmp) {
        a.push_back(tmp);
        cout << "Push" << tmp << endl;
        if(b.empty())
        {
            b.push_back(tmp);
            cout << "*Push Min" << tmp << endl;
        }else{
            if(tmp < b.back())
            {
                b.push_back(tmp);
                cout << "*Push Min" << tmp << endl;
            }
        }
    }

    bool pop() {
        if(a.empty())
        {
            return false;
        }else{
            cout << "Pop" << a.back() << endl;
            if(a.back() == b.back())
            {
                cout << "*Pop Min" << b.back() << endl;
                b.pop_back();
            }
            a.pop_back();
            return true;
        }        
    }

    int min()
    {
        if(b.empty())
        {
            cout << "Min is empty()"<< endl;
            return false;
        }else{
            cout << "Min is" << b.back() << endl;
        }
    }

    ~StackMin() {
        cout << "Stack Deconstructor" << endl;
    }
};

int main()
{
    StackMin stack;

    stack.push(5);
        stack.min();
    stack.push(4);
        stack.min();
    stack.push(9);
        stack.min();
    stack.push(1);
        stack.min();
    stack.push(6);
        stack.min();

        cout << "=============" << endl;

    while(stack.pop())
    {
        stack.min();
    }

    return 1;
}
