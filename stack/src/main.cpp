#include "stack.hpp"

int main()
{
    Stack<int> st;
    try{
        std::cout << st.top() << std::endl;
    }catch(const char* c){
            std::cout << c << std::endl;
        }
    for(int i = 0; i < 10; ++i) {
        st.push(i);
    }
    while(!st.is_empty()){
        try{
            std::cout << st.top() << "  ";
        }catch(const char* c){
            std::cout << c << std::endl;
        }
        st.pop();
    }
    std::cout << std::endl;
}
