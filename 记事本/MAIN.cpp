#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    cout << "欢迎使用MYB表格工具" << endl;
    cout << "请选择你要进行的操作：" << endl;
    cout << "1. 创建一个新的表格" << endl;
    cout << "2. 打开一个已有的表格" << endl;
    cout << "3.关于创作" << endl;
    int pan1;
    cin >> pan1;
    if (pan1 == 1) {
        cout << "你选择了创建一个新的表格" << endl;
        cout << "请输入你需要的表格名称" << endl;
        string name;
        cin >> name;

        // 创建并打开文件，使用默认模式（覆盖原有内容）
        ofstream outfile(name + ".txt");

        // 检查文件是否成功打开
        if (!outfile.is_open()) {
            cout << "无法打开文件" << endl;
            return 1;
        }

        cout << "表格主题：" << endl;
        string theme;

        // 清空输入缓冲区中的换行符
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        // 读取一行输入作为表格主题
        getline(cin, theme);

        // 将表格主题写入文件
        outfile << "表格主题: " << theme << endl;

        cout << "输入表格内容" << endl;
        string content;

        // 读取一行输入作为表格主题
        getline(cin, content);

        // 将表格主题写入文件
        outfile << name << "的内容：" << content << endl;
    }
    int pan2;
    cin >> pan2;
    if (pan2 == 2) {
        while (1) {
            cout << "你选择了打开一个已有的表格" << endl;
            cout << "请输入你需要打开的表格名称(带上.txt:" << endl;
            string pan3;
            cin >> pan3;
            ifstream infile(pan3);
            if (!infile.is_open()) {
                cout << "无法打开文件: " << pan3 << endl;
                return 1;
            }

            string line;
            cout << "文件内容如下：" << endl;
            // 逐行读取文件内容并打印到控制台
            while (getline(infile, line)) {
                cout << line << endl;
            }

            // 关闭文件
            infile.close();

            cout << "文件读取完毕" << endl;
        }
    }
        int pan4;
            cin >> pan4;
            if (pan4 == 3) {
                cout << "关于创作" << endl;
                cout << "作者：TGBmany" << endl;
                cout << "版本：V1.0" << endl;
                cout << "日期：2024.12.29" << endl;
                cout << "联系方式：qq:1414007988" << endl;
                cout << "vx:many2022" << endl;
                cout << "邮箱:1414007988@qq.com" << endl;
                cout << "该产品非本人全自主创作，90%由自己创作" << endl;
                cout << "10%来源于网络gpt，FittenCodeChat" << endl;
                cout << "作者对c++第一次接触，代码质量不佳，欢迎各位大佬指正" << endl;
                cout << "一共学习c++20天，新手，欢迎大佬加我社交方式多多指教" << endl;
                cout << "本产品非一次性，后续推出更多版本，不断修正添加功能" << endl;
                cout << "周内可能不便于回复，节假日基本在线，有意见交流请加vx qq 发送邮箱" << endl;
            }
            return 0;
        }
 