// KYKHomework.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

// 영어만 씁니다.

// 문자열을 넣어주면 글자 개수를 알아냅니다.
// 0을 포함할지 아닐지는 스스로 정하세요
int StringCount(const char* _String)
{
    int num = 0;

    while (0 != _String[num])
    {
        ++num;
    }
    return num;
}

// 문자열 공백제거
int TrimDelete(char* _String)
{
    int num = 0;
    char result[100] = {};

    for (int i = 0; _String[i] != '\0'; ++i)
    {
        if (_String[i] != ' ') // 공백이 아니면
        {
            result[num] = _String[i];
            ++num;
        }
    }
    for (int i = 0; i <= num; ++i)
    {
        _String[i] = result[i];
    }
    return num;
}

int StringToInt(const char* _String)
{
    int num = 0;

    for (int i = 0; _String[i] != '\0'; ++i)
    {
        // 오로지 숫자라고 가정
        num = num * 10 + (_String[i] - '0');
    }

    return num;
}

int main()
{
    int Return0 = StringCount("aaaaaaaaa");
    int Return1 = StringCount("aaaa ggg sss");

    printf_s("%d", Return0);

    printf_s("\n");

    char Arr0[1024] = "a b c d";
   // char Arr1[1024] = "a    b c    d    e";
    //char Arr2[1024] = "ab    cde    ";
    TrimDelete(Arr0);
    printf_s("%s", Arr0);
    //TrimDelete(Arr1);
    //printf_s(Arr1);
    //TrimDelete(Arr2);
    //printf_s(Arr2);
    printf_s("\n");

    //// 영어나 다른글자가 섞여 들어가있는것을 가정하지 않는다.
    int RValue0 = StringToInt("112423411");
    printf_s("%d", RValue0);
    //int RValue1 = StringToInt("432");
    //int RValue2 = StringToInt("4523312");
    //int RValue3 = StringToInt("432231");


}
