#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    cout << "��ӭʹ��MYB��񹤾�" << endl;
    cout << "��ѡ����Ҫ���еĲ�����" << endl;
    cout << "1. ����һ���µı��" << endl;
    cout << "2. ��һ�����еı��" << endl;
    cout << "3.���ڴ���" << endl;
    int pan1;
    cin >> pan1;
    if (pan1 == 1) {
        cout << "��ѡ���˴���һ���µı��" << endl;
        cout << "����������Ҫ�ı������" << endl;
        string name;
        cin >> name;

        // ���������ļ���ʹ��Ĭ��ģʽ������ԭ�����ݣ�
        ofstream outfile(name + ".txt");

        // ����ļ��Ƿ�ɹ���
        if (!outfile.is_open()) {
            cout << "�޷����ļ�" << endl;
            return 1;
        }

        cout << "������⣺" << endl;
        string theme;

        // ������뻺�����еĻ��з�
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        // ��ȡһ��������Ϊ�������
        getline(cin, theme);

        // ���������д���ļ�
        outfile << "�������: " << theme << endl;

        cout << "����������" << endl;
        string content;

        // ��ȡһ��������Ϊ�������
        getline(cin, content);

        // ���������д���ļ�
        outfile << name << "�����ݣ�" << content << endl;
    }
    int pan2;
    cin >> pan2;
    if (pan2 == 2) {
        while (1) {
            cout << "��ѡ���˴�һ�����еı��" << endl;
            cout << "����������Ҫ�򿪵ı������(����.txt:" << endl;
            string pan3;
            cin >> pan3;
            ifstream infile(pan3);
            if (!infile.is_open()) {
                cout << "�޷����ļ�: " << pan3 << endl;
                return 1;
            }

            string line;
            cout << "�ļ��������£�" << endl;
            // ���ж�ȡ�ļ����ݲ���ӡ������̨
            while (getline(infile, line)) {
                cout << line << endl;
            }

            // �ر��ļ�
            infile.close();

            cout << "�ļ���ȡ���" << endl;
        }
    }
        int pan4;
            cin >> pan4;
            if (pan4 == 3) {
                cout << "���ڴ���" << endl;
                cout << "���ߣ�TGBmany" << endl;
                cout << "�汾��V1.0" << endl;
                cout << "���ڣ�2024.12.29" << endl;
                cout << "��ϵ��ʽ��qq:1414007988" << endl;
                cout << "vx:many2022" << endl;
                cout << "����:1414007988@qq.com" << endl;
                cout << "�ò�Ʒ�Ǳ���ȫ����������90%���Լ�����" << endl;
                cout << "10%��Դ������gpt��FittenCodeChat" << endl;
                cout << "���߶�c++��һ�νӴ��������������ѣ���ӭ��λ����ָ��" << endl;
                cout << "һ��ѧϰc++20�죬���֣���ӭ���м����罻��ʽ���ָ��" << endl;
                cout << "����Ʒ��һ���ԣ������Ƴ�����汾������������ӹ���" << endl;
                cout << "���ڿ��ܲ����ڻظ����ڼ��ջ������ߣ�������������vx qq ��������" << endl;
            }
            return 0;
        }
 