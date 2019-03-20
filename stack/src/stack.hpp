#include <vector>
#include <iostream>

template <class T>
class Stack
{
    private:
        std::vector<T> m_arr;
    public:
        void push(T item);
        void pop();
        T& top();
        bool is_empty();
};

template <class T>
void Stack<T>::push(T item)
{
    m_arr.push_back(item);
}

template <class T>
bool Stack<T>::is_empty()
{
    return (m_arr.size() == 0);
}

template <class T>
void Stack<T>::pop()
{
    if(is_empty()) {
        std::cout << "Stack is empty" << std::endl;
        return;
    }
    m_arr.pop_back();
}

template <class T>
T& Stack<T>::top()
{
    if(is_empty()) {
        throw "Stack is empty";
    }
    return m_arr.back();
}
