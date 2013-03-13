#include <iostream>
#include <vector>
#include <assert.h>

using namespace std;

class StackSppliedMin {
    public:
        vector<int> datas;
        vector<int> minStack;

        void push(int data) {
            datas.push_back(data);
            cout << "Push " << data << endl;
            if(minStack.empty() || data < minStack.back())
            {
                minStack.push_back(data);
                cout << "*Push " << data << endl;
            }
        }

        bool pop() {
            if(datas.empty() | minStack.empty())
            {
                return false;
            }else{
                cout << "Pop" << datas.back() << endl;
                if(datas.back() == minStack.back())
                {
                    cout << "*Pop " << minStack.back() << endl;
                    minStack.pop_back();
                }
                datas.pop_back();
                return true;
            }
        }

        void min() {
            assert(!minStack.empty());
            cout << "Min" << minStack.back() << endl;
        }
};

int main()
{
    StackSppliedMin a;
    a.push(4);
    a.push(8);
    a.push(1);
    a.push(9);
    a.push(6);

    cout << "============" << endl;

    while(a.pop())
        a.min();
}
