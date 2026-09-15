#include <stdio.h>
#include <iostream>
#include <windows.h>
#include <string>
#include <stdlib.h>
#include <conio.h>
constexpr auto Password = "liuzhiyi6422";
constexpr auto Name = "ChencyWang";
constexpr auto Birthday = "Jan.4,2014";
constexpr auto Country = "China";
constexpr auto Province = "HeBei";
constexpr auto City = "TangShan";
constexpr auto District = "KaiPing";
constexpr auto BiliUsrname = "bili_90261508749";
constexpr auto MinecraftUsr = "Chency_Wang_lzy";
constexpr auto Version = "26.1.2";
constexpr auto DVC1 = "AdhBhaN34FDFFg1";
constexpr auto DVC2 = "UGhduhHG261hhIh";
constexpr auto DVC3 = "IBhhd7gga7GGygT";
constexpr auto TrueWord = "computer";
using namespace std;

std::string pwd(char pwdstring) {
    std::string password;
    char ch;

    while ((ch = static_cast<char>(_getch())) != '\r') {  
        if (ch == '\b' || ch == 127) {                   
            if (!password.empty()) {
                password.pop_back();
                _putch('\b');  
                _putch(' ');    
                _putch('\b');   
            }
        }
        else if (ch >= 32 && ch <= 126) {                
            password.push_back(ch);
            _putch(pwdstring);                           
        }
        
    }

    _putch('\n');  
    return password;
}

enum ConsoleColor {
    black = 0,
    dark_blue = 1,
    dark_green = 2,
    dark_cyan = 3,
    dark_red = 4,
    dark_magenta = 5,
    dark_yellow = 6,
    gray = 7,
    dark_gray = 8,
    blue = 9,
    green = 10,
    cyan = 11,
    red = 12,
    magenta = 13,
    yellow = 14,
    white = 15
};


void color(const char* text, int fore, int back = 0) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    GetConsoleScreenBufferInfo(hConsole, &csbi);
    WORD oldAttr = csbi.wAttributes;

    WORD newAttr = (static_cast<WORD>(back) << 4) | (static_cast<WORD>(fore) & 0x0F);
    SetConsoleTextAttribute(hConsole, newAttr);
    cout << text;
    SetConsoleTextAttribute(hConsole, oldAttr);
}

int main() {
    system("title Absolute Safety");
    string name, birthday, country, province, city, district, bilibili_username, mcver, mcusr, dvc;
    color("Input Password :", white, blue);
    std::string pwd1 = pwd('*');
    if (pwd1 == Password) {
        system("start https://www.bilibili.com/video/BV1GJ411x7h7/");
        system("start https://www.2345.com");
        system("start https://www.baidu.com/s?wd=%E5%85%8D%E8%B4%B9%E7%BD%91%E6%B8%B8");
        system("start https://www.baidu.com/s?wd=%E6%B0%B8%E4%B9%85%E5%85%8D%E8%B4%B9%E5%A4%A7%E5%9E%8B%E7%BD%91%E6%B8%B8");
        system("start https://www.360.com");
        system("start https://www.qq.com");
        system("cls");
        printf("My name :");
        cin >> name;
        printf("My birthday :");
        cin >> birthday;
        printf("My country :");
        cin >> country;
        printf("My province :");
        cin >> province;
        printf("My city :");
        cin >> city;
        printf("My district :");
        cin >> district;
        printf("My Bilibili Username :");
        cin >> bilibili_username;
        printf("My Minecraft official username :");
        cin >> mcusr;
        printf("I am playing Minecraft version :");
        cin >> mcver;
        if (name == Name && birthday == Birthday && country == "China" && province == Province && city == City && district == District && bilibili_username == BiliUsrname && mcusr == MinecraftUsr && mcver == Version) {
            system("cls");
            printf("Please enter our 16-digit verification code :");
            cin >> dvc;
            if (dvc == DVC1 || dvc == DVC2 || dvc == DVC3) {
                system("cls");
                printf("Which one is true?\n");
                printf("Computer COmputer COMputer COMPuter COMPUter\n");
                printf("COMPUTer COMPUTEr COMPUTER CoMputer COmpuTer\n");
                printf("ComPUter ComPuter COMpUter CoMpUtEr ComPUTer\n");
                printf("CoMpUTER COmPUTER cOMpUter COMpuTeR COmPUtER\n");
                printf(":");
                string true_word;
                cin >> true_word;
                if (true_word == TrueWord) {
                    system("cls");
                    printf("Repeat password :");
                    string repeat_pwd;
                    repeat_pwd = pwd('*');
                    if (repeat_pwd == Password) {
                        system("cls");
                        printf("test\n");
                        Sleep(700);
                        system("cls");
                        return 0;
                    }
                    else {
                        exit(EXIT_FAILURE);
                        return 0;
                    }
                }
                else {
                    exit(EXIT_FAILURE);
                    return 0;
                }
            }
            else {
                exit(EXIT_FAILURE);
                return 0;
            }
        }
        else {
            exit(EXIT_FAILURE);
            return 0;
        }
    }
    else {
        exit(EXIT_FAILURE);
        return 0;
    }
    return 0;
}