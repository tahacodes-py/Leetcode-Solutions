#include <iostream>
#include <vector>
using namespace std;
class MinStack {
public:
    vector<int>array;
    vector<int>array2;
    size_t num;
    size_t capacity2;
    size_t numbers;
    size_t capacity;
    MinStack() {
        numbers = 0;
        num = 0;
    }
    void push(int value) {
        if(num ==0)
        {
            array.push_back(value);
            array2.push_back(value);
            num++;
        }
        else 
        {
            if(array2.back() > value)
            {
                array2.push_back(value);
                num++;
                array.push_back(value);
            }
            else 
            {
                array.push_back(value);
                array2.push_back(array2.back());
                num++;
            }
        }
    }
    void pop() {
        if(num != 0)
        {
            array.pop_back();
            array2.pop_back();
            num--;
        }
    }
    int top() {
        if(num != 0)
        {
            return array.back();
        }
        else 
        {
            return 0;
        }
    }
    int getMin() {
        if(num != 0)
        {
            return array2.back();
        }
        else 
        {
            return 0;
        }
    }
};