### Topic ### 
#### Inheritance ####

---
# Exercise 00: Aaaaand... OPEN!

1. void attack(std::string const & target)
- 함수의 매개변수로 상수참조를 사용하면 복사본을 만들지 않고 인수에 접근할 수 있으며, `함수는 참조되는 값을 변경하지 못한다.`

```c++
void printIt(const int &x)
{ 
    std::cout << x; 
} 

int main() 
{ 
    int a = 1; 
    printIt(a); // non-const l-value 
    
    const int b = 2; 
    printIt(b); // const l-value 
    
    printIt(3); // literal r-value 
    
    printIt(2+b); // expression r-value
    
    return 0; 
} // 1234
```

---
# Exercise 01: Serena, my love!