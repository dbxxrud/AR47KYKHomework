// 230323_HomeWork.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

/*
* ex )
1. 산술 연산자 (+, -, *)
2. 축약형 연산자 (+=, -=)
3. 비교 연산자 (>=, ==)
4. 논리 연산자 (&&, ||)
5. 맴버 선택 연산자 (->, * : 역참조 연산자 ex. 포인터 *p와 같은 것)
6. 증감 연산자 (++, --)
7. 함수 호출 연산자 ( () )
8. 배열 연산자 ( [] )
*/

class Number
{
public:
    int Value = 10;
    int a = 0;

public:
    Number()
    {
    }

public:
    // 사칙
    int operator+(int _Value)
    {
        return Value + _Value;
    }
    int operator-(int _Value)
    {
        return Value - _Value;
    }
    int operator*(int _Value)
    {
        return Value * _Value;
    }
    int operator/(int _Value)
    {
        return Value / _Value;
    }

    // 축약
    int operator+=(int _Value)
    {
        return Value += _Value;
    }
    int operator-=(int _Value)
    {
        return Value -= _Value;
    }
    int operator*=(int _Value)
    {
        return Value *= _Value;
    }
    int operator/=(int _Value)
    {
        return Value /= _Value;
    }

    // 비교
    bool operator==(int _Value)
    {
        return true;
    }
    bool operator>=(int _Value)
    {
        return true;
    }
    bool operator<=(int _Value)
    {
        return true;
    }

    // 증감
    // 전위는 어떻게 해야할지 모르겠음
    int operator++(int _Value)
    {
        return Value += 1;
    }
    int operator--(int _Value)
    {
        return Value -= 1;
    }

    // 논리
    bool operator&&(int _Value)
    {
        return Value && _Value;
    }
    bool operator||(int _Value)
    {
        return Value || _Value;
    }

    Number* operator->()
    {
        // 함수의 반환형은 Number 포인터이고, 호출하면 Number 객체를 가리키는 포인터를 반환
        return this;
    }
    int operator*()
    {
        return Value; // 멤버변수값 반환
    }

    int operator[](size_t _Value)
    {
        return Value;
    }

};


int main()
{
    Number Value;
  
 
    Value++;

    int val = *Value;
    

    std::cout << "Hello World!\n";
}

