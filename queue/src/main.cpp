#include "queue.hpp"

int main()
{
    Queue<int> q;
    try {
        std::cout << q.front() << std::endl;
    } catch (const char* c) {
        std::cout << c << std::endl;
    }
    for(int i = 0; i < 10; ++i) {
        q.push(i);
    }
    while(!q.is_empty()){
        try {
            std::cout << q.front() << "  ";
        }catch(const char* c){
            std::cout << c << std::endl;
        }
        q.pop();
    }
    std::cout << std::endl;
}
