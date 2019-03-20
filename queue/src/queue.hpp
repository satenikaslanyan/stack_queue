#include <iostream>
#include <list>

template <class T>
class Queue
{
    private:
        std::list<T> m_list;
    public:
        T& front();
        T& back();
        void push(T item);
        void pop();
        bool is_empty();
};

template <class T>
bool Queue<T>::is_empty()
{
    return m_list.size() == 0;
}

template <class T>
void Queue<T>::push(T item)
{
    m_list.push_back(item);
}

template <class T>
void Queue<T>::pop()
{
    if (is_empty()) {
        std::cout << "Queue is empty" << std::endl;
        return;
    }
    m_list.pop_front();
}

template <class T>
T& Queue<T>::front()
{
    if(is_empty()) {
        throw "Empty queue hasn't front element";
    }
    return m_list.front();
}

template <class T>
T& Queue<T>::back()
{
    if(is_empty()) {
        throw "Empty queue hasn't back element";
    }
    return m_list.back();
}
