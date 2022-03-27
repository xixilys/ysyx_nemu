/*************************************************************************
	> File Name: photo_test.cpp
	> Author: Ddddddd
	> Mail: 1660509539@qq.com 
	> Created Time: 2022年03月27日 星期日 13时55分25秒
 ************************************************************************/

#include<iostream>
#include<fstream>
#include<string>
using namespace std;
string  data;
int main() {
	ofstream outFile;
	ifstream inFile;
	inFile.open("kuangsan.jpeg");
	if (!inFile.is_open()) {	// 判断文件是否打开失败
		cout << "文件打开失败！" << endl;
		exit(-1);
	}
	outFile.open("kuangsan.txt");
	if (!outFile.is_open()) {	// 判断文件是否打开失败
		cout << "文件打开失败！" << endl;
		exit(-1);
	}
	while (1) {
		inFile >> data;
		if(inFile.eof()) {
			break;
		}
		cout << data<<endl;
		outFile << data<<endl;
	}
inFile.close();
outFile.close();
return 0;
}

